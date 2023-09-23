#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
typedef long long ll;
using namespace std;

int main(void){
    int n,i;
    int r;
    cin>>n;
    
    int min,ans=-1000000002;
    int t;
    
    cin>>min;
    for(i=1;i<n;i++){
        cin>>r;
        t=r-min;
        if(ans<t)ans=t;
        if(min>r)min=r;
    }
    
    cout<<ans<<endl;

	return 0;
}
