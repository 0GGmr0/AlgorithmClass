////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int num[100];
//    for(int i = 0; i < n; i++) cin >> num[i];
//    sort(num, num + n);
//    int res = 0;
//    for(int i = 1; i < n; i++) {
//        num[i] += num[i - 1];
//        res += num[i];
//    }
//    cout << res / (n * 1.0) << endl;
//}