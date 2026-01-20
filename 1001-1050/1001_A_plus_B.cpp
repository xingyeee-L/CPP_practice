#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/**
 * 架构师建议：
 * 1. 即使是 PAT 这种小题，也要注意变量命名的可读性。
 * 2. 处理字符串逻辑时，先处理特殊符号（如负号）。
 */

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // 从 input.txt 读取测试数据
    #endif

    int numA, numB;
    // 1. 必须先读取输入，才能进行计算！
    if (!(std::cin >> numA >> numB)) return 0;

    int sumResult = numA + numB; // sumResult 存储在【栈区】
    
    // 2. 将结果转为字符串
    std::string s = std::to_string(sumResult); // s 是一个对象，其内容存储在【堆区/栈区具体看实现，但通常视为栈上的管理对象】
    std::string finalRes = ""; // 用于存放格式化后的结果
    
    int count = 0; // 计数器，记录处理了多少位数字
    
    // 3. 从后往前遍历字符串（这是处理千分位最简单的逻辑）
    for (int i = s.length() - 1; i >= 0; i--) {
        // 如果遇到负号，直接加到最前面并跳出循环
        if (s[i] == '-') {
            finalRes += '-';
            break;
        }

        finalRes += s[i];
        count++;

        // 每数三位，且后面还有数字，且下一个字符不是负号，就加个逗号
        if (count % 3 == 0 && i > 0 && s[i-1] != '-') {
            finalRes += ',';
        }
    }

    // 4. 因为是从后往前加的，最后需要反转回来
    std::reverse(finalRes.begin(), finalRes.end());

    std::cout << finalRes << std::endl;

    return 0;
}