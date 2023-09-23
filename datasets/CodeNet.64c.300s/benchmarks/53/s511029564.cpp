#include <iostream>
int main(){
int a,b,c,i=0;
std::cin>>a>>b>>c;
for(;a<=b;a++)if(c%a==0)i++;
std::cout<<i<<std::endl;
return 0;
}