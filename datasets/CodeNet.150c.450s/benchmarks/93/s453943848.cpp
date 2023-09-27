#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

struct Card
{
  int n, pos;
  char s;
};

vector<Card>::iterator partition(vector<Card>::iterator p, vector<Card>::iterator r)
{
  vector<Card>::iterator i = p - 1;
  vector<Card>::iterator temp = p;
  for (; p != r; p++) {
      if (p->n > (r - 1)->n) continue;
      ++i;
      iter_swap(i, p);
  }
  return i;
}

void quicksort(vector<Card>::iterator p, vector<Card>::iterator r)
{
  if (p != r) {
    vector<Card>::iterator q = partition(p, r);
    quicksort(p, q);
    quicksort(q + 1, r);
  }
}

void output(vector<Card>::iterator p, vector<Card>::iterator r)
{
  ostringstream oss;
  vector<Card>::iterator b = p;
  oss << p->s << " " << p->n << "\n";
  p++;
  int flg = 0;
  for (; p != r; p++) {
    if ((b->n == p->n) && (b->pos > p-> pos)) flg = 1;
    oss << p->s << " " << p->n << "\n";
    b = p;
  }
  cout << (flg ? "Not stable\n" : "Stable\n") << oss.str();
}

int main()
{
  int n;
  cin >> n;
  vector<Card> A;
  for (int i = 0; i < n; i++) {
    Card c;
    c.pos = i;
    cin >> c.s >> c.n;
    A.push_back(c);
  }
  quicksort(A.begin(), A.end());
  output(A.begin(), A.end());
  return 0;
}