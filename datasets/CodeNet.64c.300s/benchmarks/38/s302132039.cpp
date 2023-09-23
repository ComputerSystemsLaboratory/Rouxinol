#include <cstdio>
#include <algorithm>
#define HEIGHT 10

using namespace std;

int a[HEIGHT];

void solve(){
	bool f=true;
	int right,left;
	right = left = 0;
	for(int i=0;i<HEIGHT;i++){
		if(right<a[i] && left<a[i]){
			if(right<left){
				left = a[i];
			} else {
				right = a[i];
			}
		} else if(right<a[i]){
			right = a[i];
		} else if(left<a[i]){
			left = a[i];
		} else {
			f = false;
			i = HEIGHT;
		}
	}
	if(f){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
}
			
int main(){
	
	int lp;
	scanf("%d",&lp);
	
	for(int i=0;i<lp;i++){
		for(int j=0;j<HEIGHT;j++){
			scanf(" %d",&a[j]);
		}
		solve();	
	}
	return 0;
}