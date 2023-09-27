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


int main(){
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF){
		int dat=log10(a + b);
		cout << dat+1 << endl;
	}
	

	return 0;
}