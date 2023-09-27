#include <iostream>
using namespace std;
int answer[5];
int in[5];
int main(){
	for(int i = 0;i<=4;i++){
		cin >> in[i];
	}
	for(int i = 0;i<=4;i++){
		for (int j =i+1; j<=4;j++){
			if(in[i] <= in[j]){
				int t = in[i];
				in[i] = in[j];
				in[j] = t;
			}
		}
	}
	for(int i = 0;i<=3;i++)
		cout << in[i] << " " ;
		
	cout << in[4]<< endl;
	return 0;
}