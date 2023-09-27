#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int mcxi[4];
const char c[] = {'m', 'c', 'x', 'i'};

void count(string s)
{
  if(!isdigit(s[0]))
    s = "1" + s;
  for(int i = 1; i < (int)s.size(); i++)
    if(s[i] == c[0]){
      if(isdigit(s[i-1]))
        mcxi[0] += s[i-1] - '0';
      else
        mcxi[0]++;
    }else if(s[i] == c[1]){
      if(isdigit(s[i-1]))
        mcxi[1] += s[i-1] - '0';
      else
        mcxi[1]++;
    }else if(s[i] == c[2]){
      if(isdigit(s[i-1]))
        mcxi[2] += s[i-1] - '0';
      else
        mcxi[2]++;
    }else if(s[i] == c[3]){
      if(isdigit(s[i-1]))
        mcxi[3] += s[i-1] - '0';
      else
        mcxi[3]++;
    }
}

void show(int x, char c)
{
  if(mcxi[x]){
    if(mcxi[x] > 1)
      cout << mcxi[x];
    cout << c;
  }
}


int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    fill(mcxi, mcxi + 4, 0);
    string s1, s2;
    cin >> s1 >> s2;
    count(s1);
    count(s2);
    for(int j = 3; j > 0; j--){
      mcxi[j-1] += mcxi[j] / 10;
      mcxi[j] %= 10;
    }
    for(int j = 0; j < 4; j++)
      show(j, c[j]);
    cout << endl;
  }
}