#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int max, min, sum,n,x,ans;
    while(true){
        cin>>n;
        if(n!=0){
            cin>>x;
            max=x;
            min=x;
            sum=x;
            for(int i=1;i<n;i++){
                cin>>x;
                sum+=x;
                if(max<x){
                    max=x;
                }
                if(min>x){
                    min=x;
                }
            }
            ans=(sum-min-max)/(n-2);
            cout<<ans<<endl;
        }else{
            break;
        }
    }
    return 0;
}