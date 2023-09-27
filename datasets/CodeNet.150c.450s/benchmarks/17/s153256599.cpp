#include<iostream>
#include<algorithm>

using namespace std;


int main(){
	
	int A[5];
	
	for(int i=0;i<5;i++)
	cin >> A[i];
	
	sort(A, A+5);
	
	for(int i=4;i>0;i--)
	cout << A[i] << " ";
	cout << A[0] << "\n";
	
    return 0;
}
