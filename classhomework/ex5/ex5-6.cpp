////
//// Created by 郭孟然 on 2018/11/3.
////
//
//#include<iostream>
//#include<fstream>
//#include<algorithm>
//#include "ctime"
//using namespace std;
//
//
//int n;
//int sum[10][100];
//bool s[10][100];
//int t[100];
//int best[100];
//int k;  //最大的数字k
//
//
//void record()
//{
//    for(int i=1; i<=n; i++)  //划分个数
//    {
//        for(int j=1; j<=k; j++)   //每个数字
//            if(i == t[j])  //如果数字j属于第i个划分
//                best[j] =  i;
//    }
//}
//
//
//clock_t start, endd;
//double duration = 0;
//bool backtrack(int dep)
//{
//
//    endd = clock();
//    duration += (double) (endd - start)/CLOCKS_PER_SEC;
//    start = endd;
//    if(duration > 15.0)
//    {
//        cout << duration << endl;
//        cout << "No Solution!\n";
//        return false;
//    }
//
//    if(dep > k)
//    {
//        record();
//        return true;
//    }
//    for(int i=1; i<=n; i++)  //第i个划分
//        if(sum[i][dep] == 0)
//        {
//            t[dep] = i;  //dep被选入划分i中
//            s[i][dep] = true;
//            for(int j=1; j<dep; j++)
//                if(s[i][j])  //如果数字j已加入划分i中
//                    sum[i][dep+j]++;  //j+dep便不能再加入
//            if(backtrack(dep+1))
//                return true;
//            for(int j=1; j<dep; j++)
//                if(s[i][j])
//                    sum[i][dep+j]--;
//            s[i][dep] = false;
//        }
//    return false;
//}
//
//void search()
//{
//    k = n;
//    while(true)
//    {
//        memset(sum, 0, sizeof(sum));
//        memset(t, 0, sizeof(t));
//        memset(s, 0, sizeof(s));
//
//        if(backtrack(1))
//            ++k;  //深度逐渐加大
//        else
//            break;
//    }
//    --k;
//}
//
//int main()
//{
//    cin >> n;
//    search();
//    cout << "\n计算结果为：F(" << n << ") = " << k << endl;
//    return 0;
//}
