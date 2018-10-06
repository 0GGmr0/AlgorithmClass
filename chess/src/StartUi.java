import javax.swing.*;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

/**
 * @program: chess
 * @description: 开始Ui
 * @author: ggmr
 * @create: 2018-10-06 10:44
 */
class StartUi extends JFrame {

    StartUi() {
        super("棋盘覆盖程序");
//        Container container = this.getContentPane();
        // 启动程序按钮
        JButton button = new JButton("启动程序");
        // 输入框
        JTextField msg = new JTextField(8);

        // 监听按钮
        button.addActionListener(e -> {
            Main.arrSize = Integer.parseInt(msg.getText());
            this.dispose();
        });
        // 这个是单纯的为了和最上面有一行的距离写的
        JLabel blockLabel = new JLabel(" ");
        // 最上面的标签行
        JLabel label = new JLabel("\n请输入2^k大小的数字，点击开始按钮");
        // 让上面这句话居中
        label.setHorizontalAlignment(SwingConstants.CENTER);
        // 位于整个窗体最上方的标签
        JPanel topMsg = new JPanel(new FlowLayout());
        topMsg.add(blockLabel, BorderLayout.NORTH);
        topMsg.add(label, BorderLayout.CENTER);

        // 输入框和开始执行程序按钮
        JPanel top = new JPanel(new FlowLayout());
        top.add(msg);
        top.add(button);

        // 最终将弄好的上半部分弄到窗体里面去
        this.add(topMsg, BorderLayout.NORTH);
        this.add(top);
        this.setSize(280, 100);
        this.setLocation(600, 200);
        this.setVisible(true);
        this.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                int a = JOptionPane.showConfirmDialog(null, "确定关闭吗？",
                        "温馨提示", JOptionPane.YES_NO_OPTION);
                if (a == 0) {
                    System.exit(0);
                }
            }
        });
    }
}
