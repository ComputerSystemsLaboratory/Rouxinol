#include <iostream>
using namespace std;

int main()
{
	int N,minv,*Ap,sw=0;
	cin >> N;
	Ap = new int[N];
	for(int i=0;i<N;i++) cin >> Ap[i];

	for(int i=0;i<N-1;i++){
		minv = i;
		for(int j=i;j<N;j++){
			if(Ap[j] < Ap[minv]){
				minv = j;	
			}
		}
		if(minv != i){
			swap(Ap[i],Ap[minv]);
			sw++;
		}
		
	}
	for(int i=0;i<N;i++){
		if(i>0) cout << ' ';
		cout << Ap[i];
	}
	cout << endl;
	cout << sw << endl;
}