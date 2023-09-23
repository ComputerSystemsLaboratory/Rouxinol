#include<iostream>
using namespace std;

int N;

int main(){
	N = 10;
	int t;
	int mh[N];
	
	for(int i=0; i<10; i++){
		cin >> t;
		if(t>=0 && t<=10000)
			mh[i]=t;
		else{
			i=i-1;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
			if(mh[i] < mh[j]){
				t = mh[i];
				mh[i] = mh[j];
				mh[j] = t;
			}
		}
	}
	
	for(int i=0; i<3; i++)
		cout << mh[i] << "\n";
	
	return 0;
}