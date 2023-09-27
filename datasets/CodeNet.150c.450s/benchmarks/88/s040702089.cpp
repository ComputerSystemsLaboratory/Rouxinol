//D
#include<iostream>
using namespace std;
int main(){
	int h,w;
	while(true){
	cin>>h>>w;
	if(h==0&&w==0)break;
	int a=999,b=999;
	for(int i=1;i<=150;i++){
		for(int j=i+1;j<=150;j++){//(h,w)と(i,j)の比較
			if((h*h+w*w<j*j+i*i||h*h+w*w==j*j+i*i&&h<i)&&(a*a+b*b>j*j+i*i||i*i+j*j==a*a+b*b&&b>i)){
			a=j,b=i;
			}
		}
	}
	cout<<b<<" "<<a<<endl;
	}
	return 0;
}