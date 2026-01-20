#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // 包含排序等常用算法
using namespace std;


struct Hero {
    string name;
    int power;
};

int main() {
    int n;
    cin >> n;
    vector<Hero> herolist;

    for (int i=0;i<n;i++){
        Hero temp;
        cin >> temp.name >> temp.power;
        herolist.push_back(temp);

    }

    for (int i=0;i<herolist.size();i++){
        if(herolist[i].power>100){
            cout<<"name:"<<herolist[i].name<<endl;
        }
    }
    return 0;
}