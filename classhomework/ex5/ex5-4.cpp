////
//// Created by 郭孟然 on 2018/11/3.
////
//#include <iostream>
//using namespace std;
//
//int n;
//int p[10][10], q[10][10];
//int x[100];
//int cw;
//int bestw;
//void compute() {
//    cw = 0;
//    for(int i = 1; i <= n; i++) cw += p[i][x[i]] * q[x[i]][i];
//    if(cw > bestw) bestw = cw;
//}
//
//void backtrack(int i) {
//    if(i > n) compute();
//    else {
//        for(int j = i; j <= n; j++) {
//            swap(x[i], x[j]);
//            backtrack(i + 1);
//            swap(x[j], x[i]);
//        }
//    }
//}
//
//
//
//int main() {
//    cin >> n;
//    for(int i = 1; i <= n; i ++) {
//        for(int j = 1; j <= n; j++) cin >> p[i][j];
//    }
//    for(int i = 1; i <= n; i ++) {
//        for(int j = 1; j <= n; j++) cin >> q[i][j];
//    }
//    for(int i = 1; i <= n; i++) x[i] = i;
//    backtrack(1);
//    cout << bestw << endl;
//    return 0;
//}