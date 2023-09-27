#include <iostream>
using namespace std;
int main(void){
    int n,m,s[110],t[110];
    while(1){
        cin>>n>>m;
        if(n==0||m==0)break;
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>s[i];
            sum1+=s[i];
        }
        for(int i=0;i<m;i++){
            cin>>t[i];
            sum2+=t[i];
        }
        int d=sum1-sum2,b=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=s[i]-t[j];
                if(2*a==d&&b==0){
                    cout<<s[i]<<" "<<t[j]<<endl;
                    b=1;
                }
            }
        }
        if(b==0)cout<<"-1"<<endl;
    }
    return 0;
}

