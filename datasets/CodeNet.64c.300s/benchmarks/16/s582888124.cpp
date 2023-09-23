#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n,ans=-(1<<30);
    cin>>n;
    int a;
    cin>>a;
    for(int i=0;i<n-1;i++){
        int b;
        cin>>b;
        ans=max(ans,b-a);
        a=min(a,b);
    }
    cout<<ans<<endl;
}

