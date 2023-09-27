#include<iostream>
#include<string>
using namespace std;
int main(){
string s,ss,tt[1000];
int i=0,j,l,m=0,n,cc[1000]={0};
while(cin>>s){
l=s.size();
if(m<l){m=l;ss=s;}
tt[i++]=s;
}
n=i;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)if(tt[i]==tt[j])cc[i]++;
for(m=0,i=0;i<n;i++){
if(m<cc[i]){m=cc[i];l=i;}
}
cout<<tt[l]<<" "<<ss<<endl;
return 0;
}