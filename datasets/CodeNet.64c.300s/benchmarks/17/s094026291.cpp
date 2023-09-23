#include <iostream>
#include <math.h>
using namespace std;

int x,y,s;
int tax(int r,int p);

int tax(int r,int p){ //r????¨????(%)???p????¨??????????
	return floor(p*(100+r)/100);
}

int main(){
	int maximum;
	while(cin>>x>>y>>s && x>0){
		maximum = 0;
		for(int i=1; i<s; i++){
			for(int j=1; j<s; j++){
				if((tax(x,i)+tax(x,j))==s){
					maximum = max(maximum, tax(y,i)+tax(y,j));
				}
			}
		}
	cout << maximum << endl;
	}
}