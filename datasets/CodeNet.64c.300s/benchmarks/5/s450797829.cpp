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
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;
    for (int i = 0; i < 10; i++){
    	int a;
		cin >> a;
		if(a >= max1){
		max3 = max2;
		max2 = max1;
		max1 = a;
		}else if(a >= max2){
			max3 = max2;
			max2 = a;
		}else if(a >= max3){
			max3 = a;
		}
    }
    cout << max1 << endl << max2 << endl << max3 << endl;
    return 0;
}