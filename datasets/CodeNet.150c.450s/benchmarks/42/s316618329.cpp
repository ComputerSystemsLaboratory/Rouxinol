#include <iostream>
#include <queue>
#define NMAX 100000

using namespace std;

class process{
  public:
    string name;
    int time;
};

int main()
{
  int i;
  int n;
  int qtime;
  int sumtime = 0;
  process p;
  queue<process> q;


  /* ??\?????¨??? */
  cin >> n;
  cin >> qtime;
  for(i = 0 ; i < n ; i++)
  {
    cin >> p.name;
    cin >> p.time;
    q.push(p);
  }

  /* ????????¨??? */
  while(!q.empty())
  {
    p = q.front();
    q.pop();
    if(p.time > qtime)
    {
      p.time -= qtime;
      q.push(p);
      sumtime += qtime;
    }
    else 
    {
      sumtime += p.time;
      cout << p.name << " " << sumtime << endl;
    }
  }

}