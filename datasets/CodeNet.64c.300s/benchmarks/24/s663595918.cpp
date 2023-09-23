#include<iostream>
int A,B;
int main(void)
{
using namespace std;
int n,C,D;
while(1)
{
cin>>n;
if(!n)break;
A=0;
B=0;
for(;n>0;n--){
cin>>C;
cin>>D;
if(C>D){
A+=(C+D);
}else if(C<D){
B+=(C+D);
}else{
A+=C;
B+=D;
}
}
cout<<A<<" "<<B<<endl;
}
return 0;
}