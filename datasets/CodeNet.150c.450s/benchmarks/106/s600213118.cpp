#include <iostream>
int main(){
int x,y,d,j=0;
std::cin>>x>>y>>d;

for(int i=x;i<=y;i++){

if(d%i==0){
j=j+1;
}
}
std::cout<<j<<"\n";
return 0;
}