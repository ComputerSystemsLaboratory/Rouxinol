//IN THE NAME OF GOD

#include <iostream>
using namespace std;
typedef long long int ll;
int n,a[110],ans;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                ans++;
            }
        }
    }
    for(int i=0;i<n-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-1]<<endl;
    cout<<ans<<endl;
    return 0;
}