//IN THE NAME OF GOD

#include <iostream>
using namespace std;
typedef long long int ll;
const int maxn=200;
int n,a[maxn];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        int k=i;
        while(k && a[k]<a[k-1]){
            swap(a[k],a[k-1]);
            k--;
        }
        for(int j=0;j<n;j++){
            cout<<a[j];
            if(j<n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}