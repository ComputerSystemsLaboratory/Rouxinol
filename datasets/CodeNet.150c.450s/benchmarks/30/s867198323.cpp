#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int SelectionSort(vector<int> vi, int n)
{
  int i, min_index, j, flag;
  int times = 0;
  for(i=0; i<n-1; i++)
  {
    flag = 0;
    min_index = i;
    for(j=i+1; j<n; j++)
    {
      if(vi[j] < vi[min_index])
      {
        min_index = j;
        flag = 1;
      }
    }
    if(flag == 1)
      times++;
    swap(vi[i], vi[min_index]);
  }
  for(i=0; i<n; i++)
  {
    if(i) printf(" ");
    printf("%d", vi[i]);
  }
  printf("\n%d\n", times);
  return 0;
}
int main()
{
  int n;
  scanf("%d", &n);
  vector<int> vi;
  for(int i=0; i<n; i++)
  {
    int temp;
    scanf("%d", &temp);
    vi.push_back(temp);
  }
  SelectionSort(vi, n);
  return 0;
}

