#include <iostream>


int main(){
int a,b;
char p;

while(1){

std::cin>>a>>p>>b;
if(p=='?')break;
 else if(p=='+'){
std::cout<<a+b<<"\n";
} else if(p=='-'){
std::cout<<a-b<<"\n";
} else if(p=='*'){
std::cout<<a*b<<"\n";
} else if(p=='/'){
std::cout<<a/b<<"\n";
} 

}

return 0;
}