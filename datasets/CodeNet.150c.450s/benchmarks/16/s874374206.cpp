#include <iostream>
#include <utility>
#include <string>
#include <deque>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    deque<int> s;
    deque<pair<int, int> > l;
    string g;
    cin>>g;
    int sum=0;
    for(int i=0; i<g.length(); i++) {
        if(g[i]=='\\') s.push_back(i);
        else if(g[i]=='/' && !s.empty()) {
            int area = i-s.back();
            sum+=area;
            while(!l.empty() && s.back()<l.back().first) {
                area+=l.back().second;
                l.pop_back();
            }
            l.push_back(make_pair(s.back(), area));
            s.pop_back();
        }
    }
    cout<<sum<<'\n';
    cout<<l.size();
    for(int i=0; i<l.size(); i++) {
        cout<<' '<<l[i].second;
    }
    cout<<'\n';
    return 0;
}