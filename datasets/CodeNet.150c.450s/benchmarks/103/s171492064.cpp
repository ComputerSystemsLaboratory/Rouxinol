#include<iostream>
using namespace std;
int main(){
	//バックトラック法
	while(1){
		int n,s,i,j,a,b,c=0;;
		cin>>n>>s;
		if(n==0&&s==0)break;
		for(i=0;i<(1<<10);i++){//1<<10は2^10
			a=0;b=0;
			for(j=0;j<=9;j++){
				if((i>>j)&1!=0){//iの2^jの桁が1→ok
					a+=j;b++;//bはたし算の項の数
				}
			}
			if(a==s&&b==n){
				c++;
			}
		}
		cout<<c<<endl;
	}
    return 0;
}