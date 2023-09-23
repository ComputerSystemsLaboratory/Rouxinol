#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n,step[35] = {0};

    step[0] = 1;
    rep(i,30){
        step[i + 1]+=step[i];
        step[i + 2]+=step[i];
        step[i + 3]+=step[i];
    }

    while(cin >> n, n){
        step[n]+= 3649;
        cout << step[n] / 3650 << endl;
    }
}