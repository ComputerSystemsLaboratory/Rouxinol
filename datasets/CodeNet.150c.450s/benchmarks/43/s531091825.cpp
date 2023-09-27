#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,e;
	while(true){
		d=0;
		e=0;
		cin>>a;
		if(a==0){
			break;
		}
		for(int i=0;i<a;i++){
			cin>>b>>c;
			if(b>c)
				d=d+b+c;
			else if(c>b)
				e=e+b+c;
			else{
				e=e+c;
				d=d+c;
			}
		}
		cout<<d<<" "<<e<<endl;
	}
	return 0;
}