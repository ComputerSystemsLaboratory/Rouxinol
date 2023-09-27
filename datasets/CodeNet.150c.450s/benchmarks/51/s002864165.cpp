#include <iostream>
 
int main(){
 
bool sub[30];
 
for(int i=0;i<30;i++)
sub[i]=false;
 
for(int i=0;i<28;i++){
int d;
std::cin>>d;
sub[d-1]=true;
}
 
for(int i=0;i<30;i++){
if(!sub[i])
std::cout<<i+1<<std::endl;
}
 
}