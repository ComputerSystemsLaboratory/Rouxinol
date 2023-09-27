#include<cstdio>
using namespace std;
int money[6]{500,100,50,10,5,1};
void solve(int price){
  int ans{0};
  for(int i{0} ; i< 6 ; i++){
    while(price >= money[i]){
      price -= money[i];
      ans++;
    }
  }
  printf("%d\n",ans);
}
int main(){
  int price;
  while(true){
    scanf("%d",&price);
    if(price == 0)
      break;
    solve(1000 - price);
  }
}



