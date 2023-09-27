#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef vector<int> vint;
typedef vector<long long> vll;
typedef long long ll;
#define loop(i,n) for(int i=0;i<n;i++)
#define inf 10000000000 //10^10
#define pi 3.141592

int main(){
    int n,m;
    for(cin >> n >> m ; n!=0 ;cin >> n >> m){
        vint d(n);
        vector<pair<int,int> > p(n);

        loop(i,n){
            int d_i,p_i;
            cin >> d_i >> p_i;
            d[i]=d_i;
            p[i]=make_pair(p_i,i); //インデックスを管理
        }
        
        int hazard=0;
        loop(i,n) hazard+=d[i]*p[i].first;

        sort(p.begin(),p.end(), [](pair<int,int> x,pair<int,int> y)->int {return x.first>y.first;});
        
        loop(i,n){
            int rest=d[p[i].second];
            if(m<rest){
                hazard-=m*p[i].first;
                break;
            }else{
                m-=rest;
                hazard-=rest*p[i].first;
            }
        }
        cout << hazard << endl;
    }
}

