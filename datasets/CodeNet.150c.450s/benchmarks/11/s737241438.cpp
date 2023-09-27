#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,lank,s[13],h[13],c[13],d[13];
	string suit;

	for(int i=0;i<13;i++){
		s[i]=0;
		h[i]=0;
		c[i]=0;
		d[i]=0;
	}

	cin >> n;
	for (int i=0;i<n;i++){
		cin >> suit >> lank;
		if(suit=="S"){
			s[lank-1]=1;
		}else if(suit=="H"){
			h[lank-1]=1;
		}else if(suit=="C"){
			c[lank-1]=1;
		}else if(suit=="D"){
			d[lank-1]=1;
		}
	}
	
	for (int i=0;i<13;i++){
		if(s[i]==0){
			cout << "S " << i+1 << endl;
		}
	}
	for (int i=0;i<13;i++){
		if(h[i]==0){
			cout << "H " << i+1 << endl;
		}
	}
	for (int i=0;i<13;i++){
		if(c[i]==0){
			cout << "C " << i+1 << endl;
		}
	}
	for (int i=0;i<13;i++){
		if(d[i]==0){
			cout << "D " << i+1 << endl;
		}
	}

}