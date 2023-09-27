#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
 int i;
 vector<int> a;
 int c;
 for(i=0;i<10;i++)
 {
  cin>>c;
  a.push_back(c);
 }

  sort(a.begin(),a.end());

  cout<<a[9]<<endl<<a[8]<<endl<<a[7]<<endl;

  return(0);
}
