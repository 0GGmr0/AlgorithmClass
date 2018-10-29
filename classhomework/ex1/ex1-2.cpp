//#include <iostream>
//#include<cstring>
//#include <string>
//using namespace std;
//
//// 计算数学中的组合数C
//int combination(int m,int n)
//{
//    int sum=1,sum1=1;
//    int i;
//    for(i=1;i<=n;i++)
//        sum*=i;
//    for(i=m;i>m-n;i--)
//        sum1*=i;
//    return sum1/sum;
//}
//
//int main()
//{
//    int n;
//    int sum;
//    string s;
//    int a[6];
//    cin >> n;
//    while(n--)
//    {
//        sum=1;
//        cin >> s;
//        int len = s.size();
//        for(int i = 1; i < len; i++) sum += combination(26,i);  //小于字符串长度的所有情况
//
//        for(int i = 0; i < len; i++) a[i] = s[i] - 96;  //计算每个字符从a开始的数值
//
//        int temp = 1;
//        for(int i = len ; i > 0; i--) {
//            for(int j = temp; j < a[len-i]; j++) {
//                sum += combination(26 - j ,i - 1);    //依次扫描字符，计算所有情况
//            }
//            temp = a[len-i] + 1;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}