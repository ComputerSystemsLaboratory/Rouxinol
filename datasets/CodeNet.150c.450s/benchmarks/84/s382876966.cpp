#include <iostream>
long count;

int* get_data(int& n)
{
  std::cin >> n;
  int *data = new int[n];

  for(int i=0; i<n; i++)
    std::cin >> data[i];

  return data;
}

void merge(int d[], const int start, const int middle, const int end)
{
  int n1, n2, i,j,k;
  n1 = middle - start;
  n2 = end - middle;
  int L[n1], R[n2];
  for ( i=0; i<n1; i++)
    L[i] = d[start + i];
  for ( i=0; i<n2;  i++)
    R[i] = d[middle + i];
  i = j =0;
  for(k=start; k < end; k++)
  {
    if( (j==n2 || L[i] <= R[j]) && i != n1)
    {
      d[k] = L[i];
      i++;
    }else{
      d[k] = R[j];
      j++;
      count += n1 - i;
    }
  }
}

void merge_sort(int d[], int left, int right)
{
  int middle = -1;
  if (left +1 < right)
  {
    middle = (left + right)/2;
    merge_sort(d, left, middle);
    merge_sort(d, middle, right);
    merge(d, left, middle, right);
  }
}

int main()
{
  int n;
  int *d = get_data(n);
  count = 0;

  merge_sort(d, 0, n);
 
  std::cout << count << std::endl;
  delete d;
}
