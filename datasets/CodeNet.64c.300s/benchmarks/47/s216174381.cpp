#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	
	int A[100] = {};
	int B[100] = {};
	int a, count = 0;
	
	while( cin >> a) {
		
		A[a-1] ++;
		B[a-1] ++;
		count++;
	}
	sort(B, B+count);
	
	for(int i=0;i<100;i++)
	if( A[i] == B[count-1])
	cout << i+1 << "\n";
	
    return 0;
}
