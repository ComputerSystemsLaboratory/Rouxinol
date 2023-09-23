#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

int main(void){
    int n;
    int a[10000];
    int i,j;
    
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    
    int ans=0;
    
    for(i=0;i<n;i++){
        j=2;
        int m=sqrt(a[i]);
        while(a[i]%j!=0&&j<=m){
            j++;
        }
        if(j>m)ans++;
    }
    
    cout<<ans<<endl;

	return 0;
}
