#include <cstdio>

using namespace std;

int main(){
	
	int a[4],b[4];
	int hit,blow;
	
	while (scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3])!=EOF) {
		hit=0;
		blow=0;
		for (int i=0; i<4; i++) {
			if (a[i]==b[i]) {
				hit++;
			}
			else if(a[0]==b[i]||a[1]==b[i]||a[2]==b[i]||a[3]==b[i]){
				blow++;
			}
		}
		printf("%d %d\n",hit,blow);
	}
	return 0;
}
 