#include <iostream>
using namespace std;

int main(void){
    int n;
	int *a;
	cin >> n;

	a = new int[n]; 
	
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        cout << a[n - i] << " ";
    }
    cout << a[0] << "\n";
	delete a;
}