#include <iostream>
using namespace std;

int main()
{
  int n;
  int tmp;
  int min, max;
  long int sum;
  min = 1000000;
  max = -1000000;
  sum = 0;

  cin >> n;

  for(int i; i<n; i++){
    cin >> tmp;
    sum += tmp;
    if(min > tmp)min = tmp;
    if(max < tmp)max = tmp;
  }

  cout << min << " " << max << " " << sum << endl;
}
