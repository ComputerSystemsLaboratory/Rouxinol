
#include <iostream>
using namespace std;
int selectionSort(int A[],int N){
	int sw=0,mini=0,t,i,j;//swap?????°????¨?????????????
	for(int i=0;i<N-1;i++){
		mini=i;
		for(int j=i;j<N;j++){
			
			if(A[j]<A[mini]){
				mini=j;
			}
		}
		t=A[i];A[i]=A[mini];A[mini]=t;
		if(i!=mini)sw++;
	}
	return sw;

}

int main(){
	int A[100],N,sw;
	cin >> N;
	for(int i=0;i<N;i++)cin >> A[i];

		sw=selectionSort(A,N);//??¢??°??????????????????????????????
		for(int i=0;i<N;i++){
			if(i)cout << " ";
			cout <<A[i];

		}
	cout <<endl;
	cout <<sw << endl;

	return 0;
	

}