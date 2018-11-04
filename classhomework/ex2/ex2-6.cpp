////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
////计算阶乘
//int fac(int n)
//{
//    if (n <= 1) return 1;
//    return fac(n - 1)*n;
//}
////计算当前排列在字典序列中的位置（从0开始）
//int order(const int* num, const int& n)
//{
//    int res = 0;
//    for (int i = 0; i<n; i++)
//    {
//        int m = num[i], count = 0;
//        for (int j = i; j < n; j++)
//            if (m > num[j]) count++;
//        res += count * fac(n - i - 1);
//    }
//    return res;
//}
//
//int main()
//{
//    int num[1000];
//    int n;
//    while (cin >> n) {
//        for (int i = 0; i<n; i++) cin >> num[i];
//        cout << order(num, n) << endl;
//        next_permutation(num, num + n); //全排列求下一个排序是什么
//        for (int i = 0; i < n; i++) cout << num[i] << " ";
//        cout << endl;
//    }
//    return 0;
//}