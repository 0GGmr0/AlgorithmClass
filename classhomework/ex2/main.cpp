#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int num = 0;  //重数
int maxNum = 0; //众数
int a[50000];

void more(int l, int r) {
    if(l > r) return;
    int mid = (l + r) >> 1;
    // 找到中位数的重数，用ll和rr分别记录左右
    int ll = a[mid], rr = a[mid];
    while(ll >= l && a[ll] == a[mid]) ll--; //找到最左
    while(rr <= r && a[rr] == a[mid]) rr++; //找到最右
    if(rr - ll + 1 - 2 > num) {
        num = rr - ll + 1 - 2;
        maxNum = a[mid];
    }
    if(ll - 0 > num) more(0, ll);
    if(r - rr > num) more(rr, n - 1);

}

int main() {
    while(cin >> n) {
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        more(0, n - 1);
        cout << maxNum << endl << num << endl;
    }
}