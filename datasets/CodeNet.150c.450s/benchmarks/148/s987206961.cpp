#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
  int n;
  cin>>n;
  unordered_map<string,int> freq;
  while(n--) {
    string str;
    cin>>str;
    freq[str]++;
  }
  cout<<"AC x "<<freq["AC"]<<"\nWA x "<<freq["WA"]<<"\nTLE x "<<freq["TLE"]<<"\nRE x "<<freq["RE"]<<'\n';
  return 0;
}
