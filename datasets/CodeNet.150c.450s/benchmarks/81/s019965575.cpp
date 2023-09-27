#include <iostream>

using namespace std;

const int kInf = 1 << 26;
const int kMaxV = 10;

int d[kMaxV][kMaxV];

void WarshallFloyd(){
  for(int k=0; k<kMaxV; k++){
	for(int i=0; i<kMaxV; i++){
	  for(int j=0; j<kMaxV; j++){
		d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	  }
	}
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  while(1){
	int n;
	cin >> n;
	if(n == 0){
	  return 0;
	}

	for(int i=0; i<kMaxV; i++){
	  for(int j=0; j<kMaxV; j++){
		d[i][j] = kInf;
	  }
	}

	for(int i=0; i<kMaxV; i++){
	  d[i][i] = 0;
	}
	
	for(int i=0; i<n; i++){
	  int a, b, c;
	  cin >> a >> b >> c;
	  d[a][b] = c;
	  d[b][a] = c;
	}
	WarshallFloyd();

	int min_town = -1;
	int min_sum = kInf;
	for(int i=0; i<kMaxV; i++){
	  int sum = 0;
	  for(int j=0; j<kMaxV; j++){
		if(d[i][j] >= kInf){
		  continue;
		}
		sum += d[i][j];
	  }
	  if(sum == 0){
		break;
	  }
	  if(sum < min_sum){
		min_sum = sum;
		min_town = i;
	  }
	}
	cout << min_town << " " << min_sum << endl;
  }
  
  return 0;
}