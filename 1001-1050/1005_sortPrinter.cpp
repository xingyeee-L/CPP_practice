#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // 包含排序等常用算法
using namespace std;

struct Player
{
    string name;
    int score;
    int level;
};
bool compare(Player &a, Player &b)
{
    if (a.score != b.score)
    {
        return a.score > b.score;
    }
    else if (a.level != b.level)
    {
        return a.level > b.level;
    }
    else
        return a.name < b.name;
};
int main()
{
    int n;
    vector<Player> Playerlist;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Player temp;
        cin >> temp.name >> temp.level >> temp.score;
        Playerlist.push_back(temp);
    }
    sort(Playerlist.begin(), Playerlist.end(), compare);

    for (int i = 0; i < Playerlist.size(); i++)
    {
        cout << Playerlist[i].name <<' '<< Playerlist[i].level<<' '<< Playerlist[i].score << endl;
    }
    return 0;
}