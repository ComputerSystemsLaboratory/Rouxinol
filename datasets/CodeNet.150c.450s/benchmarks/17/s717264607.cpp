#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	 string input;
 while(cin && getline(cin, input)){
  int a, b, c, d, e;
  istringstream is(input);
  is>>a>>b>>c>>d>>e;
  vector<int> buf;
  buf.push_back(a);
  buf.push_back(b);
  buf.push_back(c);
  buf.push_back(d);
  buf.push_back(e);
  sort(buf.begin(),buf.end());
  reverse(buf.begin(),buf.end());
  for(int i=0; i<buf.size(); i++){
   if(i!=0) cout<<" ";
   cout<<buf[i];
  }
  cout<<endl;
  break;
 }
}