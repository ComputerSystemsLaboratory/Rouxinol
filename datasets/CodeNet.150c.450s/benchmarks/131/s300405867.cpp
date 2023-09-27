#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
#include <queue>
#define INF 1e9+7
#define rep(i,n) for(int i=0;i<n;i++)
#define NO cout<<"NO"<<endl;
#define YES cout << "YES"<<endl;
#define No cout << "No"<<endl;
#define Yes cout << "Yes"<<endl;
#define all(a) a.begin(),a.end()
#define P pair<int,int>

using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

//(int)'a'は97 (int)'A'は65 (int)'1'は49
//おまじない
//UnionFind

const int maxn=100000;

int keta(ll n){
    int res=0;
    while(n>0){
        res++;
        n=n/10;
    }
    return res;
}

int main(){
    
    while(true){
        ll a,L,anext;
        vector<pair<ll,int> > v;
        ll cnt=1;
        cin >> a>> L;
        if(a==0&&L==0)break;
        v.push_back(pair<ll,int>(a,0));
        anext=a;
        
        while(true){
            int nketa;
            int dig[10]={0};
            ll Ma=0,Mi=0;
            
            ll sub=anext;
            while(sub>0){
                dig[sub%10]++;
                sub=sub/10;
            }
            
            for(int i=9;i>=1;i--){
                rep(j,dig[i]){
                    Ma = Ma*10+i;
                }
            }
            nketa=keta(Ma);
            rep(i,L-nketa){
                Ma=Ma*10;
            }
            
            for(int i=1;i<10;i++){
                rep(j,dig[i]){
                    Mi = Mi*10+i;
                }
            }
            anext = Ma-Mi;
            //cout << Ma <<' '<<Mi<<' '<<anext<<endl;
            int it=INF;
            rep(j,v.size()){
                if(anext==v[j].first){
                    it = v[j].second;
                    break;
                }
            }
            if(it!=INF){
                cout << it << ' '<<anext << ' '<<cnt-it<<endl;
                break;
            }else{
                v.push_back(pair<ll,int>(anext,cnt));
                cnt++;
            }
            
        }
    }
    
    return 0;
}


