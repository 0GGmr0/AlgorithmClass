////
//// Created by 郭孟然 on 2018/11/3.
////
//#include <iostream>
//using namespace std;
//
//int n;  //原来的数
//int res;  //要变成的数
//int x[100]; //存放操作步骤的数组
//int k; //最少多少步过得去
//bool found; //判断是否找到了结果
//
//int f1(int &x) { return x * 3; }
//
//int f2(int &x) { return x / 2; }
//
//bool search(int dep, int n) {
//    if(dep > k) return false;
//    int n1 = f1(n); x[dep] = 2;
//    if(n1 == res || search(dep + 1, n1)) { found = true; return true; }
//    int n2 = f2(n); x[dep] = 1;
//    if(n2 == res || search(dep + 1, n2)) { found = true; return true; }
//    return false;
//}
//
//void compute() {
//    k = 1;
//    while(!search(1, n)) {
//        k++;
//        if(k > 100) break;
//        if(found) break;
//    }
//}
//
//int main() {
//    cin >> n >> res;
//    memset(x, 0, sizeof(x));
//    compute();
//    if(found) {
//        cout << k << endl;
//        for(int i = k; i >= 1; i--) {
//            if(x[i] == 1) cout << "g";
//            if(x[i] == 2) cout << "f";
//        }
//        cout <<endl;
//    } else {
//        cout << "fuck"<< endl;
//    }
//     return 0;
//}