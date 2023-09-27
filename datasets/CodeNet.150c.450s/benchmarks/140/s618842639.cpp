#include <bits/stdc++.h>

int search_root(int *parent, int v)
{

  if(parent[v] != v) 
    {
      parent[v] = search_root(parent, parent[v]);
      return parent[v];
    }
  else
    return v;

}

int unite(int *parent, int v1, int v2)
{
  int r1 = search_root(parent, v1);
  int r2 = search_root(parent, v2);
    
  if(r1 != r2)
    {
      parent[r1] = r2;
      return true;
    }

  else
    return false;
}

int main(int argc, char **argv)
{
  int Vnum,Enum,i;

  std::cin >> Vnum >> Enum;

  int *parent, *s, *t;
  s = new int[Enum];
  t = new int[Enum];
  parent = new int[Enum];
  std::pair<int,int> w[Enum];
  
  for(i=0; i<Enum; i++)
    {
      std::cin >> s[i] >> t[i] >> w[i].first;
      w[i].second = i;
    }

  std::sort(w, w+Enum);

  for(i=0; i<Vnum; i++)
    parent[i]=i;
      
  int sum = 0;

  for(i=0; i<Enum; i++)
    {
      if(unite(parent, s[w[i].second], t[w[i].second]))
	sum += w[i].first;
    }
      
  std::cout << sum << std::endl;

  return 0;
}
