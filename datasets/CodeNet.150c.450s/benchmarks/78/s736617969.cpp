#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> s,sodd;
  for(int i=1; i*(i+1)*(i+2)/6 < 1000000; ++i) {
    s.push_back(i*(i+1)*(i+2)/6);
    if((i*(i+1)*(i+2)/6)%2 == 1)
      sodd.push_back(i*(i+1)*(i+2)/6);
  }

  vector<int> table(1000001, 0);
  vector<int> otable(1000001, 0);

  for(int i=0; i<s.size(); ++i)
    table[s[i]] = 1;

  for(int i=0; i<sodd.size(); ++i)
    otable[sodd[i]] = 1;

  for(int j=1; j < 1000001; ++j) {
    for(int i=0; i < s.size(); ++i)
      if(table[j] != 0 && j+s[i] < 1000001) {
	table[j + s[i]] = (table[j+s[i]]==0) ? table[j]+1 : min( table[j+s[i]], table[j]+1 );
      }
  }

  for(int j=1; j < 1000001; ++j) {
    for(int i=0; i < sodd.size(); ++i)
      if(otable[j] != 0 && j+sodd[i] < 1000001) {
	otable[j + sodd[i]] = (otable[j+sodd[i]]==0) ? otable[j]+1 : min( otable[j+sodd[i]], otable[j]+1 );
      }
  }

  int d;
  for(;;) {
    cin>>d;
    if(!d) break;
    cout<<table[d]<<" "<<otable[d]<<endl;
  }

}