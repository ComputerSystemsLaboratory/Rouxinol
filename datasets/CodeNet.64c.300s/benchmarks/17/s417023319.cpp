#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	while(true){
		b=0;
		cin>>c>>d>>e;
		if((c==0 && d==0) && e==0){
			break;
		}
		for(int i=1;i<=e;i++){
			for(int j=1;j<=e;j++){
				a=(i*(100+c))/100+(j*(100+c))/100;
				if(a==e){
					f=(i*(100+d))/100+(j*(100+d))/100;
					if(b<f){
						b=f;
					}
				}
			}
		}
		cout<<b<<endl;
	}
	return 0;
}