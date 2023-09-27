#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	string in[N];
	string out[N];
	for(int i = 0; i < N; ++i){
		cin >> in[i];
		out[i] = in[i];
	}
	// Bubble Sort
	for(int i = 0; i < N; ++i){
		for(int j = N - 1; j > i; --j){
			if(out[j].at(1) < out[j - 1].at(1)){
				string str = out[j];
				out[j] = out[j - 1];
				out[j - 1] = str;
			} 
		}
	}
	for(int i = 0; i < N; ++i){
		if(i != N - 1) cout << out[i] << " ";
		else cout << out[i] << endl;
	}
	cout << "Stable" << endl;
	
	// Selection Sort
	for(int i = 0; i < N; ++i){
		int minj = i;
		for(int j = i; j < N; ++j){
			if(in[j].at(1) < in[minj].at(1)){
				minj = j;
			}
		}
		string s = in[i];
		in[i] = in[minj];
		in[minj] = s;
	}
	for(int i = 0; i < N; ++i){
		if(i != N - 1) cout << in[i] << " ";
		else cout << in[i] << endl;
	}
	for(int i = 0; i < N; ++i){
		if(in[i] != out[i]){
			cout << "Not stable" << endl;
			return 0;
		}
	}
	cout << "Stable" << endl;
	
	return 0;
}