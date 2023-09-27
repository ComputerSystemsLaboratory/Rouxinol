#include<iostream>
#include<string>
using namespace std;

int main(){
 int n,p1 = 0,p2 = 0;
 string card1, card2;

 cin >> n;

 for(int i = 0; i < n; i++){
  cin >> card1 >> card2;

  if(card1 == card2) {
   p1++;
   p2++;
  } else if(card1 < card2) {
   p2 += 3;
  } else {
   p1 += 3;
  }
 }

 cout << p1 << " " << p2 << endl;

 return 0;
}