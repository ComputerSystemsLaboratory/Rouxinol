#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

vector<int> A(MAX + 1);
int H;

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

void buildMaxHeap()
{
  for (int i = H / 2; i >= 1; i--)
  {
    maxHeapify(i);
  }
}

int main()
{
  cin >> H;
  for (int i = 1; i <= H; i++)
  {
    cin >> A.at(i);
  }
  buildMaxHeap();
  for (int i = 1; i <= H; i++)
  {
    cout << " " << A.at(i);
    if (i == H)
    {
      cout << endl;
    }
  }
}
