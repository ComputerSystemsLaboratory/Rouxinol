#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i <= n; i++){
    string s;
    int mcxi[4] = {};
    getline(cin, s);
    for(int j = 0; j < s.size(); j++){
      if(s[j] == 'm'){
	if(j - 1 >= 0)
	  if(s[j - 1] >= '0' && s[j - 1] <= '9')
	    mcxi[0] += s[j - 1] - '0';
	  else 
	    mcxi[0]++;
	else
	  mcxi[0]++;
      }else if(s[j] == 'c'){
	if(j - 1 >= 0)
	  if(s[j - 1] >= '0' && s[j - 1] <= '9')
	    mcxi[1] += s[j - 1] - '0';
	  else 
	    mcxi[1]++;
	else
	  mcxi[1]++;
      }else if(s[j] == 'x'){
	if(j - 1 >= 0)
	  if(s[j - 1] >= '0' && s[j - 1] <= '9')
	    mcxi[2] += s[j - 1] - '0';
	  else 
	    mcxi[2]++;
	else
	  mcxi[2]++;
      }else if(s[j] == 'i'){
	if(j - 1 >= 0)
	  if(s[j - 1] >= '0' && s[j - 1] <= '9')
	    mcxi[3] += s[j - 1] - '0';
	  else 
	    mcxi[3]++;
	else
	  mcxi[3]++;
      }
    }
    for(int j = 3; j > 0; j--){
      if(mcxi[j] >= 10){
	mcxi[j - 1] += mcxi[j] / 10;
	mcxi[j] %= 10;
      }
    }
    if(mcxi[0])
      if(mcxi[0] == 1)
	cout << 'm';
      else
	cout << mcxi[0] << 'm';
    if(mcxi[1])
      if(mcxi[1] == 1)
	cout << 'c';
      else
	cout << mcxi[1] << 'c';
    if(mcxi[2])
      if(mcxi[2] == 1)
	cout << 'x';
      else
	cout << mcxi[2] << 'x';
    if(mcxi[3])
      if(mcxi[3] == 1)
	cout << 'i';
      else
	cout << mcxi[3] << 'i';
    if(i)
      cout << endl;
    fill(mcxi, mcxi + 4, 0);
  }
}