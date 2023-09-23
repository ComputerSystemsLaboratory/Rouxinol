#include <iostream>
using namespace std;
int x,y,s,ans,sa,a,maxn;
int main(){
	while(1){
		cin >> x>>y >>s;
		if(!(x||y||s))break;
		maxn=0;
		sa=s*100/(100+x);
		for(int i=1;i<sa;i++){
			a=s-i*(100+x)/100;
			if(a*100%(100+x)==0){
				a=a*100/(100+x);
			}else{
				a=(a*100/(100+x))+1;
			}
			if(a*(100+x)/100+i*(100+x)/100!=s)continue;
			if(a*(100+y)/100+i*(100+y)/100>maxn){
				maxn=a*(100+y)/100+i*(100+y)/100;
				//ans=i;
			}
		}
		//cout << ans<<endl;
		cout << maxn <<endl;
	}
	return 0;
}