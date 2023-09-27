#include <cstdio>
#include <cstring>
#include <set>
 
using namespace std;
 
#define MAX 1500
 
int cnt[MAX*MAX];
 
int main(){
    int N, M;
 
    while(scanf("%d %d" ,&N ,&M), (N | M)){
	int h[MAX], w[MAX];
	memset(cnt, 0, sizeof(cnt));
	for(int i = 0 ; i < N ; i++){      
	    scanf("%d" ,&h[i]);
	}
 
	set<int> st;
	for(int i = 0 ; i < N ; i++){
	    int S = 0;
	    for(int j = i ; j < N ; j++){
		S += h[j];
		st.insert(S);
		cnt[S]++;
	    }
	}
	for(int i = 0 ; i < M ; i++){
	    scanf("%d" ,&w[i]);
	}
	int ans = 0;
	for(int i = 0 ; i < M ; i++){
	    int S = 0;
	    for(int j = i ; j < M ; j++){
		S += w[j];
		if(st.count(S)){
		    ans += cnt[S];
		}
	    }
	}
	printf("%d\n" ,ans);
    }
    return 0;
}