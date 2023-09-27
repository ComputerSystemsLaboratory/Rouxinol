/* last edited at 28/8/2015 by charis
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C
*/

#include<iostream>
#include<cstdio>
using namespace std;

void BubbleSort(int N, char C[], int D[]){
	for(int i=0; i<N-1; i++){
		for(int j=N-1; j>i; j--){
			if(D[j]<D[j-1]){
				int t=D[j-1]; D[j-1]=D[j]; D[j]=t;
				char s=C[j-1]; C[j-1]=C[j]; C[j]=s;		
			}
		}
	}
}

void SelectionSort(int N, char E[], int F[]){
	for(int i=0; i<N-1; i++){
		int min=i;
		for(int j=i+1; j<N; j++){
			if(F[min]>F[j]) min=j;
		}
		int t=F[i]; F[i]=F[min]; F[min]=t;
		char s=E[i]; E[i]=E[min]; E[min]=s;		
	}
}

bool check(int N, char A[], int B[], char C[], int D[]){
	for(int i=0; i<N-1; i++){	
		for(int j=i+1; j<N; j++){
			for(int m=0; m<N-1; m++){
				for(int n=m+1; n<N; n++){
					if(B[i]==B[j] && B[j]==D[m] && D[m]==D[n]){
						if(A[i]==C[n] && A[j]==C[m]) return false;
					}
				}
			}
		}
	}
	return true;
}

int main(){
	int N;
	cin >> N;
	char A[N], C[N], E[N];
	int B[N], D[N], F[N];
	for(int i=0; i<N; i++){
		cin >> A[i] >> B[i];
		C[i]=A[i]; D[i]=B[i]; E[i]=A[i]; F[i]=B[i]; 
	}

	BubbleSort(N, C, D);
	
	for(int i=0; i<N-1; i++){
		cout << C[i] << D[i] << " ";
	}
	cout << C[N-1] << D[N-1] << endl;
	if(check(N, A, B, C, D)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	SelectionSort(N, E, F);
	
	for(int i=0; i<N-1; i++){
		cout << E[i] << F[i] << " ";
	}	
	cout << E[N-1] << F[N-1] << endl;
	if(check(N, A, B, E, F)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;	
	
	return 0;
}