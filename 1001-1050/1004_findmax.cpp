#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // 包含排序等常用算法
using namespace std;

struct Student
{
    string name;
    int score;
};

int main()
{
    int n;
    cin >> n;
    vector<Student> studentList;

    for (int i = 0; i < n; i++)
    {
        Student temp;
        cin>> temp.name>>temp.score;
        studentList.push_back(temp);
    }
    Student maxStudent = studentList[0];
    Student minStudent = studentList[0];
    for (int i = 1; i < studentList.size(); i++)
    {
        if (studentList[i].score > maxStudent.score)
        {
            maxStudent = studentList[i];
        };
        if (studentList[i].score < minStudent.score)
        {
            minStudent = studentList[i];
        }
    }

    cout << "Highest: " << maxStudent.name << endl;
    cout << "Lowest: " << minStudent.name;
}