#include <iostream>
using namespace std;

int main()
{
  int N;

  while(cin >> N, N) {
    int count = 0;
    for (int i = 1; i < N; i++) {
      int sum = 0;
    
      for (int j = i; j < N; j++) {
	sum += j;
	if (N<sum) break;
	else if (N==sum) {
	  count++;
	  break;
	} 
      }
      //cout << count << endl;
    }
    cout << count << endl;
  }
  
  return 0;
}
