#include<iostream>
using namespace std;
int main(){
int a,b,c,x,i;
cin>>a>>b>>c;
i=a;
x=0;
while(1){
if(i>b)break;
if(c%i == 0){
x++;
}
i++;
}
cout<<x<<endl;
return 0;
}



