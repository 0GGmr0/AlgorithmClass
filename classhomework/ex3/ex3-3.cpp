////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include<iostream>
//using namespace std;
//int n;//石子的堆数
//int num[100];//每堆石子个数
//int minNum = 0x7ffffff; //最小值
//int maxNum = 0; //最大值
//int sum(int st, int x) {
//    int total = 0;
//    for (int i = st; i <= st + x - 1; i++) {
//        if(i == n) total = total + num[n];//取代num[0]
//        else total = total + num[i % n];
//    }
//    return total;
//}
//int merge(int choose)
//{
//    int score[100][100];//score[i][j]:从第i堆石子开始的j堆石子合并后最小得分
//    for(int i = 1; i <= n; i++) score[i][1] = 0;//一堆石子，合并得分为0
//    for (int i = 2; i <= n; i++)//合并的石子的堆数
//    {
//        for (int j = 1; j <= n; j++)//合并起始位置
//        {
//            score[j][i] = score[j][1] + score[j % n + 1][i - 1];
//            for (int k = 2; k <= i - 1; k++)//截断位置
//            {
//                int temp = score[j][k] + score[(j + k - 1) % n + 1][i - k];
//                if(choose == 0) {
//                    if (temp < score[j][i]) score[j][i] = temp;//从第i开始的k堆是：第i+0堆到第(i+k-1)%N堆
//                } else {
//                    if (temp > score[j][i]) score[j][i] = temp;//从第i开始的k堆是：第i+0堆到第(i+k-1)%N堆
//                }
//            }
//            score[j][i] += sum(j, i);
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        if(choose == 0) {
//            if (minNum > score[i][n]) minNum = score[i][n];//取从第i堆开始的N堆的最小者
//        } else{
//            if(maxNum < score[i][n]) maxNum = score[i][n];//取从第i堆开始的N堆的最大者
//        }
//    }
//    if(choose == 0) return minNum;
//    else return maxNum;
//}
//
//int main()
//{
//    cin >> n;//石子的堆数
//    for (int i=1;i<=n;i++) cin>>num[i];//每堆石子的数量//从1开始,num[0]不用
//    int min_count = merge(0);
//    int max_count = merge(1);
//    cout << min_count << endl;
//    cout << max_count << endl;
//
//    return 0;
//}