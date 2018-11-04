////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//void search(int n, int &res) {
//    if(n == 1) {
//        res++;
//        return;
//    }
//    for(int i = 1; i <= n / 2; i++) {
//        res++;
//        if(i == 1) continue;
//        search(i, res);
//    }
//}
//
//int main() {
//    int n;
//    while(cin >> n) {
//        if(n == 0) {
//            cout << 0 << endl;
//            return 0;
//        }
//        int res = 1;
//        search(n, res);
//        cout << res << endl;
//    }
//    return 0;
//}
