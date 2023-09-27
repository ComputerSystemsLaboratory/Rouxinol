#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)  {

  int n;
  int temp;
  int divmin;
	vector<int> a;
  
  while (true)  {
    
    scanf("%d", &n);
    
    if (n == 0) { break; }
    
    divmin = 1000000;
    
    for (int i = 0; i <= n-1; i++)  {
      cin >> temp;
    	a.push_back(temp);
    }

  	sort(a.begin(), a.end());

  	for (int i = 1; i <= n-1; i++)	{
  		divmin = min(divmin, a[i] - a[i-1]);
  	}
    
    printf("%d\n", divmin);

  	vector<int>().swap(a);
  }
  
  return 0;
}
