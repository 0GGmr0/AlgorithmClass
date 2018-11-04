//////
////// Created by 郭孟然 on 2018/11/3.
//////
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int n;  //物品的数量
//int w[20], v[20]; //储存物品的重量
//int judge[20]; //判断对应的物品有没有装进去
//int cur[20];
//int bestv = 0; //最优解
//int cw = 0; //当前装载的重量
//int cv = 0;
//int r = 0;
//int c; //要求得的解
//void traceback(int i) {
//    if(i == n) {
//        bestv = cv;
//        for(int j = 0; j < n; j++) judge[j] = cur[j];
//        return;
//    }
//    r -= v[i]; //剩余的部分减去w[i]来作为是否进行右子树的判断条件
//    if(cw + w[i] <= c) { //搜索左子树
//        cur[i] = 1;
//        cv += v[i]; cw += w[i];
//        traceback(i + 1);
//        cv -= v[i]; cw -= w[i];
//    }
//    if(cv + r > bestv){ // 搜索右子树，如果当前的和剩下的加起来还能大于当前的最优解才有进行下去的必要
//        cur[i] = 0;
//        traceback(i + 1);
//    }
//    r += v[i];
//}
//
//int main() {
//    cin >> n >> c;
//    for(int i = 0; i < n; i++) judge[i] = 0;
//    for(int i = 0; i < n; i++) cin >> v[i];
//    for(int i = 0; i < n; i++) {
//        cin >> w[i];
//        r += v[i];
//    }
//    traceback(0);
//    cout << bestv << endl;
//    for(int i = 0; i < n; i++) cout << judge[i]<< " ";
//    cout << endl;
//
//    return 0;
//}
