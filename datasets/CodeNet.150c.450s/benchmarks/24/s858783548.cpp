#include <iostream>
#include <utility>

using namespace std;

typedef pair<int, int> PA;

int main(int argc, char **argv)
{
  int n, m, s;
  PA pa[10001], tmp;

  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }

    for(int i = 0; i < n; i++){
      cin >> pa[i].first >> pa[i].second;
    }

    for(int i = n-1; i >= 0; i--){
      for(int j = 1; j <= i; j++){
	if(pa[j].second > pa[j-1].second){
	  tmp = pa[j];
	  pa[j] = pa[j-1];
	  pa[j-1] = tmp;
	}
      }
    }

    s = 0;
    for(int i = 0; i < n; i++){
      if(m >= pa[i].first){
	m -= pa[i].first;
      } else {
	s += (pa[i].first - m)*pa[i].second;
	m = 0;
      }
    }
    cout << s << endl;
  }

  return 0;
}