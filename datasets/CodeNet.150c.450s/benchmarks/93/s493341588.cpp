//============================================================================
// Name        : Partition.cpp
// Author      : Ken
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

bool isStable = true;

struct Card{
	char mark;
	int number;
};

void QuickSort(vector<Card>&, int, int);

void Print(vector<Card>& A, int n){
	for(int i=0; i<n; i++){
		cout << A.at(i).mark << A.at(i).number << " ";
	}

	cout << "[" << A.at(n).mark << A.at(n).number << "] ";

	for(int i=n+1; i<A.size()-1; i++){
		cout << A.at(i).mark << A.at(i).number << " ";
	}

	cout << A.at(A.size()-1).mark << A.at(A.size()-1).number << "\n";
}

void Print(vector<Card>& A){
	for(int i=0; i<A.size(); i++){
		cout << A.at(i).mark << " " << A.at(i).number << "\n";
	}
}

int Partition(vector<Card>& A, int p, int r){
	int x = A.at(r).number;
	int i = p-1;
	for(int j=p; j<r; j++){
		//cout << "j: " << j << "\n";
		if(A.at(j).number <= x){
			i ++;
			Card tmp;
			tmp = A.at(i);
			A.at(i) = A.at(j);
			A.at(j) = tmp;
			//cout << "i: " << i << "\n";
			//Print(A);
			//cout << "\n";
		}
	}
	Card tmp = A.at(i+1);
	A.at(i+1) = A.at(r);
	A.at(r) = tmp;

	return i+1;
}



void QuickSort(vector<Card>& A, int p, int r){
	if(p<r){
		int q = Partition(A, p, r);
		//Print(A);
		//cout << "\n";
	    QuickSort(A, p, q-1);
	    QuickSort(A, q+1, r);
	}
}

map<int, string> ReadOrder(vector<Card>& A){
	map<int, string> order;

	for(int i=0; i<A.size(); i++){
		stringstream ss;
		string str;
		ss << A.at(i).mark;
		ss >> str;

		if(order.count(A.at(i).number) == 0){
		    order[A.at(i).number] = str;
		}else{
			order[A.at(i).number] += str;
		}
	}

	return order;
}

void PrintOrder(map<int, string>& A){
	map<int, string>::iterator p;
	for(p = A.begin(); p != A.end(); p++){
		cout << p->first << " " << p->second << " ";
	}
}

bool CheckOrder(map<int, string>& A, map<int, string>& B){
	bool isSame = true;

	map<int, string>::iterator p;
	for(p=A.begin(); p!=A.end(); p++){
		int position = p->first;
		if(A.at(position) != B.at(position)){
			isSame = false;
		}
	}

	return isSame;
}

int main() {
	map<int, string> before_order;
	map<int, string> after_order;

	int n;
	cin >> n;
	vector<Card> A;

	for(int i=0; i<n; i++){
		char mark;
		int number;
		cin >> mark >> number;
		Card card = {mark, number};
		A.push_back(card);
	}
	//Print(A);
	//cout << "\n";
	//cout << "here\n";
	//int ret = Partition(A, 0, n-1);
	before_order = ReadOrder(A);
	QuickSort(A, 0, n-1);
	after_order = ReadOrder(A);

	isStable = CheckOrder(before_order, after_order);

	if(isStable){
		cout << "Stable\n";
	}else{
		cout << "Not stable\n";
	}

	Print(A);
	//cout << "before_order:\n";
	//PrintOrder(before_order);
	//cout << "after_order:\n";
	//PrintOrder(after_order);


	return 0;
}

