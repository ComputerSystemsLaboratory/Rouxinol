//IN THE NAME OF GOD

#include <iostream>
using namespace std;
typedef long long int ll;
int a,n,ans,d;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        for(int j=2;j*j<=a;j++){
            if(!(a%j)){
                a=-1;
                break;
            }
        }
        if(a!=-1)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}