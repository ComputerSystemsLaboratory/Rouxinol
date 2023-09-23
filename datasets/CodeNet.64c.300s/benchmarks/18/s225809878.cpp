#include <iostream>

using namespace std;

int main()
{
    while(1){
        int n;
        cin>>n;if(n==0)return 0;
        int sw[31];
        for(int i=0;i<=n;++i)sw[i]=0;
        sw[0]=1;
        for(int i=0;i<n;++i){
            if(i<n)sw[i+1]+=sw[i];
            if(i<n-1)sw[i+2]+=sw[i];
            if(i<n-2)sw[i+3]+=sw[i];
        }
        cout<<(sw[n]/3650)+1<<endl;
    }
}