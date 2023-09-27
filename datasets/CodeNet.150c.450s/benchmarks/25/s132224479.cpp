#include <iostream>
#include <string>
using namespace std;
int main(){
int a[256];fill(a,a+256,0);
string line;
 while(getline(cin,line))
  for(int i=0;i<line.length();++i)
	a[tolower(line[i])]++;
 for(char i='a';i<='z';++i)
cout<<i<<" : "<<a[i]<<endl;
return 0;
}