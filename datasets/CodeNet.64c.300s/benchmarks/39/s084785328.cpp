#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,d,m;
	while(cin>>n){
		m=0;
		for(a=0;a<10;a++){
			for(b=0;b<10;b++){
				for(c=0;c<10;c++){
					for(d=0;d<10;d++){
						if(n==a+b+c+d){
							m+=1;
						}
					}
				}
			}
		}
		cout<<m<<endl;
	}
	return 0;
}