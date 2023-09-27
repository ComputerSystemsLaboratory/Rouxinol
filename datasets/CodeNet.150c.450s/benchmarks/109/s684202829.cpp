#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int n;
int dif[90000], sum[90000];
int S[10005], T[10005];

int gettime()
{
  string tmp;
  char c; int ret = 0;

  cin >> c, tmp += c;
  cin >> c, tmp += c;
  ret += atoi(tmp.c_str()) * 3600;
  cin >> c;

  tmp.clear();
  cin >> c, tmp += c;
  cin >> c, tmp += c;
  ret += atoi(tmp.c_str()) * 60;
  cin >> c;

  tmp.clear();
  cin >> c, tmp += c;
  cin >> c, tmp += c;
  ret += atoi(tmp.c_str());

  return ret;
}

int main(void)
{
  while(1){
    cin >> n;
    if(n == 0) break;

    for(int i = 0; i <= 86405; i++) dif[i] = 0;

    for(int i = 0; i < n; i++){
      S[i] = gettime();
      T[i] = gettime();
    }

    /*for(int i = 0; i < n; i++){
      cout << S[i] << " " << T[i] << endl;;
    }*/

    for(int i = 0; i < n; i++){
      dif[S[i]]++;
      dif[T[i]]--;
    }
    sum[0] = dif[0];
    for(int i = 1; i <= 86405; i++){
      sum[i] = sum[i-1] + dif[i];
    }

    int ans = 0;
    for(int i = 0; i <= 86405; i++){
      ans = max(ans, sum[i]);
    }
    cout << ans << endl;
  }

  return 0;
}

