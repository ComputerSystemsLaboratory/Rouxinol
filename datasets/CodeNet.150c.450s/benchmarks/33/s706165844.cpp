#include<iostream>
using namespace std;
double eps = 0.0000001;

int main()
{
  while(true)
  {
    double x, y;
    int s;
    cin >> x >> y >> s;
    if(s == 0)
      break;
    x /= 100.0;
    y /= 100.0;
    int n = 0;
    for(int a = 1; a < s; a++)
      for(int b = 1; b < s; b++)
        if((int)(a * (1 + x) + eps) + (int)(b * (1 + x) + eps) == s)
          n = max(n, (int)(a * (1 + y) + eps) + (int)(b * (1 + y) + eps));
    cout << n << endl;
  }
}