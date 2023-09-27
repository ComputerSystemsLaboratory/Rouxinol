#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,i;
	cin >> n;
	vector<int> h(n);
	
	for(i=0;i<n;i++){
		cin >> h[i];
	}
	
	for (i=0;i<n;i++){
		cout << "node " << i+1 <<": key = " << h[i] <<", ";
		if(i!=0){
			cout << "parent key = " << h[((i+1)/2)-1] <<", ";
		}
		if((2*(i+1))-1<n){
			cout << "left key = " << h[2*(i+1)-1] <<", ";
		}
		if((2*(i+1))<n){
			cout << "right key = " << h[2*(i+1)] <<", ";
		}
		cout << endl;
	}
}