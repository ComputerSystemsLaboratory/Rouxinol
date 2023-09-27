#include<iostream>
using namespace std;
int main(){
	long double ax[100],ay[100],bx[100],by[100],cx[100],cy[100],dx[100],dy[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ax[i]>>ay[i]>>bx[i]>>by[i]>>cx[i]>>cy[i]>>dx[i]>>dy[i];
	}
	for(int i=0;i<n;i++){
		long double A=0,B=0;
		A=(by[i]-ay[i])/(bx[i]-ax[i]);
		B=(dy[i]-cy[i])/(dx[i]-cx[i]);
		if(A==B){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}