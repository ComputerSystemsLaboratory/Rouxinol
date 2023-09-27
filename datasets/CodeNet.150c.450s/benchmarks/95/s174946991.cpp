#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  int n;
  while(cin >> n, n){

    vector<string> s(n);
    int cnt = 0;
    int judge = 0;

    for(int i = 0; i < n; i++){
      cin >> s[i];

      if(i > 0){
        if((s[i][0] != s[i-1][0]) && (s[i][1] == s[i-1][1])) cnt++;
      }
    }

    cout << cnt << endl;

  }

  return 0;

}

