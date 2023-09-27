#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <vector>



int t;
std::vector<int> balls(10);


int dfs(int d,int a,int b)
{
  if(d==10)
    {
      return 1;
    }

  //

  if(balls[d] > a   )
    {
      if(dfs(d+1,balls[d],b) == 1 )
        return 1;
    }

  if(balls[d] > b)
    {
      if( dfs(d+1,a,balls[d]) == 1)
        return 1;
    }

  return 0;
}

int main(int argc,char* argv[])
{
  //freopen("in.txt","r",stdin);
  std::cin>>t;
  while(t--)
    {
      for(int i = 0 ; i < 10 ; i++)
        std::cin >> balls[i];
      if(dfs(0,0,0) == 1 )
        std::cout<<"YES"<<std::endl;
      else
        std::cout<<"NO"<<std::endl;
    }
  return 0;
}