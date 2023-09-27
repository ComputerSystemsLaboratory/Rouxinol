#include<bits/stdc++.h>
using namespace std;
const int maX= 1e4+10;
int n;
int arr[maX];
int fn(int a,int b,int c){
    return (a*a+b*b+c*c+a*c+a*b+b*c);
}
void call(){
    for(int x=1;x<=sqrt(n);x++){
        for(int y=1;y<sqrt(n);y++){
            for(int z=1;z<=sqrt(n);z++){
                if(fn(x,y,z)<=n){
                    arr[fn(x,y,z)]++;
                }
                // break;
            }
        }
    }
    
}
int main(){
    cin>>n;
    call();
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}