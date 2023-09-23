//============================================================================
// Name        : oturi.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int pay = 1000,buy,oturi = 0,gohyaku,gohyakua,hyaku,hyakua,goju,gojua,ju,jua,go,goa;
    while(1){
	cin >> buy;
	if(buy == 0){
		break;
	}
	oturi = pay - buy;
	gohyakua = oturi % 500;
	gohyaku = oturi / 500;
	hyakua = gohyakua % 100;
	hyaku = gohyakua / 100;
	gojua = hyakua % 50;
	goju = hyakua / 50;
	jua = gojua % 10;
	ju = gojua / 10;
	goa = jua % 5;
	go = jua / 5;
	cout << gohyaku + hyaku + goju + ju + go + goa << endl;
    }
	return 0;
}