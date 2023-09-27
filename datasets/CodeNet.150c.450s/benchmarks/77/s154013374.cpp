#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <string>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    while (1){
        int n;
        cin >> n;
        if (n == 0){
            break;
        }

        vector<pair<int, int> > gems(n);

        for (auto itr = gems.begin(); itr != gems.end(); ++itr){
            int x, y;
            cin >> x >> y;
            *itr = make_pair(x, y);
        }

        int m;
        cin >> m;

        pair<int, int> pos(10, 10);
        int cnt = 0;

        for (int i = 0; i < m; i++){
            char dir;
            int step;
            cin >> dir >> step;
            if (dir == 'N'){
                for (int j = 0; j < step; j++){
                    pos.second++;
                    auto isGems = find(gems.begin(), gems.end(), pos);
                    if (isGems != gems.cend()){
                        gems.erase(isGems);
                        cnt++;
                    }
                }
            }
            else if (dir == 'E'){
                for (int j = 0; j < step; j++){
                    pos.first++;
                    auto isGems = find(gems.begin(), gems.end(), pos);
                    if (isGems != gems.cend()){
                        gems.erase(isGems);
                        cnt++;
                    }
                }
            }
            else if (dir == 'S'){
                for (int j = 0; j < step; j++){
                    pos.second--;
                    auto isGems = find(gems.begin(), gems.end(), pos);
                    if (isGems != gems.cend()){
                        gems.erase(isGems);
                        cnt++;
                    }
                }
            }
            else{
                for (int j = 0; j < step; j++){
                    pos.first--;
                    auto isGems = find(gems.begin(), gems.end(), pos);
                    if (isGems != gems.cend()){
                        gems.erase(isGems);
                        cnt++;
                    }
                }
            }
        }
        if (cnt == n){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    
    return 0;
}