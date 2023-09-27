#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	char c,abc[27]={"a""b""c""d""e""f""g""h""i""j""k""l""m""n""o""p""q""r""s""t""u""v""w""x""y""z"};
	int ans[27]={0};
	while(scanf("%c",&c)!=EOF){
		if('A'<=c&&c<='Z')c+=32;
		if('a'<=c&&c<='z'){
			int num=c-'a';
			ans[num]++;
		}
	}
	for(int i=0;i<26;i++){
		cout<<abc[i]<<" : "<<ans[i]<<endl;
	}
	return 0;
}