#include<iostream>
using namespace std;
int main(){
int a[10001],b[10001],sum=0;
int n,z;
cin>>n;
for(int i=0;i<n;i++){
    cin>>z;
   a[i]=z;
}
int m,x;
cin>>m;
for(int j=0;j<m;j++){
    cin>>x;
   b[j]=x;
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++ ){
        if(a[j]==b[i]){
            sum++;
            break;
        }
        
    }
}

cout<<sum<<endl;


return 0;
}