#include <iostream>
int main(){
int w,n,b[30],a,c,d,i,f,h;
char g;
std::cin>>w>>n;
for(a=1;a<=w;++a){
    b[a]=a;
    }
for(i=0;i<n;++i){
      std::cin>>c>>g>>d;
       f=b[c];
      b[c]=b[d];
     b[d]=f;
}
for(h=1;h<=w;++h){
  std::cout<<b[h]<<std::endl;
  }
return 0;
}