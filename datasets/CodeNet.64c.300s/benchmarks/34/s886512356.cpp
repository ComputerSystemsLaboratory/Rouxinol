#include <iostream>
using namespace std;
int a[1000];

void display(int n){
	for(int i=0;i<n;i++){
		if(i != 0){
			cout<<" ";
		}
		cout<<a[i];
	}
	cout<<endl;
}

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++) cin>>a[i];
	display(N);
	
	for(int i=1;i<N;i++){
		int t = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > t){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t;
		
		display(N);		
	}
	
	return 0;
}