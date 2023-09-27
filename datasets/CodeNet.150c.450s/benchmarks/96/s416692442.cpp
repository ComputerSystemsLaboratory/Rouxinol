#include <iostream>
#include <string>
using namespace std;
#define P pair<int,string>
const P m[10] = {
  P(0,""), P(5,".,!? "), P(3,"abc"), P(3,"def"), P(3,"ghi"),
  P(3,"jkl"), P(3,"mno"), P(4,"pqrs"), P(3, "tuv"), P(4,"wxyz"),
};
int main()
{
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    int p,i,j=0;
    for(i=0;i<s.length();i++){
      if(s[i] == '0' && j != 0){
	cout << (m[p].second)[(j-1)%(m[p].first)];
	j = 0;
      }else if(s[i] != '0'){
	p = s[i] - '0';
	j++;
      }
    }
    cout << endl;
  }
  return 0;
}