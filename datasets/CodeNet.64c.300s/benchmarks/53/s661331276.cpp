#include<iostream>
int main(){
  int a,b,c,i,cnt;
  std::cin >> a >> b >> c;
  for(i=a,cnt=0; i<=b; i++) if(!(c % i)) cnt++;
  std::cout << cnt << std::endl;
  return 0;
}