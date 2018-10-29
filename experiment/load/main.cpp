#include <iostream>
#include <cstring>
using namespace std;

int n;  //物品的数量
int w[20]; //储存所有五篇的重量
int judge[20]; //判断对应的物品有没有装进去
int ship1, ship2; //每艘船的重量
int bestw; //最优解
int cw; //当前装载的重量
int r;
int num; //为了避免循环更新物品选择情况，选择这个变量来递归的更新judge数组
void traceback(int i) {
    if(i == n) {
        bestw = cw;
        num = n - 1;
        return;
    }
    r -= w[i]; //剩余的部分减去w[i]来作为是否进行右子树的判断条件
    if(cw + w[i] <= ship1) { //搜索左子树
        cw += w[i];
        traceback(i + 1);
        if(i == num) {judge[i] = 1; num--;}
        cw -= w[i];
    }
    if(cw + r > bestw){ // 搜索右子树，如果当前的和剩下的加起来还能大于当前的最优解才有进行下去的必要
        traceback(i + 1);
        if(i == num) {judge[i] = 0; num--;}
    }
    r += w[i];
}

int main() {
    int cou = 0;
    while(cin >> n) {
        //每次开始前都要对judge全部重新赋值为0
        for(int i = 0; i < n; i++) judge[i] = 0;
        num = -1;
        cw = 0;
        r = 0;
        bestw = 0;

        for(int i = 0; i < n; i++) {
            cin >> w[i];
            r += w[i];
        }
        cin >> ship1 >> ship2;

        traceback(0);

        //判断ship2能不能装得下剩下的
        cout <<"Case " << ++cou << endl;
        int res = 0; //ship2要放的重量
        for(int i = 0; i < n; i++) {
            if(judge[i] == 0) res += w[i];
        }

        if(res > ship2) {
            cout << "No" << endl;
        } else {
            cout << bestw << " ";
            for(int i = 0; i < n; i++) cout << judge[i];
            cout << endl;
        }
    }
    return 0;
}