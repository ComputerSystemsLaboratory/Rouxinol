#include<iostream>
using namespace std;

int main(){
long long int a[10],i,j,swap;
for(i=0;i<10;i++){
    cin>>a[i];
}
for(i=0;i<10-1;i++){
    for(j=0;j<10-i-1;j++){
        if(a[j]<a[j+1]){
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
        }
    }
}

for(i=0;i<3;i++){
    cout<<a[i]<<endl;
}
}