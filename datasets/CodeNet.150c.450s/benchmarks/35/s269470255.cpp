#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;if(!n)return 0;
        long long a[5010];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        long long ans=-20000000000;
        long long buf;
        for(int i=0;i<n;++i){
            buf=0;
            for(int j=i;j<n;++j){
                buf+=a[j];
                if(buf>ans)ans=buf;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}