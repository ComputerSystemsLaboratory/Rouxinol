#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=1<<17,INF=1<<30;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        
        while(N--){
            string S;cin>>S;
            string T;
            
            int now=0,cnt=0;
            
            while(now<S.size()){
                if(S[now]=='0'){
                    now++;
                    continue;
                }
                cnt=0;
                while(S[now]==S[now+cnt]) cnt++;
                int rcnt=cnt;
                if(S[now]-'0'==1){
                    cnt%=5;
                    if(cnt==1) T+='.';
                    if(cnt==2) T+=',';
                    if(cnt==3) T+='!';
                    if(cnt==4) T+='?';
                    if(cnt==0) T+=' ';
                }
                if(S[now]-'0'==2){
                    cnt%=3;
                    if(cnt==1) T+='a';
                    if(cnt==2) T+='b';
                    if(cnt==0) T+='c';
                }
                if(S[now]-'0'==3){
                    cnt%=3;
                    if(cnt==1) T+='d';
                    if(cnt==2) T+='e';
                    if(cnt==0) T+='f';
                }
                if(S[now]-'0'==4){
                    cnt%=3;
                    if(cnt==1) T+='g';
                    if(cnt==2) T+='h';
                    if(cnt==0) T+='i';
                }
                if(S[now]-'0'==5){
                    cnt%=3;
                    if(cnt==1) T+='j';
                    if(cnt==2) T+='k';
                    if(cnt==0) T+='l';
                }
                if(S[now]-'0'==6){
                    cnt%=3;
                    if(cnt==1) T+='m';
                    if(cnt==2) T+='n';
                    if(cnt==0) T+='o';
                }
                if(S[now]-'0'==7){
                    cnt%=4;
                    if(cnt==1) T+='p';
                    if(cnt==2) T+='q';
                    if(cnt==3) T+='r';
                    if(cnt==0) T+='s';
                }
                if(S[now]-'0'==8){
                    cnt%=3;
                    if(cnt==1) T+='t';
                    if(cnt==2) T+='u';
                    if(cnt==0) T+='v';
                }
                if(S[now]-'0'==9){
                    cnt%=4;
                    if(cnt==1) T+='w';
                    if(cnt==2) T+='x';
                    if(cnt==3) T+='y';
                    if(cnt==0) T+='z';
                }
                now=now+rcnt+1;
            }
            
            cout<<T<<endl;
        }
        break;
    }
}

