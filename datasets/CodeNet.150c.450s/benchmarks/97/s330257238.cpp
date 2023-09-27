#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;
int N;

int main() {
    while(cin >> N, N){
        vector<pair<int, int> > vp;
        vp.push_back({0, 0});
        for(int i=1; i<N; ++i){
            int n, d; cin >> n >> d;
            int x, y;
            if(d==0){
                x = vp[n].first-1;
                y = vp[n].second;
            }else if(d==1){
                x = vp[n].first;
                y = vp[n].second-1;
            }else if(d==2){
                x = vp[n].first+1;
                y = vp[n].second;
            }else if(d==3){
                x = vp[n].first;
                y = vp[n].second+1;
            } 
            vp.push_back({x, y});            
        }
        int ansxu=0, ansxd=0, ansyl=0, ansyr=0;
        for(int i=0; i<vp.size(); ++i){
            ansxu = max(ansxu, vp[i].first);
            if(vp[i].first<0){
                ansxd = min(ansxd, vp[i].first);
            }
            ansyr = max(ansyr, vp[i].second);
            if(vp[i].second<0){
                ansyl = min(ansyl, vp[i].second);
            }
        }
        cout << ansxu-ansxd+1 << " " << -ansyl+ansyr+1 << endl;
    }
    
    return 0;
}
