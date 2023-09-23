#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,c,r;
    while(1){
        cin>>n;
        if(n==0) break;
        c=r=0;
        for(int i=1;i<n;i++){
            r+=i;
            if(n-r<=0) break;
            if((n-r)%(i+1)==0) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

