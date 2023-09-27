#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
 
using namespace std;
 
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)   FOR(i,0,n)
#define ll long long

int main()
{
    set<string> st;
    int N;
    string c, v;

    cin >> N;
    REP(i, N)
    {
        cin >> c >> v;
        if(c.compare("insert") == 0)
        {
            st.insert(v);
        }
        else if(c.compare("find") == 0)
        {
            if(st.find(v) != st.end()) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
}