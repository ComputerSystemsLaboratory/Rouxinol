#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

vector <int> v;
vector <int>::iterator ite;
int k = 0;

int power(int m, int n)
{
  int x = 1;
  for(int i = 0; i < n; i++)
    x *= m;
  return x;
}

void makeNumber(int array[], int x)
{
  int n = 0, max, min;
  sort(array, array + x, greater<int>());
  for(int i = 0; i < x; i++)
    n += array[i] * power(10, x - i - 1);
  max = n;
  n = 0;
  sort(array, array + x);
  for(int i = 0; i < x; i++)
    n += array[i] * power(10, x - i - 1);
  min = n;
  for(int i = 0; i < x; i++)
    array[i] = (max - min) / power(10, x - i - 1) % 10;  
  v.push_back(max - min);
  k++;
  if(std::count(v.begin(), v.end(), v.back()) == 1)
    makeNumber(array, x);
}
    
int main()
{
  while(1){
    int b, L;
    int a[1000000];
    cin >> b >> L;
    v.push_back(b);
    for(int i = 0; i < L; i++)
      a[i] = b / power(10, L - i - 1) % 10;
    if(b == 0 && L == 0){
      break;
    }else{
      makeNumber(a, L);
      ite = v.begin();
      for(int j = 0; j < v.size(); j++, ite++)
	if(*ite == v.back()){
	  cout << j << " " << v.back() << " " << k - j << endl;
	  k = 0;
	  v.clear();
	  break;
	}
    }
  }
}