////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, k;
//    int a[100];
//    cin >> n >> k;
//    for(int i = 0; i < n; i++) cin >> a[i];
//    sort(a, a + n);
//    int max=k+a[0];
//    int res = 1;
//    for(int i=1; i < n; i++) {
//        if(max < a[i]) {
//            max=a[i]+k;
//            res++;
//        }
//    }
//    cout << res << endl;
//    return 0;
//}