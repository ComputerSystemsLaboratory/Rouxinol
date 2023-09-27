#include <iostream>
#include <cstdio>
using namespace std;

int main () { 
 int num;
 cin >> num;

 int max = -1000001, min = 1000001, data;
 long long sum = 0;
 for (int i = 0; i < num; i++) {
  cin >> data;
  if (min > data) {
   min = data;
  }
  if (max < data) {
   max = data;
  }
  sum += data;
 }

 cout << min << " " << max << " " << sum << endl;
//printf("%d %d %ld\n", min, max, sum);

 return 0;
}