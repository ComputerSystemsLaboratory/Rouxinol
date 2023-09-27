#include <iostream>
using namespace std;

int main(){
	int a,b,c,x[5000],i,j,count;
	j=0;
	cin >>a>>b>>c;
	for(i=1;i<=c;i++){
		if(c%i){
		}else{
		x[j]=i;
		j++;
		}
	}
	c=j;
	for(j=0;j<=c;j++){
		if(x[j]>=a && x[j]<=b){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}