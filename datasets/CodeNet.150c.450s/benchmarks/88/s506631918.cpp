#include<bits/stdc++.h>

using namespace std;
using LL = long long;

int main(){
    int h,w;
    vector<pair<int, pair<int, int>>> list;
    for(int i = 1;i <= 150;i++){
        for(int j = 1;j <= 150;j++){
            if(j > i)list.push_back(make_pair(i * i + j * j, make_pair(i, j)));
        }
    }
    sort(list.begin(), list.end());
    while(cin >> h >> w){
        if(h == 0 && w == 0)return 0;
        pair<int, pair<int, int>> p(h * h + w * w, make_pair(h, w));
        int i = 0;
        while(list.at(i) <= p){
            i++;
        }
        cout<<list[i].second.first<<" "<<list[i].second.second<<endl;
    }
}

