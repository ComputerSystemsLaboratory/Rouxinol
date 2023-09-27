#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        
        vector< pair<int, int> > train;
        train.push_back(make_pair(0, 0));

        vector< pair<int, int> > time;
        int hs, ms, ss, he, me, se;
        char tmp;
        for(int i=0; i<n; i++){
            cin >> hs >> tmp >> ms >> tmp >> ss;
            cin >> he >> tmp >> me >> tmp >> se;
            time.push_back(make_pair(hs*3600 + ms*60 + ss, he*3600 + me*60 + se));
        }
        sort(time.begin(), time.end());

        int ans = 1;
        for(int i=0; i<n; i++){
            int sz = train.size();
            for(int j=0; j<sz; j++){
                if(train[j].second <= time[i].first){
                    train[j].second = time[i].second;
                    break;
                }
                if(j == sz-1){
                    train.push_back(make_pair(time[i].first, time[i].second));
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    
  return 0;
}