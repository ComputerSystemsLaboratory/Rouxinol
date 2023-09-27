#include<bits/stdc++.h> 
using namespace std;
#define square(a) a*a
#define ssquare(a,b) (a+b)*(a+b) 
#define dsquare(a,b) (a+b)*(a-b)
typedef long long ll;
int n;
int cnt[105000]={0};

int main(){
	for(int x=1; x<105; x++) {
		for(int y=1; y<105; y++) {
			for(int z=1; z<105; z++) {
				cnt[x*x+y*y+z*z+x*y+x*z+y*z]++;
			}
		}
	}
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		printf("%d\n",cnt[i]);
	return 0;
}
