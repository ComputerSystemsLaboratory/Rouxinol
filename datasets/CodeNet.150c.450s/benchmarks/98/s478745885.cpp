#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m;
    while(1){
        cin>>n>>m;
        if(n+m==0)return 0;
        int a[100],b[100];
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){cin>>a[i];sum1+=a[i];}
        for(int i=0;i<m;i++){cin>>b[i];sum2+=b[i];}
        int ans1=1e9,ans2=1e9;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(sum1-a[i]+b[j]==sum2-b[j]+a[i]){
                    if(a[i]+b[j]<ans1+ans2){
                        ans1=a[i];ans2=b[j];
                    }
                }
            }
        }
        if(ans1==1e9){
            cout<<-1<<endl;
        }else{
            cout<<ans1<<" "<<ans2<<endl;
        }
    }
}