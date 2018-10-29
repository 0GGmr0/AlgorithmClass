

public class Main
{
    static int arrSize=0;
    public static void main(String[] args) {
        StartUi st = new StartUi();//演示窗口
        while(arrSize == 0) {
            System.out.println("郭孟然真菜");
        }
        MainUi ui = new MainUi(arrSize);
    }
}