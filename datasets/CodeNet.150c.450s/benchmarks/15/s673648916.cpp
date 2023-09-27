#include <iostream>
using namespace std;
 
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>

/********
*   ?????¢??¢?´¢ Linear Search
*********/ 

/*
int linearSearch(int strS int strT, int n )
{
	int key;
	
	for(int i =0 ; i < n; i++){
		if(strS[i] == key){
			return i;
		}
	}
	return NOT_FOUND;
}
*/

int main(void)
{
	vector<int> strS;
    vector<int> strT;
	int n, q;
	
	cin >> n;	
	strS.resize(n);
	
	for(int i = 0; i<n; i++){
		cin >> strS[i];
	}
	
	cin >> q;
	strT.resize(q);
	for(int i = 0; i<n; i++){
		cin >> strT[i];
	}
	
	int count = 0 ;
	for(int j = 0; j<q ; j++){
		for(int i =0; i < n; i++){
			if(strT[j] == strS[i]){
				count++;
				break;
			}
		}
	}
	cout << count << endl;
	
    return 0;
}