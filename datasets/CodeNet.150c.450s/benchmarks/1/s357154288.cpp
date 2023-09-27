#include <stdio.h>
#include <stack>
#include <math.h>
#include<iostream>

using namespace std;


int main(){
    int n,a,c[1000000],count=1;
    cin>>n;
    cin>>c[1];
    for(int i=1;i<n;i++){
        
        cin>>a;
        if(a>c[count]){count++; c[count]=a;}
        else{
            for(int t=1;t<=count;t++){
                if(c[t]>=a){c[t]=a; break;}
            }
        }
        
    }
    
    cout<<count<<endl;
    
    return 0;
}


