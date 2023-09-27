#include<iostream>
#include<cmath>
int main()
{
  int n;
  std::cin>>n;
  int i;
  int sum=100;
  for(i=0;i<n;i++)
    {
      sum+=std::ceil(sum*0.05);
    }
  std::cout<<sum*1000<<std::endl;

  return 0;
}