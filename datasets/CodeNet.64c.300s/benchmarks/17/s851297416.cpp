#include <iostream>

using namespace std;

int main(){

	int x,y,s;
	while(cin>>x>>y>>s){
		if(x==0 && y==0 && s==0)break;

		x+=100;
		y+=100;

		int max=0;

		for(int i=1;i<s;i++){
			for(int j=1;j<s;j++){
				if( (i*x/100 + j*x/100) == s){
					if(max<= (i*y/100 +j*y/100)){
						max = i*y/100 +j*y/100;
					}
				}
			}
		}

		cout<<max<<endl;

	}

	return 0;
}