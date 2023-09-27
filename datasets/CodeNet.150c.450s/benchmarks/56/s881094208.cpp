#include<iostream>
#include<stdio.h>
using namespace std;

int N;
long long A[10110];
int min() {
	long long min_v = A[0];
	for (int i = 0; i < N; ++i) {
		if (A[i] < min_v)
		{
			min_v = A[i];
		}
	}
	return min_v;
}

int max() {
	long long max_v = A[0];
	for (int i = 0; i < N; ++i) {
		if (A[i] > max_v)
		{ max_v = A[i];
		}
	}
	return max_v;
}



long long sum() {
	long long sum_v = 0;
	for (int i = 0; i < N; ++i) {
		sum_v += A[i];
	}
	return sum_v;

}

int main() {
	
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	cout << min() <<' '<<max()<<' '<<sum()<<endl;
	return 0;

	

}
