#include<iostream>
using namespace std;
int main(){
    int a,b,c,k,j;
    cin>>a>>b>>c;
    k=a;
    j=0;
    while(1){
        if(c%k==0){
            j += 1;
        }
    if(k==b)break;
    k+=1;
    }
    cout<<j<<endl;
    return 0;
}
