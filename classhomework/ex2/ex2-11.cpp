////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//void gcd(int n, int& res) {
//    if(n <= 1) return;
//    for(int i = 2; i <= n / 2; i++) {
//        if(n % i == 0) {
//            res++;
//            gcd(i, res);
//        }
//    }
//}
//
//int main() {
//    int n, res = 0;
//    cin >> n;
//    gcd(n, res);
//    cout << res + 1;
//    return 0;
//}