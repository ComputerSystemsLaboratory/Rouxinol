#include <iostream>
using namespace std;

int main(){
	int N,max,min,tmp;
	cin >> N;
	for(int i=0; i<N;i++){
		cin >> tmp;
		if(i==0){
			min = tmp;
		}
		if(i==1){
			max = tmp - min;
		}
		if(max < (tmp-min)){
			max = tmp-min;
		}
		if(tmp < min){
			min = tmp;
		}
	}
	cout << max << endl;
	return 0;
}