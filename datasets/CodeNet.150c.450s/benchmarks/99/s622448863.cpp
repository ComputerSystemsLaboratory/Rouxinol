#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=998244353,MAX=100003,INF=1<<30;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    while(N--){
        string S,T;cin>>S>>T;
        int sum=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='m'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*1000;
                }else sum+=1000;
            }
            if(S[i]=='c'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*100;
                }else sum+=100;
            }
            if(S[i]=='x'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*10;
                }else sum+=10;
            }
            if(S[i]=='i'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*1;
                }else sum+=1;
            }
        }
        swap(S,T);
        for(int i=0;i<S.size();i++){
            if(S[i]=='m'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*1000;
                }else sum+=1000;
            }
            if(S[i]=='c'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*100;
                }else sum+=100;
            }
            if(S[i]=='x'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*10;
                }else sum+=10;
            }
            if(S[i]=='i'){
                if(i>=1&&'2'<=S[i-1]&&S[i-1]<='9'){
                    sum+=(S[i-1]-'0')*1;
                }else sum+=1;
            }
        }
        swap(S,T);
        
        if(sum>=1000){
            if(sum>=2000){
                cout<<sum/1000;
                cout<<'m';
            }else cout<<'m';
            sum%=1000;
        }
        if(sum>=100){
            if(sum>=200){
                cout<<sum/100;
                cout<<'c';
            }else cout<<'c';
            sum%=100;
        }
        if(sum>=10){
            if(sum>=20){
                cout<<sum/10;
                cout<<'x';
            }else cout<<'x';
            sum%=10;
        }
        if(sum>=1){
            if(sum>=2){
                cout<<sum/1;
                cout<<'i';
            }else cout<<'i';
            sum%=1;
        }
        
        cout<<endl;
    }
}


