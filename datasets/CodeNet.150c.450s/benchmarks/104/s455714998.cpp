#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
    int s[100],n,i,a,b,k;
    char c;
    
    cin>>k>>n;
    
    for(i=1;i<=k;i++){
        s[i]=i;
    }
        
    for(i=0;i<n;i++){
        cin>>a>>c>>b;                 
        swap(s[a],s[b]);
    }
    for(i=1;i<=k;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}