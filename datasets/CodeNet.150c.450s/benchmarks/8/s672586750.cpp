#include <iostream>
#include <cstring>

using namespace std;

int main(){

  int n;

  cin >> n;

  string card,card2;
  int a=0,b=0;

  for(int i=0;i<n;i++){
    cin >> card >> card2;
    if(card.compare(card2)>0){
      a+=3;
      //      cout << a << ' ' <<  b << endl;
    }
    else  if(card.compare(card2)<0){
      b+=3;
      // cout << a << ' ' <<  b << endl;
    }
    else  if(card.compare(card2)==0){
      
      a++;
      b++;
      // cout << a << ' ' <<  b << endl;
    }
  }

  cout << a << ' ' <<  b << endl;
}