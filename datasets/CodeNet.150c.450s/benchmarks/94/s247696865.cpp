#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int BubbleSort(vector<int> vi, int n)
{
  int flag = 1;
  int times = 0;
  while(flag)
  {
    flag = 0;
    for(int j=n-1; j>0; j--)
    {
      if(vi[j] < vi[j-1])
      {
        swap(vi[j], vi[j-1]);
        times++;
        flag = 1;
      }
    }
  }
  for(int i=0; i<n; i++)
  {
    if(i != 0)
      printf(" ");
    printf("%d", vi[i]);
  }
  printf("\n");
  printf("%d\n", times);
  return 0;
}
int main()
{
  vector<int> vi;
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++)
  {
    int temp;
    scanf("%d", &temp);
    vi.push_back(temp);
  }
  BubbleSort(vi, n);

  return 0;
}

