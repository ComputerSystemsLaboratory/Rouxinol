#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
int in[6000],ans;
while(cin>>n,n){
for(int i=0;i<n;i++){
cin>>in[i];
}
ans=in[0];
for(int i=0;i<n;i++){
int sum=0;
for(int j=i;j<n;j++){
sum=sum+in[j];
ans=max(sum,ans);
}
}
cout<<ans<<endl;
}
return 0;
}