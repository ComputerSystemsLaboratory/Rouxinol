
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;
int N;
P G[20000];
int solve(){
  int res = 0;
  int c = 0;
  for (int i = 0; i < 2*N; i++){
    if (G[i].second){
      c++;
      res = max(c, res);
    }
    else{
      c--;
    }
  }
  return res;
}
int main(){
  while (1){
    cin >> N;
    if (N == 0) break;
    for (int i = 0; i < N; i++){
      for (int j = 0; j < 2; j++){
	char str[10];
	cin >> str;
	int a = (str[0]-'0')*10 + str[1]-'0';
	int b = (str[3]-'0')*10 + str[4]-'0';
	int c = (str[6]-'0')*10 + str[7]-'0';
	G[i*2+j] = P(a*60*60 + b*60 + c, 1-j);
      }
    }
    sort(G, G+2*N);
    cout << solve() << endl;
  }
}