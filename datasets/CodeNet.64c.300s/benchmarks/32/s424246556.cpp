#include<iostream>

using namespace std;
int main(){
long int a,i,n,m,d,e,f,g,h;
cin>>a;
long int b[a];
for(i=0;i<a;i++){
    cin>>b[i];
}
    for(n=0;n<a-1;n++){
        for(m=n+1;m<a;m++){
         if(b[n]<b[m]){
            d=b[n];
            b[n]=b[m];
            b[m]=d;
         }
        }
    }
    g=0;
    for(f=0;f<a;f++){
        g=g+b[f];
        }
    cout<<b[a-1]<<" "<<b[0]<<" "<<g<<endl;
    return 0;
    }