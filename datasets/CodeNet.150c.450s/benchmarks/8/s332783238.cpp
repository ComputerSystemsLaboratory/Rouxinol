#include<iostream>
using namespace std;

int main(){
  int poi1=0,poi2=0; //point
  string ani1,ani2; //animal
  int num;
  
  cin >> num;
  while (num) {
    num--;
    
    cin >> ani1 >> ani2;
    if (ani1 > ani2) poi1 += 3;
    else if (ani1 < ani2) poi2 += 3;
    else {
      poi1++;
      poi2++;
    }
  }
  cout << poi1 << " " << poi2 << endl;
  
  return 0;
}
