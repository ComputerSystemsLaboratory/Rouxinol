#include <iostream>
#include <utility>
using namespace std;

//0011
int main(){
	int w, n;

	int a[30]={0};
	for(int i=0; i<30; ++i){
		a[i] = i+1;
	}

	cin >> w >> n;
	for(int i=0; i<n; ++i){
		pair<int,int> p;
		char comma;
		cin >> p.first >> comma >> p.second;

		//swap		
		int temp = a[p.first-1];
		a[p.first-1] = a[p.second-1];
		a[p.second-1]= temp;
	}

	for(int i=0; i<w; ++i){
		cout << a[i] << endl;
	}
	return 0;
}