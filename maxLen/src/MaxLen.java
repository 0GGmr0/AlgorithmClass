import java.util.*;
/**
 * @program: maxlen
 * @description: 最长公共子序列
 * @author: ggmr
 * @create: 2018-10 10:16
 */
public class MaxLen {

    private static String[] l1;
    private static String[] l2;
    private static int[][] m;
    private static Set<String> set= new HashSet<>();

    private static void getMaxLen() {
        for (int i = 1; i <= l1.length; i++) {
            for (int j = 1; j <= l2.length; j++) {
                if (l1[i - 1].equals(l2[j - 1])) {
                    m[i][j] = m[i - 1][j - 1] + 1;
                } else {
                    m[i][j] = Math.max(m[i - 1][j], m[i][j - 1]);
                }
            }
        }
    }


    private static void printAllTrue(int n1, int n2, String s) {
        while (n1 > 0 && n2 > 0) {
            // 如果两个字符串相等，那么直接下一个
            if(l1[n1 - 1].equals(l2[n2 - 1])) {
                s += l1[n1 - 1];
                n1--;
                n2--;
            } else {
                if(m[n1 - 1][n2] > m[n1][n2 - 1])  n1--;
                else if(m[n1 - 1][n2] < m[n1][n2 - 1]) n2--;
                    // 如果它的上一级都相等，那么需要递归调用进行下一次判断
                else {
                    printAllTrue(n1 - 1, n2, s);
                    printAllTrue(n1, n2 - 1, s);
                    return;
                }
            }
        }

        set.add(s);
    }

    private static void reverse(String s) {
        int len = s.length();
        for(int i = len - 1; i >= 0; i--) {
            System.out.print(s.charAt(i));
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int n1, n2, n;
        Scanner scanner = new Scanner(System.in);
        int cou = 0;

        while (scanner.hasNext()) {
            n = scanner.nextInt();
            while (--n >= 0) {
                n1 = scanner.nextInt();
                n2 = scanner.nextInt();
                m = new int[n1 + 1][n2 + 1];
                scanner.nextLine();
                l1 = scanner.nextLine().split(" ");
                l2 = scanner.nextLine().split(" ");
                getMaxLen();
                System.out.println("Case " + ++cou);
                System.out.println(m[n1][n2]);


                System.out.println("表格m:");
                for (int i = 0; i < n1 + 1; i++) {
                    for (int j = 0; j < n2 + 1; j++) {
                        System.out.print(m[i][j] + " ");
                    }
                    System.out.println();
                }

                System.out.println();
                String s = "";
                printAllTrue(n1, n2, s);
                //获得到的字符串是反向的，需要逆序
                for(String sss : set) {
                    reverse(sss);
                }

            }
        }
    }
}
