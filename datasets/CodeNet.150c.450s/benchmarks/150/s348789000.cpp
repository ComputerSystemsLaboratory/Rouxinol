#include <iostream>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	int A[10001]={};
	int n,num;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		A[num]+=1; 
	}
	for(int i=0;i<n;i++){
		if(0<A[i]){
			cout << i;
			A[i]-=1;
			break;
		}
	}
	for(int i=0;i<10001;i++){
		if(0<A[i]){
			cout << " " << i;
			A[i]-=1;
			i--;
		}
	}
	cout << endl;
	return 0;
}