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

priority_queue<lli> q;
string s;
lli x;

int main(){
    do{
        cin >> s;
        if(s == "insert"){
            cin >> x;
            q.push(x);
        }else if(s == "extract"){
            cout << q.top() << endl;
            q.pop();
        }
    }while(s != "end");
    return 0;
}