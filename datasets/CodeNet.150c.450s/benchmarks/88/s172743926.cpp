#include <bits/stdc++.h>
using namespace std;
int main(void){
    
    int h,w;
    vector<pair<int, pair<int, int>>> rec;
    for (int i=1; i<=150; i++){
        for (int j=i+1; j<=150; j++){
            rec.push_back(make_pair(i*i+j*j, make_pair(i,j)));
        }
    }
    sort(rec.begin(), rec.end());
    for (int i=0; i<rec.size(); i++){
        // cout << rec[i].first << " " << rec[i].second.first << " " << rec[i].second.second << endl;
    }
    
    while(cin >> h >> w, h){
        int s = h * h * w * w;

        for (int i=0; i<rec.size(); i++){
            if (rec[i].second.first == h && rec[i].second.second == w){
                cout << rec[i+1].second.first << " " << rec[i+1].second.second << endl;
                break;
            }
        }
        
        
    }
    return 0;
}

