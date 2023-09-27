#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<cstdlib>
#include<queue>
#include<list>
using namespace std;

int main(){
    int n, m, b, j, ans=0;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>b;
        a[n]=b;
        for( j=0; a[j]!=b; j++);
        if(j!=n)ans++;
            
    }
    cout<<ans<<endl;
    
}

