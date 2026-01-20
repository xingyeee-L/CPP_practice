#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // 包含排序等常用算法
using namespace std;

struct Player
{
    string name;
    int score;
    bool isBanned;

    Player(string n, int s, bool b) : name(n), score(s), isBanned(b) {}
};

bool compare(const Player &a, const Player &b)
{
    return a.score > b.score;
}

int main()
{
    int n;
    cin >> n;
    vector<Player> playerList;

    for (int i = 0; i < n; i++)
    {
        string n;
        int s;
        bool b;
        cin >> n >> s >> b;
        if (s > 100 && !b)
        {
            playerList.push_back(Player(n, s, b));
        }
    }
    sort(playerList.begin(), playerList.end(), compare);
    for (const auto &p : playerList)
    {
        cout << p.name << endl;
    }
    return 0;
}