#include <iostream>
int main(){
int a,b,c,i,j=0;
std::cin>>a>>b>>c;
for(i=a;i<=b;i++)if(c%i==0)j++;
std::cout<<j<<std::endl;
return 0;
}