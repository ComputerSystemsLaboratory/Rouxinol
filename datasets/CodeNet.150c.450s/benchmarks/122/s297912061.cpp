#include <bits/stdc++.h>
using namespace std;
#define MAX 4000000

vector<int> A(MAX + 1);
vector<int> B;
int H = 0;

int parent(int i)
{
  return floor((double)i / 2.0);
}

int left(int i)
{
  return i * 2;
}

int right(int i)
{
  return i * 2 + 1;
}

void maxHeapify(int i)
{
  int l = left(i);
  int r = right(i);
  int largest;
  // 左の子、自分、右の子で値が最大のノードを選ぶ
  if (l <= H && A.at(l) > A.at(i))
  {
    largest = l;
  }
  else
  {
    largest = i;
  }
  if (r <= H && A.at(r) > A.at(largest))
  {
    largest = r;
  }

  if (largest != i)
  {
    swap(A.at(i), A.at(largest));
    maxHeapify(largest);
  }
}

void insert(int k)
{
  H++;
  A.at(H) = k;
  int i = H;
  while (i > 1 && A.at(parent(i)) < k)
  {
    swap(A.at(parent(i)), A.at(i));
    i = parent(i);
  }
}

int extract()
{
  int M = A.at(1);
  A.at(1) = A.at(H);
  H--;
  maxHeapify(1);
  return M;
}

int main()
{
  while (1)
  {
    string com;
    cin >> com;
    if (com == "end")
    {
      break;
    }
    else if (com.at(0) == 'i')
    {
      int k;
      cin >> k;
      insert(k);
    }
    else
    {
      B.push_back(extract());
    }
  }
  int m = B.size();
  for (int i = 0; i < m; i++)
  {
    cout << B.at(i) << endl;
  }
}
