#include <iostream>
#include <string>
#include <set>
using namespace std;

set<string> S;

int main()
{
   ios::sync_with_stdio(false), cin.tie(0);
   int N;
   string com, str;
   cin >> N;
   while(N--){
      cin >> com >> str;
      if(com[0] == 'i')
         S.insert(str);
      else
         cout << (S.count(str) == 0 ? "no" : "yes") << '\n';
   }
}

