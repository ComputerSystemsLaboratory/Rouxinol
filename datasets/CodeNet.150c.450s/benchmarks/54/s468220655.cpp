#include<iostream>
#include<string>
#include<algorithm>
#include<locale>

using namespace std;

struct ToLower{
  char operator()(char c){ return tolower(c, locale()); }
};

int main()
{
  string w, t;
  int match=0;
  cin >> w;
  while(cin>>t){
    if(t=="END_OF_TEXT") break;
    transform(t.begin(), t.end(), t.begin(), ToLower());
    if(t==w){
      ++match;
    }
  }
  cout << match << endl;
  return 0;
}

