#include<iostream>
using namespace std;
int main(){
int a,b,c,sum=0;

cin>>a>>b>>c;
for(;a<=b;a++){
if(c%a==0)
sum++;



}
cout<<sum<<'\n';


return 0;
}