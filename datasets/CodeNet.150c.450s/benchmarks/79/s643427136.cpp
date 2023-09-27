#include <iostream>
#include <deque>
using namespace std;


int main(){
  while(1){
    int n,r;
    cin >> n >> r;
    if(n==0) break;

    deque<int> card;
    for(int i=1;i<n+1;i++){
      card.push_back(n-i+1);
    }
    for(int i=0;i<r;i++){
      int p,c;
      cin >> p >> c;
      for(int j=0;j<c;j++){
	card.push_front( card[p+c-2] );
	deque<int>::iterator ite = card.begin()+p+c-1; 
	card.erase( ite );
      }
    }
    cout << card[0] << endl;
  }
  return 0;
}