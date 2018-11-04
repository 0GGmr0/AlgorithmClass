//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int n;  //物品的数量
//int w[20]; //储存所有物品的重量
//int judge[20]; //判断对应的物品有没有装进去
//int cur[20];
//int bestw; //最优解
//int cw; //当前装载的重量
//int r;
//int res; //要求得的解
//bool traceback(int i) {
//    if(i == n ) {
//        bestw = cw;
//        for(int j = 0; j < n; j++) judge[j] = cur[j];
//        return bestw == res;
//    }
//    r -= w[i]; //剩余的部分减去w[i]来作为是否进行右子树的判断条件
//    if(cw + w[i] <= res) { //搜索左子树
//        cur[i] = 1;
//        cw += w[i];
//        if (traceback(i + 1)) return true;
//        cw -= w[i];
//    }
//    if(cw + r > bestw){ // 搜索右子树，如果当前的和剩下的加起来还能大于当前的最优解才有进行下去的必要
//        cur[i] = 0;
//        if(traceback(i + 1)) return true;
//    }
//    r += w[i];
//    return false;
//}
//
//int main() {
//    int cou = 0;
//    while(cin >> n >> res) {
//        //每次开始前都要对judge全部重新赋值为0
//        for(int i = 0; i < n; i++) judge[i] = 0;
//        cw = 0;
//        r = 0;
//        bestw = 0;
//
//        for(int i = 0; i < n; i++) {
//            cin >> w[i];
//            r += w[i];
//        }
//        if(traceback(0)) {
//            for(int i = 0; i < n; i++) {
//                if(judge[i] == 1) cout << w[i] << " ";
//            }
//        } else {
//            cout << "no response";
//        }
//        cout << endl;
//    }
//    return 0;
//}
