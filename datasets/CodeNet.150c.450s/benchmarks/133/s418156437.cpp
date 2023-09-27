#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define BIL ((ll)1e9)
#define MOD ((ll)1e9+7)
#define INF (1LL<<62)           //1LL<<63でオーバーフロー

int main(int argc,char* argv[]){
     int d;
    cin >> d;   //d=365

    const int contest=26;
    vector<int> c(contest);
    for(auto &x:c)
        cin >> x;

    vector<vector<int>> s(d,vector<int>(contest,0));
    for(int i=0;i<d;i++){
        for(int j=0;j<contest;j++)
            cin >> s.at(i).at(j);
    }

    vector<int> t(d);
    for(auto &x:t)
        cin >> x;
    
    vector<int> last(contest+1,0),satisfaction(d+1);
    satisfaction.at(0)=0;   
    for(int i=1;i<d+1;i++){
        int dissatis=0;
        int act=t.at(i-1);
        last.at(act)=i;
        for(int j=0;j<contest;j++){
            dissatis+=c.at(j)*(i-last.at(j+1));
        }
        satisfaction.at(i)=satisfaction.at(i-1)+s.at(i-1).at(act-1)-dissatis;

        cout << satisfaction.at(i) << endl;
    }

    return 0;
}
