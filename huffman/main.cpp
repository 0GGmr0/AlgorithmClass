#include <iostream>
#include <queue>
#include <map>
#include <string>
using namespace std;

int cou = 0;

class node {
public:
    int v;  //权值
    int w;  //优先级
    node *l; //左孩子
    node *r; //右孩子
    string code; //哈夫曼编码

    node(int v, int w) {
        this->v = v;
        this->w = w;
        this->code = "";
        l = nullptr;
        r = nullptr;
    }


};

struct cmp
{//优先队列的键由val大小决定，大的在前，如果一样，id小的排在前面
    bool operator()(node *x, node *y)
    {
        return x->v > y->v || (x->v == y->v && x->w < y->w);
    }
};


node* huffman(node **m, const int& n) {
    priority_queue<node*, vector<node *>, cmp> pq;
    for(int i = 0; i < n; i++) pq.push(m[i]);
    node *a, *b;
    // 通过优先队列计算出哈夫曼树
    while(!pq.empty()) {
        if(pq.size() == 1) return pq.top();
        a = pq.top(), pq.pop();
        b = pq.top(), pq.pop();
        node *ab = new node(a->v + b->v, cou++);
        ab->l = b;
        ab->r = a;
        pq.push(ab);
    }
}

void dfs(node *p, string s) {
    if(p == nullptr) return;
    p->code  = s;
    string str = s;
    if(p->l != nullptr) {
        str += "0";
        dfs(p->l, str);
    }
    if(p->r != nullptr) {
        s += "1";
        dfs(p->r, s);
    }
}

int main() {
    int t;
    cin >> t;
    int c = 0;
    while(t--) {
        int n;
        cin >> n;
        int tmp;
        node *m[50]; // 输入数据的数组
        for(int i = 0; i < n; i++) {
            cin >> tmp;
            m[i] = new node(tmp, cou++); //输入的数据
        }
        string s;
        node *root = huffman(m, n);
        dfs(root, s);
        cout << "Case " << ++c << endl;
        for(int i = 0; i < n; i++) {
            cout << m[i]->v << " " << m[i]->code << endl;
        }
    }
    return 0;
}