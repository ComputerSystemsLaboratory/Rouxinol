#include <iostream>
using namespace std;
 
#include <stdio.h>
#include <algorithm>
#include <string>
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
	int n , q;
	int strS[10000]={0} ;
	int strT[500]={0} ;
	int count = 0 ;
	
	cin >> n;	
	for(int i = 0; i<n; i++){
		cin >> strS[i];
	}
	
	cin >> q;
	for(int i = 0; i<n; i++){
		cin >> strT[i];
	}
	
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