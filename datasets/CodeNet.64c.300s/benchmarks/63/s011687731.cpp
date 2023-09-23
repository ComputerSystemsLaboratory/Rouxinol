#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int ansG,ansL1,ansL2;
	while(cin>>a>>b){
		ansL1=a;ansL2=b;
		if(a<b){
			int hoge=a;
			a=b;
			b=hoge;
		}
		while(true){
			if(a%b==0){
				ansG=b;
				break;
			}
			else{
				c=a%b;
				a=b;
				b=c;
			}
		}
		ansL1=ansL1/ansG;
		ansL2=ansL2/ansG;
		cout<<ansG<<" "<<ansG*ansL1*ansL2<<endl;
	}
	return 0;
}