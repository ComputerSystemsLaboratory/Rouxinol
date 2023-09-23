#include<iostream>
using namespace std;
int main(){
int p[10000]={0},k=0,b[10000];
p[0]=p[1]=1;
for(int i=2;i<=100;i++){
if(p[i]==0){
    for(int j=i*i;j<10000;j+=i)p[j]=1;
        
}   
}
for(int i=0;i<10000;i++)if(p[i]==0)b[k++]=i;
int cnt=0,a,n;
cin >> n;
for(int i=0;i<n;i++){
 cin >> a;
 cnt++;
 for(int j=0;j<k;j++){
if(a==b[j])break;
if(a%b[j]==0){cnt--;break;}
}
}
cout << cnt << endl;
}