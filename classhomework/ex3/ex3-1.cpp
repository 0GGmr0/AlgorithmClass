////
//// Created by 郭孟然 on 2018/11/4.
////
//
//#include <iostream>
//using namespace std;
//
//int n;
//int a[100], b[100];
///**
// * dp[i][j]表示第i个作业，机器a花费不小于j时间的前提下，
// * 机器b完成作业所需的最小时间
// */
//int dp[100][100];
//int sum = 0;
//int ans = 0x7ffffff;
//void schedule() {
//    for(int i = 1; i <= n; i++) {
//        for (int j = 0; j <= sum; j++) {
//            if (j < a[i - 1]) //做第i个工作交给b做好
//                dp[i][j] = dp[i - 1][j] + b[i - 1];
//                /**
//                 * 给a处理的话b花费的时间是dp[i - 1][j - a[i]]
//                 * 给b处理的话b花费的时间是dp[i - 1][j] + b[i - 1]
//                 * 选取小的作为dp[i][j]的值
//                 */
//            else if (dp[i - 1][j - a[i - 1]] > dp[i - 1][j] + b[i - 1])
//                dp[i][j] = dp[i - 1][j] + b[i - 1];
//            else
//                dp[i][j] = dp[i - 1][j - a[i - 1]];
//        }
//    }
//    for(int i = 0, tmp = 0; i <= sum; i++) {
//        tmp = dp[n][i] > i ? dp[n][i] : i;
//        if(tmp < ans) ans = tmp;
//    }
//}
//
//int main() {
//    cin >> n;
//    // 先假设全部由a完成，之后再更改
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    for(int i = 0; i < n; i++) cin >> b[i];
//    schedule();
//    cout << ans << endl;
//    return 0;
//}
////6
////2 5 7 10 5 2
////3 8 4 11 3 4