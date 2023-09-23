#include <iostream>
  
using namespace std;
  
int main()
{
 int n;
 int rank;
 char suit;
 int s[14], h[14], c[14], d[14];
 for (int i = 0; i < 14; i++)
 {
  s[i] = h[i] = c[i] = d[i] = 0;
 }
 cin >> n;
 
 for (int i = 0; i < n; i++)
 {
  cin >> suit;
  cin >> rank;
  switch(suit)
  {
   case 'S':
    s[rank] = 1;
    break;
   case 'H':
    h[rank] = 1;
    break;
   case 'C':
    c[rank] = 1;
    break;
   case 'D':
    d[rank] = 1;
    break;
   default:
    break;
  }
 }
 for (int i = 1; i <= 13; i++)
 {
  if (s[i] != 1)
  {
   cout << "S " << i << endl;
  }
 }
 for (int i = 1; i <= 13; i++)
 {
  if (h[i] != 1)
  {
   cout << "H " << i << endl;
  }
 }
 for (int i = 1; i <= 13; i++)
 {
  if (c[i] != 1)
  {
   cout << "C " << i << endl;
  }
 }
 for (int i = 1; i <= 13; i++)
 {
  if (d[i] != 1)
  {
   cout << "D " << i << endl;
  }
 }
}
