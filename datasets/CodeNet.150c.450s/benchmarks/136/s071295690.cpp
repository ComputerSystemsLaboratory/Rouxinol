#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

	int a,b,r;
	int tmp;
	double g,l;
	double tmpa,tmpb;

	while(cin>>a>>b){
		tmpa=a;
		tmpb=b;
		r=1;
		while(r){
			if(a<b){
				tmp=a;
				a=b;
				b=tmp;
			} 
			r=a%b; a=b; b=r;	
		}
		g=a;
		l=tmpa*tmpb/g;
		//cout.unsetf(ios::scientific);
		cout << fixed << setprecision(0) << g << ' ' << l << endl;
	}
	return 0;
}