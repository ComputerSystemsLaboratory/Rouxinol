
#include<iostream>
#include<cstring>
using namespace std; 

bool gem[21][21];
int dx(char c)
{
  switch(c)
  {
    case 'N': case 'S': return 0;
    case 'E': return 1;
    case 'W': return -1;
  }
  return 0;
}
int dy(char c)
{
  switch(c)
  {
    case 'E': case 'W': return 0;
    case 'N': return 1;
    case 'S': return -1;
  }
  return 0;
}
int main()
{
loop:
  memset(gem, 0, sizeof gem);
  int n, m, x, y, t;
  char c;
  cin >> n;
  if(!n)
    return 0;
  for(int i = 0; i < n; i++)
  {
    cin >> x >> y;
    gem[x][y] = true;
  }
  x = 10; y = 10;
  if(gem[10][10])
  {
    gem[10][10] = false;
    n--;
  }
  cin >> m;
  for(int i = 0; i < m; i++)
  {
    cin >> c >> t;
    for(int j = 0; j < t; j++)
    {
      x += dx(c);
      y += dy(c);
      if(gem[x][y])
      {
        gem[x][y] = false;
        n--;
      }
    }
  }
  cout << (!n ? "Yes" : "No") << endl;
  goto loop;
}