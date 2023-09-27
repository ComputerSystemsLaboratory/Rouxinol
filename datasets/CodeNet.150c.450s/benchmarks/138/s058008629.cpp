#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 
int main () {
	int a,b,c,big,small,i;
	cin >> a >> b;
	if(a>=b){ big=a; small=b;}
	else{ big=b; small=a;}
	while(big%small!=0){
		c=big%small;
		big=small;
		small=c;
	}
	cout << small << endl;
}