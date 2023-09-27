#include <bits/stdc++.h>
#define f(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
    long long n,ll=0;
    cin>>n;
    long long a,lis[n];
    f(i,0,n){
        cin>>a;
        if(i==0){
            lis[i]=a;
        }
        else{
            if(lis[ll]<a){
                ll++;
                lis[ll]=a;
            }
            else{
                f(j,0,ll+1){
                    if(lis[j]>=a){
                        lis[j]=a;
                        break;
                    }
                }
            }
        }
    }
    cout<<ll+1<<endl;
    return 0;
}
