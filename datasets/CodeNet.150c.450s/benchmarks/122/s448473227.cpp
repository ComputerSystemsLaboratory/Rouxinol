#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define REP(i, x, n) for(int i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;

int main(){
    priority_queue<int> s;
    while(true){
        string d;
        cin >> d;
        if(d == "end"){
            break;
        }
        if(d == "insert"){
            int k;
            cin >> k;
            s.push(k);
        }else if(d == "extract"){
            int a = s.top();
            cout << a << endl;
            s.pop();
        }
    }
    return 0;
}
