#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
#include <string>
#include <time.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <cstdlib>
using namespace std;

void trace(int A[],int N){
	for(int i=0;i<N;i++){
		if(i>0)cout << ' ';
		cout << A[i];
	}
	cout << endl;
}

void bubbleSort(int A[],int N){
	
	bool flag=1;
	int count=0;
	while(flag){
		flag=0;
		for(int j=N-1;j>0;j--){
			if(A[j]<A[j-1]){
				int tmp;
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				flag = 1;
				count++;
			}
		}
	}
	trace(A,N);
	cout << count;
	cout << endl;
}

int main(){

	int N;
	int A[100];

	cin >> N;
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	bubbleSort(A,N);

	return 0;
}