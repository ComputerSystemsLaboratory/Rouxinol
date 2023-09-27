#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n,k;
  while(1){
    cin >> n >> k;
    if(n==0&&k==0) break;
    vector<int> card(n+1,0);
    for(int i=1;i<n+1;++i) card[i]=n-i+1;

    //for(int i=1;i<n+1;++i){
      //cout << card[i] << endl;
    //}

    for(int i=0;i<k;++i){
      int p,c;
      cin >> p >> c;
      rotate(card.begin()+1,card.begin()+p,card.begin()+p+c);
      for(int j=1;j<n+1;++j){
	//cout << card[j] << endl;
      }
    }
    cout << card[1] << endl;
  }
}