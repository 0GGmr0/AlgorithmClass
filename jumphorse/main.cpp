//
//  main.cpp
//  ttt
//
//  Created by 郭孟然 on 2018/10/27.
//  Copyright © 2018 郭孟然. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

//记录马可以跳的8个位置
int movex[8] = {1, 2,  2,  1, -1, -2, -2, -1};
int movey[8] = {2, 1, -1, -2, -2, -1,  1,  2};

int chess[8][8]; //棋盘 记录每个点有没有被走过,0没走过，1表示走过

int sx, sy, ex, ey;//start 和 end  记录起始点和结束点的横纵坐标
string sxy, exy;//输入的起始点和结束点的字符串


void bfs() {
    queue<tuple<int, int, int>> q;
    q.push(make_tuple(sx, sy, 0));
    //每次开始循环都要重新对chess归零
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            chess[i][j] = 0;

    chess[sx][sy] = 1;
    int step = 0;
    while(!q.empty()) {
        int nxx = get<0>(q.front());
        int nyy = get<1>(q.front());

        for(int i = 0; i < 8; i++) {
            int nx = nxx + movex[i];
            int ny = nyy + movey[i];

            if(nx >= 0 && ny >= 0 && nx < 8 && ny < 8 //棋盘没有越界访问
               && chess[nx][ny] == 0) { //棋盘的这点没有被遍历过
                chess[nx][ny] = 1;
                step = get<2>(q.front()) + 1;
                q.push(make_tuple(nx, ny, step));
                if(nx == ex && ny == ey) {
                    nxx = nx;
                    nyy = ny;
                    break; //如果p现在的位置就是终点，那么结束遍历
                }

            }
        }
        q.pop(); //bfs一次之后pop掉当前的这个值
        if(nxx == ex && nyy == ey) {
            cout << sxy << "==>" << exy << ": "
                 << step << " moves" << endl;
            return;
        }
    }
}

int main() {
    while(cin >> sxy >> exy) {
        sx = sxy[0] - 'a';
        sy = sxy[1] - '0' - 1;
        ex = exy[0] - 'a';
        ey = exy[1] - '0' - 1;
        bfs();
    }
    return 0;
}
