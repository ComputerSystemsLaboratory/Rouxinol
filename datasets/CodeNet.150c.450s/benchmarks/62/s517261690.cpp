#include<iostream>
int main(){
int na[3],nb;
std::cin>>na[0]>>na[1]>>na[2];
if(na[1] > na[2]){
nb = na[2];
na[2] = na[1];
na[1] = nb;
}
if(na[0] > na[1]){
nb = na[1];
na[1] = na[0];
na[0] = nb;
}
if(na[1] > na[2]){
nb = na[2];
na[2] = na[1];
na[1] = nb;
}
std::cout<<na[0]<<" "<<na[1]<<" "<<na[2]<<std::endl;
return 0;
}