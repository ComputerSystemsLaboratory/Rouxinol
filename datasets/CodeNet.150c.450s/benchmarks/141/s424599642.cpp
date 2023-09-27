#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a[2],b[2],c[2],p[2];
	double matrix[2][2],ans[2],reverse[2][2],det,x,y;
	while(cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>p[0]>>p[1]){
		b[0] = b[0]-a[0];
		b[1] = b[1]-a[1];
		c[0] = c[0]-a[0];
		c[1] = c[1]-a[1];
		p[0] = p[0]-a[0];
		p[1] = p[1]-a[1];
		matrix[0][0] = b[0];
		matrix[1][0] = c[0];
		matrix[0][1] = b[1];
		matrix[1][1] = c[1];
		ans[0] = p[0];
		ans[1] = p[1];
		det = matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
		reverse[0][0] = matrix[1][1]/det;
		reverse[1][0] = -matrix[1][0]/det;
		reverse[0][1] = -matrix[0][1]/det;
		reverse[1][1] = matrix[0][0]/det;
		x = ans[0]*reverse[0][0]+ans[1]*reverse[1][0];
		y = ans[0]*reverse[0][1]+ans[1]*reverse[1][1];
		if(x>0 && y>0 && x+y<1){cout <<"YES"<<endl;}
		else{cout <<"NO"<<endl;}
	}
	return 0;
}