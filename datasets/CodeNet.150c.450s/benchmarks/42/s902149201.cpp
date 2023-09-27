#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  int n,q,timecount=0;
  cin >> n >> q;
  vector<string> name(n);
  vector<int> time(n);
  for(int variable = 0;variable < n;++variable){
    cin >> name[variable] >> time[variable];
  }
  for(int variable = 0;variable < time.size();++variable){
    if(q < time[variable]){
      time.push_back(time[variable] - q);
      name.push_back(name[variable]);
      timecount += q;
    }
    else{
      cout << name[variable] << " " << timecount + time[variable] << endl;
      timecount += time[variable];
    }
  }
}