#include <iostream>

using namespace std;

bool prime(int v)
{
  if(v == 2){
    return true;
  } else if(v % 2 == 0){
    return false;
  }

  for(int j = 3; j*j <= v; j+=2){
    if(v%j == 0){
      return false;
    }
  }

  return true;
}

int main()
{
  int a, d, n, p;

  while(1){
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0){
      break;
    }

    while(n > 0){
      if(prime(a) && a != 1){
	n--;
	p = a;
      }
      a += d;
    }
    cout << p << endl;
  }

  return 0;
}