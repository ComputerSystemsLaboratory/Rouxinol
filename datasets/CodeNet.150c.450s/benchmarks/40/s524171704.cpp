#include<iostream>

using namespace std;

class dice
{
public:
  int d[6];
  int t;
  int n;
  int e;
  int s;
  int w;
  int b;
  string cmd;
  
  dice();
  int init();
  int setCmd();
  int move(char c);
  int runCmd();
  int top();
};

dice::dice()
{
  t = 0;
  n = 4;
  e = 2;
  s = 1;
  w = 3;
  b = 5;
}

int dice::init()
{
  for(int i = 0; i < 6; i++ )
    {
      cin >> d[i];
    }
  return 0;
}

int dice::setCmd()
{
  cin >> cmd;
  return 0;
}

int dice::move(char c)
{
  int tmp;
  
  if ( c == 'E' )
    {
      tmp = t;
      t = w;
      w = b;
      b = e;
      e = tmp;
    }
  else if ( c == 'N' )
    {
      tmp = t;
      t = s;
      s = b;
      b = n;
      n = tmp;
    }
  else if ( c == 'S' )
    {
      tmp = t;
      t = n;
      n = b;
      b = s;
      s = tmp;
    }
  else if ( c == 'W' )
    {
      tmp = t;
      t = e;
      e = b;
      b = w;
      w = tmp;
    }

  return 0;
}

int dice::runCmd()
{
  for ( int i = 0; i < (int)cmd.size(); i++ )
    move( cmd[i] );

  return 0;
}

int dice::top()
{
  cout << d[t] << endl;
  return 0;
}

int main()
{
  dice d;
  
  d.init();
  d.setCmd();
  d.runCmd();
  d.top();
  
  return 0;
}