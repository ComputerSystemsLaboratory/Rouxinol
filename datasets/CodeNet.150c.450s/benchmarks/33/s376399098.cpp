#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

double tax(int tax_pc, int value) {
  return value * (100 + tax_pc) / 100;
}


int main(int argc, char *argv[])
{
  int tax1, tax2, i, j, temp;
  int sum1, sum2;

  while (true) {
    
    cin >> tax1 >> tax2 >> sum1;
    if (tax1 == 0 && tax2 == 0 && sum1 == 0) break;
    int maximum = 0;
    for (i = 1; i < sum1; i++) {
      for (j = 1; j < sum1; j++) {
	if (sum1 == tax(tax1, i) + tax(tax1, j)) {
	  sum2 = tax(tax2, i) + tax(tax2, j);
	  if (sum2 > maximum) {
	    //cout << "i is " << i << endl;
	    //cout << "j is " << j << endl;
	   
	    maximum = sum2;
	  }
	}
      }
    }
    
    cout << maximum << endl;
  }
  

    
  return 0;
}