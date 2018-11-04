////
//// Created by 郭孟然 on 2018/11/3.
////
//
//#include <iostream>
//#include <fstream>
//#include <queue>
//#include <cmath>
//using namespace std;
//
//int num[100], a[100], op[100];  //输入的数
//int n, m, k;  //整数个数，目标数
//int x[100]; //判断是否使用过
//
//bool found() {
//    int res = num[1];
//    for(int i = 1; i < k; i++) {
//        switch (op[i]) {
//            case 1: res += num[i + 1]; break;
//            case 2: res -= num[i + 1]; break;
//            case 3: res *= num[i + 1]; break;
//            case 4: res /= num[i + 1]; break;
//        }
//    }
//    return res == m;
//}
//
//bool search(int dep) {
//    if(dep > k) return found();
//    for(int i = 1; i <= n; i++) {
//        if(x[i] == 0) {
//            num[dep] = a[i];
//            x[i] = 1;
//            for(int j = 1; j<= 4; j++) {
//                op[dep] = j;
//                if(search(dep + 1)) return true;
//            }
//            x[i] = 0;
//        }
//    }
//    return false;
//}
//
//
//
//int main()
//{
//    cin >> n >> m;
//    for(int i = 1; i <= n; i++) cin >> a[i];
//    memset(x, 0, sizeof(x));
//    memset(op, 0, sizeof(op));
//    for(k = 1; k<= n; k++) {
//        if(search(1)) {
//            cout << k - 1 << endl;
//            cout << num[1];
//            for(int i = 1; i< k; i++) {
//                switch (op[i]) {
//                    case 1: cout << "+" << num[i + 1]; continue;
//                    case 2: cout << "-" << num[i + 1]; continue;
//                    case 3: cout << "*" << num[i + 1]; continue;
//                    case 4: cout << "/" << num[i + 1]; continue;
//                }
//            }
//            return 0;
//        }
//    }
//    return 0;
//}