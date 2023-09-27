#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int sh, sm, ss, th, m, ts;
vector<pair<int,int> > tim;

int main(){
    
    while(cin >> n, n){
        
        tim.clear();
        for(int i = 0; i < n; i++){
            scanf("%d:%d:%d %d:%d:%d", &sh, &sm, &ss, &th, &m, &ts);
            tim.push_back(make_pair(th*60*60+m*60+ts,sh*60*60+sm*60+ss));
            //cout << tim[i].second << ' ' << tim[i].first << endl;
        }
        sort(tim.begin(),tim.end());
        
        int mcnt = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = i+1; j < n;j++){
                if(tim[i].first > tim[j].second) cnt++;
            }
            mcnt = max(mcnt, cnt);
        }
        cout << mcnt + 1 << endl;
    }
}