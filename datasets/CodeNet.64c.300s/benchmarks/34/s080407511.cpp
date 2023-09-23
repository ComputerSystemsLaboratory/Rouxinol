#include <iostream>

using namespace std;
int n;

void sort(int a[]){

    int key,j;
    for(int i=1;i<=n;i++){

	for(int l=0;l<n;l++){
	    cout << a[l];
	    if(l < n-1) cout << " ";
	}
	cout << endl;

	if(i == n) break;

	key = a[i];
	j = i - 1;
	while(j >= 0 && key < a[j]){
	    a[j+1] = a[j];
	    a[j] = key;
	    j--;
	}

    }

}
	


int main(){

    int a[100];
    cin >> n;
    for(int i=0;i<n;i++){
	cin >> a[i];
    }

    sort(a);

    return 0;
}