#include <iostream>
using namespace std;

void bubblesort(char Cp1[],char Cp2[], int N);
void selectionsort(char Cp1[],char Cp2[], int N);
bool isStable(char Cp1[],char Cp2[], int N);

int main()
{
	int N;
	cin >> N;
	char *Cp1 = new char[N];
	char *Cp2 = new char[N];
	char *Cp3 = new char[N];
	char *Cp4 = new char[N];

	for(int i=0;i<N;i++){
		cin >> Cp1[i] >> Cp2[i];
		Cp3[i] = Cp1[i];
		Cp4[i] = Cp2[i];
	}
	
	bubblesort(Cp1,Cp2,N);
	selectionsort(Cp3,Cp4,N);

	for(int i=0;i<N;i++){
		if(0<i) cout << ' ';
		cout << Cp1[i] << Cp2[i];
	}
	cout << endl;
	cout << "Stable\n";


	for(int i=0;i<N;i++){
		if(0<i) cout << ' ';
		cout << Cp3[i] << Cp4[i];
	}
	cout << endl;

	if(isStable(Cp1,Cp3,N)){
		cout << "Stable\n";
	}else{
		cout << "Not stable\n";
	}

	delete []Cp1;
	delete []Cp2;

	return 0;

}

void bubblesort(char Cp1[], char Cp2[],int N)
{
	for(int i=0;i<N-1;i++){
		for(int j=N-1;j>=i+1;j--){
			if(Cp2[j] < Cp2[j-1]){
				swap(Cp1[j],Cp1[j-1]);
				swap(Cp2[j],Cp2[j-1]);
			}	
		}
	}	
}

void selectionsort(char Cp1[], char Cp2[], int N)
{
	int minv;
	for(int i=0;i<N-1;i++){
		minv = i;
		for(int j=i;j<N;j++){
			if(Cp2[j] < Cp2[minv]) minv = j;
		}
		swap(Cp1[i],Cp1[minv]);
		swap(Cp2[i],Cp2[minv]);
	}
}

bool isStable(char Cp1[], char Cp2[], int N)
{
	for(int i=0;i<N;i++){
		if(Cp1[i] != Cp2[i]) return false;
	}
	return true;
}