#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=998244353,MAX=100005,INF=1<<28;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        map<string,int> MA;
        
        for(int i=0;i<N;i++){
            string S;cin>>S;
            MA[S]++;
        }
        
        int M;cin>>M;
        int cnt=1;
        
        for(int i=0;i<M;i++){
            string S;cin>>S;
            if(MA[S]==0){
                cout<<"Unknown "<<S<<endl;
            }else if(cnt%2==0){
                cout<<"Closed by "<<S<<endl;
                cnt++;
            }else{
                cout<<"Opened by "<<S<<endl;
                cnt++;
            }
        }
        
        break;
    }
}

