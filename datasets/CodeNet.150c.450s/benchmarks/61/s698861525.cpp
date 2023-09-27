#include <iostream>
#include <vector>
using namespace std;

class Rand
{
  public:
    Rand(int a, int b, int c, int x);

  public:
    void rand(int y);
    int Num();

  private:
    int rand();

  private:
    int m_a, m_b, m_c;
    int prev_x;
    int m_num;
    bool flag;
};

Rand::Rand(int a, int b, int c, int x)
{
  m_a = a;
  m_b = b;
  m_c = c;
  prev_x = x;
  m_num = 0;
  flag = true;
}

int Rand::rand()
{
  if (flag)
  {
    flag = false;
    return prev_x;
  }
  int result = ( m_a * prev_x + m_b ) % m_c;
  prev_x = result;
  ++m_num;
  return result;
}

void Rand::rand(int y)
{
  while (m_num < 10001)
  {
    if (y == rand() ) break;
  }
}

inline int Rand::Num()
{
  return (m_num == 10001 ? -1 : m_num);
}

int main(void)
{
  while (true)
  {
    int n, a, b, c, x;
    cin >> n >> a >> b >> c >> x;
    if ( n == 0 ) break;
    vector<int> reel(n);
    for (int& r : reel)
    {
      cin >> r;
    }
    Rand rand(a, b, c, x);
    for (int r : reel)
    {
      rand.rand(r);
    }
    cout << rand.Num() << endl;
  }
  return 0;
}