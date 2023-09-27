#include<iostream>
#include<cmath>
using namespace std;

long long power(int x,int y){
    int retn=1;
    for(int i=0;i<y;++i){
        retn*=x;
    }
    return retn;
}

int main(){
    int m,n;
    cin>>m>>n;

    const long long mod=1000000007;
    long long rem=m;
    int cnt=0;
    for(int i=30;i>0;--i){
        
        if(n/power(2,i)==1){
            ++cnt;
            if(cnt==1){
                rem=(rem*rem)%mod;
            }
            else{
                rem=(m*rem)%mod;
                rem=(rem*rem)%mod;
            }
            n-=power(2,i);
        }

        else{
            if(cnt){
                rem=(rem*rem)%mod;
            }
        }
        //cout<<i<<" "<<n<<" "<<rem<<"\n";
    }

    if(n==1){
        rem=(m*rem)%mod;
        n--;
    }
    
    if(n==0){
        cout<<rem<<"\n";
    }
}