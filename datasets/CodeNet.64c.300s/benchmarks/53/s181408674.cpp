#include <iostream>
int main(){
int a,b,c,i=0;
std::cin>>a>>b>>c;
for(;a<=b;a++)!(c%a)?i++:0;
std::cout<<i<<std::endl;
return 0;
}