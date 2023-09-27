#include <iostream>
#include <cstdio>
#include <set>
#include <string>
using namespace std;

string reverse2(string str)
{
  string result="";

  for(int i=str.length()-1;i>=0;i--)
    result+=str[i];

  //cout << str << "->" << result << endl;

  return result;
}


int main(void)
{
  int m;
  scanf("%d",&m);

  for(int i=0;i<m;i++){
    string str;
    cin >> str;

    set <string> s;

    int len = str.length();

    for(int j=1;j<len;j++){
      string s1=str.substr(0,j);
      string s2=str.substr(j,len-j);

      //cout << "s1" << s1 << endl;
      //cout << "s2" << s2 << endl;

      s.insert(s1+s2);
      s.insert(s1+reverse2(s2));
      s.insert(s2+s1);
      s.insert(s2+reverse2(s1));
      s.insert(reverse2(s1)+s2);
      s.insert(reverse2(s2)+s1);
      s.insert(reverse2(s1)+reverse2(s2));
      s.insert(reverse2(s2)+reverse2(s1));
	    
      
    }

    printf("%d\n",s.size());
  }
}
      