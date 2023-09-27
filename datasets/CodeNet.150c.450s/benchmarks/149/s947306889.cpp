#include<iostream>
using namespace std;
int P[10010];
void init(int N)
{
  for (int i=0; i<=N; ++i) P[i] = i;
}

int root(int a)
{
  if (P[a] == a) return a;
  return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b)
{
  return root(a) == root(b);
}

void unite(int a, int b)
{
  P[root(a)] = root(b);
}

int main()
{
  int n,q;
  cin>>n>>q;
  init(n);
  for(int i=0;i<q;i++)
    {
      int f,x,y;
      cin>>f>>x>>y;
      if(f==0)
	unite(x,y);
      if(f==1)
	 cout<< is_same_set(x,y)<<endl;;
    }
}