#include<iostream>
using namespace std;

void s_sort(int *a,int N);

int main(){
	int N;
	int a[100];
	cin >> N;
	
	for(int i = 0;i < N;i++){
		cin >> a[i];
	}
	s_sort(a,N);
}

void s_sort(int *a,int N){
	int minj = 0;
	int t = 0;
	int count = 0;
	for(int i = 0;i < N;i++){
		minj = i;
		for(int j = i+1;j < N;j++)	{
			if(a[minj] > a[j]) minj = j;
			}
			if(i != minj){
				t = a[i];
				a[i] = a[minj];
				a[minj] = t;
				count++;
			}		
	}
	for(int k = 0;k < N;k++){
		cout << a[k];
		if(k != N-1) cout << " ";
		else{
			cout << endl;
		}
	}
	cout << count << endl;
}
		