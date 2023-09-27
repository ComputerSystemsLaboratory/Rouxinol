#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x);

typedef pair<int ,int> P;

class car
{
    int id;
    int num;
    public:
        car(int x, int y){ id=x; num=y; }
};


int main()
{
    int N,M;
    set<string> u;
    vector<string> t;
    //しまってる　0 　空いている 1
    int state = 0;
    //vector<int> state;
    cin >> N;
    string tmp;
    rep(i,N)
    {
        cin >> tmp;
        u.insert(tmp);
    }
    cin >> M;
    rep(i,M)
    {
        cin >> tmp;
        t.push_back(tmp);
    }
    rep(i,M)
    {
        if ( u.find( t[i] ) == u.end() ) { cout << "Unknown " << t[i] << endl; }
        else if(state == 0) {cout << "Opened by " << t[i] << endl; state = 1; }
        else if(state == 1) {cout << "Closed by " << t[i] << endl; state = 0; }
    }
}