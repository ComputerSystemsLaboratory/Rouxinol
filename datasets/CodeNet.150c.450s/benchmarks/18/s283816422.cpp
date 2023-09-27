#include <iostream>
#include <cmath>

using namespace std;

static int ROUND = 1000;

int weeks;
int loan = 100000;
int rishi = loan * 0.05;
int temp;

int main(){
  scanf("%d", &weeks);
  while (weeks != 0){
      loan = loan*1.05;
      loan = loan % ROUND != 0 ? (int(loan/ROUND) +1)*ROUND : loan;
      weeks--;
  }
 cout << loan << endl;
 return 0;   
}