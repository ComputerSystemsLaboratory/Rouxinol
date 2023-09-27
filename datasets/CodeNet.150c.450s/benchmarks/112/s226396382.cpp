#include<iostream>
class table{
  char tab[128];
public:
  table(){for(unsigned char i=0;i<128;++i)tab[i]=i;}
  char& operator[](char p){return tab[p];}
  const char& operator[](char p)const{return tab[p];}
};
int main(){
  int n;
  while(1){
    std::cin>>n;
	if(!n)return 0;
	table tab;
	while(n--){char a,b;std::cin>>a>>b;tab[a]=b;}
    std::cin>>n;
    while(n--){char a;std::cin>>a;std::cout<<tab[a];}
    std::cout<<std::endl;
  }
}