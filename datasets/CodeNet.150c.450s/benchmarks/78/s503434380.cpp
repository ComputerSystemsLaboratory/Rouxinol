#include<bits/stdc++.h>
#define X first
#define Y second
#define pb push_back
#define eb emplace_back

#define rep(X,Y) for(int (X) = 0; (X) < (Y) ; ++(X))
#define all(X) (X).begin,(X).end
#define reps(i,j,k) for(inti=(j); i <= (k); ++(i))
#define sz size()
#define in(i,j,k) ((i) >= (j) && (i) <= (k))

using namespace std;

typedef pair<int,int> pii;

int d[2000000];
int dd[2000000];

int main(){
    
    vector<int> t;
    vector<int> k;
    int i = 0;
    rep(i, 2000000)d[i]=dd[i]=1000000000;
    while((i*(i+1)*(i+2))/6 <= 1000000){
        ++i;
        t.pb(i*(i+1)*(i+2)/6);
        if((i*(i+1)*(i+2)/6)%2) k.pb(i*(i+1)*(i+2)/6);
    }

    d[0] = dd[0] = 0;

    rep(i, 1000000){
        rep(j, t.sz){
            int tmp = i+t[j];
            if(tmp < 1000001)d[tmp] = min(d[tmp], d[i]+1);
        }
        rep(j, k.sz){
            int tmp = i+k[j];
            if(tmp < 1000001)dd[tmp] = min(dd[tmp], dd[i]+1);
        }
    }
    int n;

    while(scanf("%d", &n), n){
        printf("%d %d\n", d[n], dd[n]);
    }
    
    return 0;
}