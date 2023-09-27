#include <iostream>
#include <cstring>

using namespace std;

int ret;
int s;

void dfs(int begin, int depth, int sum){
  int i;
  //cout << "(" << begin << " , " << depth << " , " << sum << ")" << endl;
  if(depth == 0){
	if(s == sum){
	  //cout << "ret++" << endl;
	  ret++;
	}
	return;
  }
  for(i=begin+1;i<=9;i++){
	dfs(i,depth-1, sum+i);
  }
}


int main(void){
  int n;
  int i;
  while(1){
	cin >> n >> s;
	if(n==0 && s==0) break;
	for(i=0;i<=9;i++){
	  dfs(i, n-1, i);
	}
	cout << ret << endl;
	ret = 0;
  }
  return 0;
}