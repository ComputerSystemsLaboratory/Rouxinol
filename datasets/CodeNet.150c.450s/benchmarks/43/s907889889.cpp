#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string> 
#include <sstream>  
#include <vector> 
#include <time.h>
#include <algorithm>
#include <list>
#include <fstream>
#include <math.h>
using namespace std;

int main(void){
	while(true){
		int n,A = 0,B = 0;
		cin >> n;
		if(n == 0)break;
		int a,b;
		while(n){
			n--;
			cin >> a >> b;
			if(a == b){
				A += a;
				B += b;
			}else if(a > b){
				A += a + b;
			}else{
				B += a + b;
			}
		}
		cout << A << " " << B << endl;		
	}

}