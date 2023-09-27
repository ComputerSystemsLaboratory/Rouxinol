#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

  int i,temp;
  vector<int> suuretu;
  
  for(i=0;i<5;i++){
    cin >>temp;
    suuretu.push_back(temp);
  }
  
  sort(suuretu.begin(),suuretu.end());
  
  for(i=0;i<5;i++){
    if (i==0)
      cout << suuretu[4-i];
    else
      cout << " " << suuretu[4-i];
  }
  cout << endl;

  return 0;
}