#include <iostream>
#include <set>
using namespace std;

//return reversed s (string)
#define rev(s)(string(s.rbegin(),s.rend()))

int main(void){
  int n;

  cin>>n;
  while(n--){
    int l; //train's length
    string t; //train string
    set<string> s; //pattern set

    cin>>t;
    l = t.length();

    //search all pattern -> s(set)
    for(int i=1;i<=l-1;i++){
      string f,b; //forward, backward string
      f = t.substr(0,i);
      b = t.substr(i,l-i);

      s.insert(f+b);
      s.insert(f+rev(b));
      s.insert(rev(f)+b);
      s.insert(rev(f)+rev(b));
      s.insert(b+f);
      s.insert(b+rev(f));
      s.insert(rev(b)+f);
      s.insert(rev(b)+rev(f));
    }
    cout<<s.size()<<endl;
  }

  return 0;
}