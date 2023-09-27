#include<iostream>
using namespace std;
int main(){
  int n,i,asum,bsum,a_card,b_card;
  cin >> n;
  while(n!=0){
    asum=0; bsum=0;
    for(i=0;i<n;i++){
      cin >>a_card>>b_card;
      if(a_card>b_card){
	asum+=a_card+b_card;
      }else if(a_card<b_card){
	bsum+=a_card+b_card;
      }else{
	asum+=a_card;
	bsum+=b_card;
      }
    }
      cout << asum<<" "<<bsum<<endl;
      cin >>n;
  }
}

