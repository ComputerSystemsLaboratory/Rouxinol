#include <iostream>
using namespace std;

int main(void)
{
	bool a[30] = {false};
  int n, i;
  
  for(i = 0; i < 28; i++){
    cin >> n;
    a[n] = true;
    }
  for(i = 1; i <= 30; i++){
    if(a[i] == false){
      cout << i << endl;
      }
    }
	return (0);
}