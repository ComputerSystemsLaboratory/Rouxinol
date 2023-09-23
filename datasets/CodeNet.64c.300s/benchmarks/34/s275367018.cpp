#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100;
int main()
{
	int n;
	cin >> n;
	int a[MAX];
	for(int i=0;i<n;i++) {
cin >> a[i];
if(i>0) cout << ' ';
cout << a[i];
}
cout << '\n';
	for(int i=1;i<n;i++){
		int key=a[i];
		/*insert A[i] into the sorted sequence A[0, ...,j-1]*/
		int j = i-1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		for(int k=0;k<n;k++){
                        if(k>0) cout << ' ';
			cout << a[k];
		}
		cout << endl;
	}
	return 0;	
}