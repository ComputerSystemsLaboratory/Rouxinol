#include<iostream>
#include<algorithm>
using namespace std;

int main(void){

  int N,i;
  cin >> N;

  long long int array[N];

  for(i=0; i<N; i++) cin >> array[i];
  sort(array,array+N);

  long long int sum;
  sum = 0;

  for(i=0; i<N; i++) sum += array[i];

  int max,min;

  min = array[0];
  max = array[N-1];

  cout << min << " " << max << " " << sum << endl;
  
  return 0;

}