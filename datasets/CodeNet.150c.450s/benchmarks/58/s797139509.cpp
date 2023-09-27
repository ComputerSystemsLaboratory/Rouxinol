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

stack<lli> s;

int main(){
    string st;
    while(cin >> st){
        if(st == "+"){
            lli x = s.top();
            s.pop();
            s.top() += x;
        }
        else if(st == "-"){
            lli x = s.top();
            s.pop();
            s.top() -= x;
        }
        else if(st == "*"){
            lli x = s.top();
            s.pop();
            s.top() *= x;
        }
        else if(st == "/"){
            lli x = s.top();
            s.pop();
            s.top() /= x;
        }
        else s.push(stoi(st));
    }
    cout << s.top() << endl;
    return 0;
}