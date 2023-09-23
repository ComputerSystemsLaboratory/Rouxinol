#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int tax_old, tax_new, sum_old, sum_new, tmp_old, tmp_new;
  while(cin>>tax_old>>tax_new>>sum_old && !(tax_old==0 && tax_new==0)) {
    sum_new = 0;
    for(int i=1; i<sum_old; i++) {
      for(int j=1; j<sum_old; j++) {
	tmp_old = floor(i*(100+tax_old)/100)+floor(j*(100+tax_old)/100);
	if(tmp_old == sum_old) {
	  tmp_new = floor(i*(100+tax_new)/100)+floor(j*(100+tax_new)/100);
	  if(tmp_new > sum_new) {
	    sum_new = tmp_new;
	  }
	}
	else if(tmp_old > sum_old) {
	  break;
	}
      }
    }
    cout<<sum_new<<endl;
  }
}