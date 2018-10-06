import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

/**
 * @program: chess
 * @description: ChessUi
 * @author: ggmr
 * @create: 2018-10-05 18:09
 */
class MainUi extends JFrame implements ActionListener {
    private static int tile = 0;
    private int[][] record;
    private JLabel[][] Board;
    private JPanel chessBoard;
    private Color[] colors;
    private int arrSize;
    private final static int CHESS_BOARD_SIZE = 512;

    MainUi(int arrSize) {
        super("棋盘覆盖程序");

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLocation(600,200);//位置
        setSize(CHESS_BOARD_SIZE, CHESS_BOARD_SIZE + 20);
        this.arrSize = arrSize;

        // 初始化棋盘
        newChess();
        this.add(chessBoard);
        setVisible(true);
        setColor();

        this.record = new int[this.arrSize][this.arrSize];
        Random random = new Random();
        int specialX = random.nextInt(this.arrSize);
        int specialY = random.nextInt(this.arrSize);
        // 调用算法
        chessBoard(0, 0, specialX, specialY, this.arrSize);
        // 特殊方格特殊对待
        record[specialX][specialY] = -1;
        Board[specialX][specialY].setBackground(Color.BLACK);

        int chessNum = (this.arrSize * this.arrSize - 1) / 3;
        Random r = new Random();
        loop:
        for(int t = 0; t < chessNum; t++) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            int cou = 3;
            Color color = colors[r.nextInt(214)];
            for (int i = 0; i < this.arrSize; i++) {
                for (int j = 0; j < this.arrSize; j++) {
                    if (t == record[i][j]) {
                        Board[i][j].setBackground(color);
                        if (--cou == 0) continue loop;
                    }
                }
            }
        }
    }

    private void setColor() {
        colors = new Color[216];
        int cou = 0;
        for (int i = 0; i < 255; i += 50) {
            for (int j = 0; j < 255; j += 50) {
                for (int k = 0; k < 255; k += 50) {
                    Color c = new Color(i, j, k);
                    colors[cou++] = c;
                }
            }
        }
        System.out.println(cou);
    }


    private void newChess() {
        chessBoard = new JPanel();

        chessBoard.setLayout(null);
        Board = new JLabel[arrSize][arrSize];
        for(int i = 0; i < arrSize; i++) {
            for (int j = 0; j < arrSize; j++) {
                Board[i][j] = new JLabel();
                Board[i][j].setBounds(CHESS_BOARD_SIZE / arrSize * i,
                        CHESS_BOARD_SIZE / arrSize * j,
                        CHESS_BOARD_SIZE / arrSize,
                        CHESS_BOARD_SIZE / arrSize);
                Board[i][j].setOpaque(true);
                Board[i][j].setBackground(Color.white);
                chessBoard.add(Board[i][j]);
            }
        }
    }

    // tr 左上角方格的行号
    // tc 左上角方格的列号
    // dr 特殊方格所在的行号
    // dc 特殊方格所在的列号
    // size size = 2^k 棋盘规格2^k * 2^k
    private void chessBoard(int tr, int tc, int dr, int dc, int size) {
        if(size == 1) return;
        int t = tile++,  //L型骨牌
                s = size / 2; //分割棋盘

        // 覆盖左上角子棋盘
        if(dr < tr + s && dc < tc + s)
            // 特殊方格在这个棋盘中
             chessBoard(tr, tc, dr, dc, s);
        else {
            // 此棋盘中没有特殊方格
            // 用t号L型骨牌覆盖右下角
            record[tr + s - 1][tc + s - 1] = t;
            //覆盖其余方格
            chessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
        }

        // 覆盖右上角子棋盘
        if(dr < tr + s && dc >= tc + s)
            // 特殊方格在这个棋盘中
            chessBoard(tr, tc + s, dr, dc, s);
        else {
            // 这个棋盘没有特殊方格
            // 用t号L型骨牌覆盖左下角
            record[tr + s - 1][tc + s] = t;
            //覆盖其余方格
            chessBoard(tr, tc + s, tr + s - 1, tc + s, s);
        }

        // 覆盖左下角子棋盘
        if(dr >= tr + s && dc < tc + s)
            // 特殊方格在这个棋盘中
            chessBoard(tr + s, tc, dr, dc, s);
        else {
            // 这个棋盘没有特殊方格
            // 用t号L型骨牌覆盖右上角
            record[tr + s][tc + s - 1] = t;
            //覆盖其余方格
            chessBoard(tr + s, tc, tr + s, tc + s - 1, s);
        }

        // 覆盖右下角子棋盘
        if(dr >= tr + s && dc >= tc + s)
            // 特殊方格在这个棋盘中
            chessBoard(tr + s, tc + s, dr, dc, s);
        else {
            // 这个棋盘没有特殊方格
            // 用t号L型骨牌覆盖左上角
            record[tr + s][tc + s] = t;
            //覆盖其余方格
            chessBoard(tr + s, tc + s, tr + s, tc + s, s);
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {

    }
}
