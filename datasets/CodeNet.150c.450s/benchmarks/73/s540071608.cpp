#include <iostream>
using namespace std;
#define max 100005
void add(int, int, int, int*);
int getSum(int, int*);

int main()
{
  int n,q,com,x,y,i;
  cin >> n >> q;
  int *A;
  A = new int[max];
  
  for (i=0; i<max; i++)
    A[i] = 0;
  
  for(i=0; i<q; i++)
    {
      cin >> com >> x >> y;
      if(com)
	cout << getSum(y, A) - getSum(x-1, A) << endl;
      else
	add(x, y, n, A);
    }
  return 0;
}

void add(int x,int y, int n, int* A)
{
  for(; x<=n; x = x + (x & -x))
    A[x] += y;
}
 
int getSum(int a, int* A)
{
  int ans = 0;
  for(; a>0; a = a - (a & (-a)))
    ans += A[a];
  return ans;
}
