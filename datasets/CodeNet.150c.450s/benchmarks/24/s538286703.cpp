#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=205,INF=1<<30;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N,M;cin>>N>>M;
        if(N==0&&M==0) break;
        vector<pair<int,int>> S(N);
        int sum=0;
        for(int i=0;i<N;i++){
            cin>>S[i].first>>S[i].second;
            sum+=S[i].first*S[i].second;
        }
        
        sort(all(S),[](pair<int,int> a,pair<int,int> b){
            return a.second>b.second;
        });
        
        for(int i=0;i<N;i++){
            if(M>=S[i].first){
                M-=S[i].first;
                sum-=S[i].first*S[i].second;
            }else if(M>0){
                sum-=M*S[i].second;
                M=0;
            }
        }
        
        cout<<sum<<endl;
    }
    
    
}




