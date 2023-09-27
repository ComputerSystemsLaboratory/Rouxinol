#include <iostream>
#include <vector>
int main(){
int a=0;
std::vector<int> v(0);
while(true){
a++;
v.resize(a);
std::cin>>v[a-1];
if(v[a-1]==0){
break;
}
}
for(int i=0;i<a-1;i++){
std::cout<<"Case "<<i+1<<": "<<v[i]<<std::endl;
}
}