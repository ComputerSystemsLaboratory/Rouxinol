#include<bits/stdc++.h>
using namespace std;

int r, c;
bool senbei[10][10000];
bool status[10];
int ans = 0;

int counter()
{
  int ret = 0;
  for(int i = 0; i < c; i++){
    int b = 0, w = 0;
    for(int j = 0; j < r; j++){
      if(senbei[j][i] ^ status[j])
	w++;
      else
	b++;
    }
    ret += max(b, w);
  }
  
  return ret;
}

int search(int t = 0)
{
  if(t == r)
    return counter();

  int ret = 0;
  status[t] = false;
  ret = search(t + 1);
  status[t] = true;
  ret = max(ret, search(t + 1));
  return ret;
}

int main()
{
  while(cin >> r >> c && (r || c)){
    ans = 0;
    for(int i = 0; i < r; i++)
      for(int j = 0; j < c; j++)
	cin >> senbei[i][j];

    cout << search() << endl;
  }
  return 0;
}