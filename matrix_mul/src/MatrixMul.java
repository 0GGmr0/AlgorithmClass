import java.util.Scanner;

public class MatrixMul {

    private static int[] p;// 输入数据
    private static int n;  // 最后一个数据
    private static int[][] m; //动态矩阵
    private static int[][] s; //断点矩阵


    // 求断点矩阵s，下标从1开始
    private static void MatrixChain(int[] p, int n, int[][] m, int[][] s) {
        for(int i = 1; i <= n; i++) m[i][i] = 0; //当只剩一个矩阵的时候不需要乘
        for(int r = 2; r <= n; r++) {
            for(int i = 1; i <= n - r + 1; i++) {
                int j = i + r - 1;
                m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j]; //一个个的求出m[i,j]
                s[i][j] = i; //初始断点就是i
                for(int k = i + 1; k < j; k++) {
                    int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                    if(t < m[i][j]) {
                        m[i][j] = t;
                        s[i][j] = k;
                    }
                }
            }
        }
    }

    // 计算最优次序
    private static void TraceBack(int i, int j, int[][] s) {
        if (i == j)
            System.out.print("A" + i);
        else {
            if(i != 1 || j != n)
                System.out.print("(");
            TraceBack(i, s[i][j], s);
            TraceBack(s[i][j] + 1, j, s);
            if(i != 1 || j != n)
                System.out.print(")");
        }
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cou = 0;
        while(sc.hasNext()) {
            n = sc.nextInt();
            p = new int[n + 1];
            for(int i = 0; i < n + 1; i++) {
                p[i] = sc.nextInt();
            }
            m = new int[n + 1][n + 1];
            s = new int[n + 1][n + 1];
            System.out.println("Case " + ++cou);
            MatrixChain(p, n, m, s);
            System.out.print(m[1][n] + " ");
            TraceBack(1, n, s);
            System.out.println();
        }
    }
}
