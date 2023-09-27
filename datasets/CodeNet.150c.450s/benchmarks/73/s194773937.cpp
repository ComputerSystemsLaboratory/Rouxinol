#include <cstdio>

using namespace std;

int N;
int bit[1<<18];
void add(int i, int x){
  while(i<=N){
	bit[i] += x;
	i += i&-i;
  }
}

int sum(int i){
  int res = 0;
  while(i > 0){
	res += bit[i];
	i -= i&-i;
  }
  return res;
}

int main(){
  int Q; scanf("%d %d", &N, &Q);
  
  while(Q--){
	int q, i, j;
	scanf("%d %d %d", &q, &i, &j);
	if(q) printf("%d\n", sum(j) - sum(i-1));
	else add(i, j);
  }
  
  return 0;
}