#include<bits/stdc++.h>

#define ll long long
#define fornum(A,B,C) for(A=B;A<C;++A)
#define pii pair<int,int>
#define pll pair<ll,ll>

using namespace std;

/////////////////////////////////////////////////////
ll T;
ll N, A[1010];
char S[1010];

ll i, j, k;

void q(){
    scanf("%lld", &N);
    fornum(i,0,N){
        scanf("%lld", &A[i]);
    }
    scanf("%s", S);
    vector<vector<ll>> dp(N + 5, vector<ll>(N + 5));
    vector<ll> mk(90);
    i = N;
    while(i){
        --i;
        ll a = A[i];
        if(S[i]=='0'){
            fornum(j,0,90){
                if(a>>j==0)
                    break;
                if((a>>j)&1){
                    if(mk[j]==0){
                        mk[j] = a;
                        break;
                    }
                    a ^= mk[j];
                }
            }
        }else{
            fornum(j,0,90){
                if((a>>j)==0)
                    break;
                if((a>>j)&1){
                    if(mk[j]==0){
                        printf("1\n");
                        return;
                    }
                    a ^= mk[j];
                }
            }
        }
        //fornum(j,0,10){
        //    printf("%lld ", mk[j]);
        //}
        //printf("\n");
    }
    printf("0\n");
}

int main(){
    scanf("%lld", &T);
    while(T--){
        q();
    }
    return 0;
}