#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string>
#include<cmath>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<algorithm>

using namespace std;

#define OUT cout <<
#define IN cin >>
#define E << endl;
#define FOR(i,a,b) for(int i = a;i < b;i++)

vector<int> array;

void input(){
	int temp = 0;
	FOR(i, 0, 5){
		IN temp;
		array.push_back(temp);
	}; 
}

int main(){
	input();
	sort(array.begin(), array.end(),greater<int>());
	
	OUT array[0];

	FOR(i, 1, 5){
		OUT " " << array[i];
	}
	OUT endl;
}