#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> P;
//cout<<fixed<<setprecision(15);

int d;
int c[26];
int s[365][26];

int score(int *init){
    int last[26];
    for(int i=0;i<26;i++){
        last[i]=-1;
    }
    int ans=0;
    for(int i=0;i<d;i++){
        ans+=s[i][init[i]-1];
        last[init[i]-1]=i;
        for(int ct=0;ct<26;ct++){
            ans-=c[ct]*(i-last[ct]);
        }
        cout<<ans<<endl;
    }
    return ans;
}


int main(){
    cin>>d;
    for(int i=0;i<26;i++){
        cin>>c[i];
    }
    for(int x=0;x<d;x++){
        for(int y=0;y<26;y++){
            cin>>s[x][y];
        }
    }
    int iii[365];
    for(int i=0;i<d;i++){
        cin>>iii[i];
    }
    score(iii);
    return 0;
}