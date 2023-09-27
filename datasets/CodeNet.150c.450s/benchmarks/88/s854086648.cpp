#include <iostream>
using namespace std;
int sum,h,w,a,b;
int main(){
	while(1){
		cin >> h>>w;
		if(!(h||w))break;
		sum=h*h+w*w;
		a=h+1;
		while(1){
			while(a*a<sum){
				b=a+1;
				while(a*a+b*b<=sum){
					if(a*a+b*b==sum)goto END;
					b++;
				}
				a++;
			}
			sum++;
			a=1;
		}
		END:;
		cout <<a <<" " <<b <<endl;
	}
}