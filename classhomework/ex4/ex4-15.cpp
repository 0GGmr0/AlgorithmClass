////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//long long greedy(int n) {
//    if(n <= 2) return n;
//    int tmp = n;
//    int num[100];
//    int cou = 2;
//    while(true) {
//        if(n > cou) {
//            n -= cou;
//            num[cou] = cou;
//            cou++;
//        } else {
//            int res = 1;
//            cou--;
//            while(n != 0) {
//                num[cou]++;
//                res *= num[cou];
//                cou--;
//                n--;
//            }
//            for(int i = cou; i >= 2; i--) {
//                res *= num[i];
//            }
//            return res;
//        }
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    long long res = greedy(n);
//    cout << res << endl;
//    return 0;
//}