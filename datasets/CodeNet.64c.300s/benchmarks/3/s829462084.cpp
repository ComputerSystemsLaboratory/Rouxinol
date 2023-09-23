#include <iostream>
#include <iomanip>
using namespace std;

void call(int n); 
int main(){

	int n;
	cin >> n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{	if(i==n-1){
		cout << a[n-1-i];
		}else{
		cout << a[n-1-i] << " ";
		}
	}
	cout << endl;


return 0;
}