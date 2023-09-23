#include <iostream>
using namespace std;
int bef;
int aft;
int sumbef;
int tax(int rate, int price) { return price*(100+rate)/100;}
int max(int a, int b){
  if (a<b) return b;
  else return a;
}
int main () {
  for (int i=1; cin >> bef && bef > 0; ++i) {
    cin >> aft;
    cin >> sumbef;
    int maximum = 0;
    for (int i=1; i<sumbef; ++i) {
      for (int j=i; j< sumbef; ++j){
	if (tax(bef,i) + tax(bef,j) == sumbef)
	  maximum = max(maximum, tax(aft,i)+tax(aft,j));
      }
    }
    cout << maximum << endl;
  }
}