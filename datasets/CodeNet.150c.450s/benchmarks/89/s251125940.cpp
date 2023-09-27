#include <iostream>

using namespace std;

bool prime(int n)
{
  if (n == 1) return false;
  if (n == 2) return true;
  if (n%2 == 0) return false;
  for (int i = 3; i*i <= n; i += 2)
    if (n%i == 0) return false;
  return true;
}

int main()
{

  int a,d,n;

  cin >> a >> d >> n;
  while (a!=0 || d!= 0 || n!= 0) {
    int i = 0;
    int cur, ret;

    while (n > 0) {
      if (prime(a + (i*d)))
	{
	ret = a + i*d;
	n--;
	}
      i++;
    }
    
    cout << ret << "\n";
    cin >> a >> d >> n;
  }
}