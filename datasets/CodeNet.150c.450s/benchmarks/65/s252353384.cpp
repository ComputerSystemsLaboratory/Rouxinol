//============================================================================
// Name        : ALDS1_2_C.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n;
	string temp;
	vector<int> numa, numb;
	vector<char> marka,markb;
	queue<char> aoq[9], boq[9];
	bool isstable;
	cin >> n;
	numa.resize(n);
	numb.resize(n);
	marka.resize(n);
	markb.resize(n);
	for(int i=0; i<n; ++i) {
		cin >> temp;
		marka[i]=temp[0];
		markb[i]=temp[0];
		numa[i]=atoi(&temp[1]);
		numb[i]=atoi(&temp[1]);
		aoq[numa[i]-1].push(marka[i]);
		boq[numb[i]-1].push(markb[i]);
	}
	// bubble sort
	for(int i=0; i<n-1; ++i) {
		for(int j=n-1; j>=i+1; --j) {
			if(numa[j]<numa[j-1]) {
				swap(numa[j],numa[j-1]);
				swap(marka[j],marka[j-1]);
			}
		}
	}
	// insertion sort
	for(int i=0; i<n; ++i) {
		int minj = i;
		for(int j=i+1; j<n; ++j) {
			if(numb[j]<numb[minj]) minj=j;
		}
		if(minj!=i) {
			swap(numb[i],numb[minj]);
			swap(markb[i],markb[minj]);
		}
	}
	isstable=true;
	for(int i=0; i<n-1; ++i) {
		printf("%c%d ",marka[i],numa[i]);
		if(marka[i]!=aoq[numa[i]-1].front()) isstable=false;
		aoq[numa[i]-1].pop();
	}
	if(isstable) {
		printf("%c%d\nStable\n",marka[n-1],numa[n-1]);
	} else {
		printf("%c%d\nNot stable\n",marka[n-1],numa[n-1]);
	}
	isstable=true;
	for(int i=0; i<n-1; ++i) {
		printf("%c%d ",markb[i],numb[i]);
		if(markb[i]!=boq[numb[i]-1].front()) isstable=false;
		boq[numb[i]-1].pop();
	}
	if(isstable) {
		printf("%c%d\nStable\n",markb[n-1],numb[n-1]);
	} else {
		printf("%c%d\nNot stable\n",markb[n-1],numb[n-1]);
	}
	return 0;
}