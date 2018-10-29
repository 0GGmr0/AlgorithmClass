//#include<iostream>
//#include<cmath>
//using namespace std;
//
//// 计算一个数的约数个数
//int div(int n) {
//    int sum = 0;
//    if(n <= 0) return 0;
//    if(n == 1) return 1;
//
//    for(int i=1;i<=n/2;i++) {
//        if (n % i == 0) sum++;
//    }
//    return sum + 1;
//}
//
//int main()
//{
//    int a,b;
//    int res = 1;
//    int final = 0;
//    while(cin>>a>>b) {
//        for (int i = a; i <= b; i++) {
//            int tmp = div(i);
//            if (res < tmp) {
//                res = tmp;
//                final = i;
//            }
//        }
//        cout << "有最多约数的数字为： " << final << endl
//             << "约数个数为" << res << endl;
//    }
//
//    return 0;
//}

