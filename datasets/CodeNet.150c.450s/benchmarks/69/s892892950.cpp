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
    int n;
    cin >> n;
    rep(i, n){
        vector<int> b, c;
        b.push_back(-1);
        c.push_back(-1);
        bool flag = true;
        rep(j, 10){
            int a;
            cin >> a;
            if(flag){
                if(b[b.size()-1] < c[c.size()-1]){
                    if(c[c.size()-1] < a){
                        c.push_back(a);
                    }else if(b[b.size()-1] < a){
                        b.push_back(a);
                    }else{
                        flag = false;
                    }
                }else{
                    if(b[b.size()-1] < a){
                        b.push_back(a);
                    }else if(c[c.size()-1] < a){
                        c.push_back(a);
                    }else{
                        flag = false;
                    }
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
