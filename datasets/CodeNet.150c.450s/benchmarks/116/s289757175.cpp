#include <iostream>
using namespace std;
int main(void){
	for (;;){
	int a,b,c[100000]={0},d=0,e=0,max=0;
			cin>>a>>b;
			if (a==0&&b==0)break;
			for (int A=0;A<a;A++){
			cin>>c[A];
			if (A>=b){
				for (int B=0;B<b;B++){
					d=d+c[A+e];
					e--;
				}
				if (max<d)max=d;
				d=0;
				e=0;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}