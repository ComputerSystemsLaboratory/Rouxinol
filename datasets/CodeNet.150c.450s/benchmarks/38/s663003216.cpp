#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int a,b,c;
    for (int i = 0; i < n; ++i) {
        cin>>a>>b>>c;
        int m=max(a,max(b,c));
        if(m*m*2==a*a+b*b+c*c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
