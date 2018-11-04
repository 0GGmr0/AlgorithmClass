////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//char res[3] = {'A', 'B', 'C'};
//
//void move(int n, int a, int b) {
//    cout << n << " "
//         << res[a] << " "
//         << res[b] << endl;
//}
//
//void hanoi(int n, int a, int b, int c) {
//    if(n == 1) move(n, a, b);
//    else {
//        hanoi(n - 1, a, c, b);
//        move(n, a, b);
//        hanoi(n - 1, c, b, a);
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    hanoi(n, 0, 1, 2);
//    return 0;
//}