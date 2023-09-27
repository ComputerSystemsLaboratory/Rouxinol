#include <iostream>
#include <vector>

struct Card{
  char c,v;
  Card():c(0),v(0){}
  Card(const Card &card):c(card.c),v(card.v){}
  Card& operator=(const Card &card){
    c = card.c;
    v = card.v;
    return (*this);
  }
  bool operator==(const Card &card){
    return c==card.c&&v==card.v;
  }
  bool operator!=(const Card &card){
    return !((*this)==card);
  }
};

int main(){
  int n;
  std::cin>>n;
  std::vector<Card> vec1(n),vec2(n);
  for(int i=0;i<n;++i){
    char c,v;
    std::cin>>c>>v;
    vec1[i].c=c,vec1[i].v=v;
    vec2[i].c=c,vec2[i].v=v;
  }

  for(int i=0;i<n;++i){
    for(int j=n-1;j>=i+1;--j)
      if(vec1[j].v<vec1[j-1].v) std::swap(vec1[j],vec1[j-1]);
  }
  for(int i=0;i<n;++i){
    int minj=i;
    for(int j=i+1;j<n;++j)
      if(vec2[j].v<vec2[minj].v) minj = j;
    std::swap(vec2[i],vec2[minj]);
  }

  std::cout<<vec1[0].c<<vec1[0].v;
  for(int i=1;i<n;++i) std::cout<<" "<<vec1[i].c<<vec1[i].v;
  std::cout<<"\nStable"<<std::endl;

  std::cout<<vec2[0].c<<vec2[0].v;
  for(int i=1;i<n;++i) std::cout<<" "<<vec2[i].c<<vec2[i].v;
  int i;
  for(i=0;i<n;++i)
    if(vec1[i]!=vec2[i]) break;
  if(i==n){
    std::cout<<"\nStable"<<std::endl;
  }else{
    std::cout<<"\nNot stable"<<std::endl;
  }
  return 0;
}