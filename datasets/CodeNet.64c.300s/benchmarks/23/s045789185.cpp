#include<iostream>
#include<math.h>
using namespace std;


void S(double *teihen,double *takasa);
int main(){
	double a,b;
	cin >> a >> b;
	S(&a,&b);
}
void S(double *teihen,double *takasa){
	cout<<(*teihen)*(*takasa)<<" "<<2*(*teihen)+2*(*takasa)<<endl;
}
