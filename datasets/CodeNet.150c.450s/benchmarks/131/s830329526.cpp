#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int conv(int a,int L)
{
  vector<int> v(L);
  for(int i=0; i<L; i++){
    v[i] = a % 10;
    a /= 10;
  }
  sort(v.begin(),v.end());
  int max = 0;
  for(vector<int>::reverse_iterator p = v.rbegin(); p!=v.rend(); p++){
    max *= 10;
    max += *p;
  }
  int min = 0;
  for(vector<int>::iterator p = v.begin(); p!=v.end(); p++){
    min *= 10;
    min += *p;
  }
  return max - min;
}
int main()
{
  for(;;){
    int a,L;
    cin >> a >> L;
    if(a == 0 && L == 0) break;
    vector<int> v;
    v.push_back(a);
    int tar = a;
    int j = 1;
    while(j <= 20){
      tar = conv(tar,L);
      bool bfind = false;
      for(int i=0; i<v.size(); i++){
        if(v[i] == tar){
          cout << i << " " << tar << " " << j-i << endl;
          bfind = true;
          break;
        }
      }
      if(bfind) break;
      v.push_back(tar);
      j++;
    }
  }
  return 0;
}