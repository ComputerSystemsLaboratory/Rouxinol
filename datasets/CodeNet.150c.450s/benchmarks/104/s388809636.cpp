#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int w,n;
	int a,b;
	int line[30];
	int i;
	char comma;

	for(i=0;i<30;i++){
		line[i]=i+1;
	}
	cin >> w;
	if(w<=30&&w>0){
		cin >> n;
		for(i=0;i<n;i++){
			cin >> a >> comma >> b;
			if(a>0&&b>0&&a<=w&&b<=w) swap(line[a-1],line[b-1]);
		}
		for(i=0;i<w;i++){
			cout << line[i] << endl;
		}
	}
	return 0;
}