#include<iostream>
using namespace std;
int main(){
int a[4],b[4],h,w,i,j;
while(cin>>a[0]){
h=w=0;
for(i=1;i<4;i++)cin>>a[i];
for(i=0;i<4;i++)cin>>b[i];
for(i=0;i<4;i++){
for(j=0;j<4;j++){
if(i==j&&a[i]==b[j])h++;
else if(a[i]==b[j])w++;
}
}
cout<<h<<" "<<w<<endl;
}
return 0;
}