#include <iostream>
#include <cstring>
using namespace std;

int a[50][50]; //存路径权值的矩阵
int pre[50]; //用来溯源的数组
int dist[50]; //用来存最短路径的数组
bool s[50]; //用来判断这个点是不是已经找到了最短路径
int l[50]; //计算路径的长度，便于在两条路径相同的时候更新
int maxNum = 0xfffffff;
//dijkstra算法
void dijkstra(int ori, int n) {
    for(int i = 0; i < n; i++) { //初始化
        memset(l, 0, sizeof(int));
        if(a[ori][i] > 0) {
            dist[i] = a[ori][i];
            l[i] = 1;
        }
        else dist[i] = maxNum;

        s[i] = false;
        if(dist[i] == maxNum) pre[i] = -1;
        else pre[i] = ori;
    }
    s[ori] = true;

    for(int i = 0; i < n; i++) { //不管算法怎么做，终归要遍历一遍整个图
        int u = ori;
        int temp = maxNum;
        for(int j = 0; j < n; j++) { //寻找目前dist最小值的u作为下次访问的对象
            if(dist[j] < temp && !s[j]) {
                u = j;
                temp = dist[j];
            }
        }
        s[u] = true;
        for(int j = 0; j < n; j++) { //遍历以u为起点的那一行来更新dist数组
            if(a[u][j] < maxNum && a[u][j] > 0 && !s[j]) {
                //如果dist[j]目前的值还不如dist[u] 再加那条路径到这里的距离小，那么不如更新一下
                if(dist[u] + a[u][j] < dist[j] ||
                  (dist[u] + a[u][j] == dist[j] && l[j] > l[u] + 1)) { //如果权值相同，但是路径长度更短的话，选择这个
                    dist[j] = dist[u] + a[u][j];
                    pre[j] = u;
                    l[j] = l[u] + 1;
                }
            }
        }
    }
}

void output(int cou, int ori, int dst) {

    cout << "Case " << cou << endl;
    cout << "The least distance from "
         << ori + 1 << "->" << dst + 1
         << " is " << dist[dst] << endl;
    cout << "the path is ";
    int res[50];
    memset(res, -1, sizeof(int));
    int n = 0, u = dst;
    while(pre[u] != -1) {
        res[n++] = pre[u];
        u = pre[u];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << res[i] + 1<<"->";
    }
    cout << dst + 1 << endl;
}

int main() {
    int n;
    int cou = 0;
    while(cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int ori, dst;  //ori是出发点  dst是目的地
        cin >> ori >> dst;

        dijkstra(ori - 1, n);
        output(++cou, ori - 1, dst - 1);
    }
    return 0;
}