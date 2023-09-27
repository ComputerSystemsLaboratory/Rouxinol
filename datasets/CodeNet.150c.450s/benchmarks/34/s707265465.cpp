#include <iostream>
#include <queue>
#include <map>
#include <array>

using namespace std;

int stairs[31];

void Solve(){
  stairs[0] = 1;

  for(int i=0; i<30; i++){
	for(int j=1; j<=3; j++){
	  if(i+j >= 31){
		break;
	  }
	  stairs[i+j] += stairs[i];
	}
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  Solve();

  while(1){
	int n;
	cin >> n;
	
	if(n == 0){
	  return 0;
	}
	int years;
	years = (stairs[n]/3650);
	years += (stairs[n]%3650 != 0) ? 1 : 0;
	
	cout << years << endl;
  }
}