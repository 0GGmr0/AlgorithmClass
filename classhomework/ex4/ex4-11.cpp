//
// Created by 郭孟然 on 2018/11/4.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    sort(s.begin(), s.end());
    cout << s.substr(0, s.length() - k);
    return 0;
}