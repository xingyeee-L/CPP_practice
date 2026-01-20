#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 存储在全局静态区
string words[] = {
    "zero", "one", "two", "three", "four", 
    "five", "six", "seven", "eight", "nine"
};

int main() {
    // 提速：在大数据量输入时很有用
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    if (!(cin >> input)) return 0;

    int sum = 0;
    for (char c : input) {
        sum += (c - '0');
    }

    string res = to_string(sum);
    
    // 经典的空格控制逻辑
    for (int i = 0; i < res.length(); i++) {
        if (i > 0) cout << " ";
        cout << words[res[i] - '0'];
    }
    cout << endl;

    return 0;
}