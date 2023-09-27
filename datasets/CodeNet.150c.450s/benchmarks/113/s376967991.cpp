#include<iostream>
using namespace std;
int main(){
 int i,x;
 x=1;
i=0;
while(x!=0){
i=++i;
cin>>x;
if(x==0){
    break;
}
cout<<"Case "<<i<<": "<<x<<endl;
}
return 0;
}