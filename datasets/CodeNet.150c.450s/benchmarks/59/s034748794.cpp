#include <iostream>

#define N 100
using namespace std;

int count;
int A[N];

void display(){
	int i,j;   // roop variable
	for(i=0;i<count;i++){
	cout << A[i];
	if(i != count-1)
		cout << " ";
	else cout << "\n";
	}
}
void insertionSort(int A[],int count){
	int i,j;   // roop variable
for(i=1;i<count;i++){
	int key = A[i];
	int j = i - 1;
	while((j>=0) && (A[j] > key)){
	A[j+1] = A[j];
	j--;
	}
A[j+1] = key;
display();
	}
}

int main(){
	int i,j;   // roop variable
	cin >> count;
 for(i=0;i<count;i++){
	cin >> A[i];
 }
// cout << "\n";
 display();
insertionSort(A, count);
return 0;
}