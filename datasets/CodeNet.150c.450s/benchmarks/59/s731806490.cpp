#include <iostream>

using namespace std;
void print(int *a,int n)
{
	for(int i = 0; i <n-1 ; i++){
		cout <<a[i]  << " ";
	}
	cout << a[n-1];
	cout << endl;
	return;
}

void insertion(int *a,int n)
{
	for(int i = 0 ; i < n ; i ++){
		int key = a[i];
		int j = i-1;
		while(j >= 0 && key < a[j]){
			a[j+1] = a[j];
			j --;
		}
		a[j+1] = key;
		print(a,n);
	}
	return;
}


int main(int argc, char const *argv[])
{
	//input 
	int n = 0 ;
	cin >> n;
	int *a = new int[n];
	for(int i = 0 ; i < n ; i ++){
		cin >> a[i];
	}

	//insertion sort
	insertion(a,n);
	return 0;
} 