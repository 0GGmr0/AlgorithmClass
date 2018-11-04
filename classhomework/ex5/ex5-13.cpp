//////
////// Created by 郭孟然 on 2018/11/3.
//////
//#include <iostream>
//using namespace std;
//
//int n; //人的总数
//int a[10][10]; //输入的数据
//int x[100]; // 记录每个人做了什么工作
//int res[100];
//int cw; //当前费用
//int bestw = 0x7ffffff; //最小费用
//
//void compute() {
//    cw = 0;
//    for(int i = 1; i <= n; i++){
//        cw += a[i][x[i]];
//    }
//    if(cw < bestw) {
//        bestw = cw;
//    }
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
//
//}
//
//
//int main() {
//    cin >> n;
//    for(int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> a[i][j];
//        }
//    }
//    for(int i = 1; i <= n; i++) x[i] = i;
//    backtrack(1);
//    cout << bestw << endl;
//    return 0;
//}