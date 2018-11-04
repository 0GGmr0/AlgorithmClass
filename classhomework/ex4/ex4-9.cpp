//#include <iostream>
//using namespace std;
//
//int main() {
//    int n,k;
//    int road[100];
//    cin >> n >> k;
//    for(int i = 0;i <= k;i++) cin >> road[i];
//    int res = 0;
//    for(int i = 0;i <= k;i++) {
//        if(road[i] > n) {
//            cout << "no" << endl;
//            return 0;
//        }
//    }
//    for(int i = 0, s = 0; i <= k; i++) {
//        s += road[i];
//        if(s > n) {
//            res++;
//            s = road[i];
//        }
//    }
//    cout << res << endl;
//
//}