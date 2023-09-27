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
        int N,A,B,C,X;cin>>N>>A>>B>>C>>X;
        if(N==0) break;
        
        vector<int> Y(N);
        for(int i=0;i<N;i++) cin>>Y[i];
        
        int now=0;
        
        if(X==Y[now]) now++;
        
        if(now==N){
            cout<<0<<endl;
            continue;
        }
        
        for(int i=1;i<=10000;i++){
            X=(A*X+B)%C;
            if(X==Y[now]){
                now++;
            }
            if(now==N){
                cout<<i<<endl;
                break;
            }
            if(i==10000){
                cout<<-1<<endl;
                break;
            }
        }
    }
}

