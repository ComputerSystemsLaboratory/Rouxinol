#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
using namespace std;

//??°?????????????????°

void function()
{
    //??¢??°
}
 
int main(){
	int a, b;
	while(cin >> a >> b){
		int sum = a + b;
		int cnt = 1;
		while(true){
			sum /= 10;
			if(sum == 0){
				break;
			}
			cnt++;
		}
		cout << cnt << endl;
	}
    return 0;
}