#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

string dir = "NESW";
int dx[4] = { 0, 1, 0,-1};
int dy[4] = { 1, 0,-1, 0};

int n;
vector<pair<int, int> > jewels;
bool isGotten[20] = {false};

void getJewel(int x, int y, int &cnt){
    for(int i = 0; i < n; i++){
        if(!isGotten[i] && x == jewels[i].first && y == jewels[i].second){
            isGotten[i] = true;
            cnt++;
        }
    }
}

int main(int argc, const char * argv[]) {
    while(1){
        cin >> n;
        if(!n) break;
        
        jewels.clear();
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            jewels.push_back(make_pair(x, y));
            isGotten[i] = false;
        }
        
        int m; cin >> m;
        int cnt = 0;
        pair<int, int> pos = make_pair(10, 10);
        for(int i = 0; i < m; i++){
            char d_char; int r; cin >> d_char >> r;
            int d_id = dir.find(d_char);
            while(r){
                getJewel(pos.first, pos.second, cnt);
                pos.first += dx[d_id];
                pos.second += dy[d_id];
                r--;
            }
            getJewel(pos.first, pos.second, cnt);
        }
        
        if(cnt == n) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}