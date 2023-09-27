#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include<string>
#include <algorithm>
#include <functional>
#include <cmath>
using namespace std;
typedef vector <int> ivector;

void save(ivector &a, int n){
	int ceil = sqrt(n);
	
	a.push_back(2);
	for (int i = 3; i < n; i++){
		bool frag = false;
		for (int j = 0; j < a.size(); j++){
			int now = a[j];
			if (i%now == 0){
				frag = true;
				break;
			}
		}
		if (!frag){
			a.push_back(i);
		}
	}

}
bool isPrime(int num,ivector &prime){
	int max = sqrt(num);
	for (int i = 0; i < prime.size(); i++){
		int p = prime[i];
		if (max < p)break;
		if (num%p == 0){
			return false;
		}
	}
	return true;
}
int main(){
	
	ivector prime;
	save(prime, 10000);
	int N;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++){
		int num;
		scanf("%d", &num);
		if (isPrime(num, prime)){
			count++;
		}
	}
	cout << count << endl;

	return 0;
}