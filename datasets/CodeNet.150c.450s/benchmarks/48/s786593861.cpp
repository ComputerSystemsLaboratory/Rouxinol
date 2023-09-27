#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	int a;
	while(scanf("%d",&a),a){
		int ret=99999999;
		for(int i=0;i*i*i<=a;i++){
			int t=(sqrt(a-i*i*i)+0.0000001);
			ret=min(ret,i+t+(a-i*i*i-t*t));
		}
		printf("%d\n",ret);
	}
}