#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,d,n;
    vector<int> isp(1e6+1,1);
    isp[0]=0;
    isp[1]=0;
    for(int i=2;i<1e6+1;i++)
        if(isp[i]){
            for(int j=i*2;j<1e6+1;j+=i)
                isp[j]=0;

        }
    while(cin>>a>>d>>n,a&&d&&n){
        int cnt=0;
        int res;
        for(int i=0;i<1e6+1;i++){
            if(isp[a+i*d])
                cnt++;
            if(cnt==n){
                res=i;
                break;
            }

        }
        cout<<a+res*d<<endl;

    }
    return 0;
}