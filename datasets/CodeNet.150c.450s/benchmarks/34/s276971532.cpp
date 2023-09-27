//Kannondou
#include <cstdio>
#include <vector>
using namespace std;
int main(){
	int n;
	vector<long long int> step;	step.push_back(1);
	refrain:
	scanf("%d",&n);
	if(n==0)	return 0;
	for(int i=step.size();i<=n;i++){
		step.push_back(0);
		for(int j=1;j<=i&&j<=3;j++)	step[i]+=step[i-j];
	}
	long long int ans=(step[n]+9)/10;
	ans=(ans+364)/365;
	printf("%lld\n",ans);
	goto refrain;
}