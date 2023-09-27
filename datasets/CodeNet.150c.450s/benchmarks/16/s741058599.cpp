#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

stack<lli> h;
string s;
lli ans = 0;
vll edge;
vll area;
vll area_list;

int main(){
    cin >> s;
    edge = vll(s.size()+1);
    area = vll(s.size()+1);
    for(lli i = 0;i < s.size();i++){
        if(s[i] == '\\'){
            h.push(i);
        }
        else if(s[i] == '/'){
            if(!h.empty()){
                ans += i - h.top();
                edge[h.top()] = i;
                h.pop();

            }
        }
        area[i] = ans;
    }
    cout << ans << endl;
    for(lli i = 0;i < s.size();i++){
        if(edge[i] == 0) continue;
        area_list.push_back(area[edge[i]] - area[i]);
        i = edge[i];
    }
    cout << area_list.size();
    for(lli i = 0;i < area_list.size();i++){
        cout << " " << area_list[i];
    }
    cout << endl;
    return 0;
}