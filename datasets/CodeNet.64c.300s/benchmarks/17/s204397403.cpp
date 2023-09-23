#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int X,Y,S;
int tax(int rate,int price){
  int pprice=0;
  pprice=floor(price*(100+rate)/100);
  return pprice;
}
int solve(){
    int maximum=0;
    for(int i=1;i<S;++i){
        for(int j=i;j<S;++j){
          if((tax(X,i)+tax(X,j))==S){
              maximum=max(maximum,tax(Y,i)+tax(Y,j));
          }
        }
    }
    return maximum;
}
int main(){
  while(cin>>X>>Y>>S&&X>0){
    cout<<solve()<<endl;
  }
}