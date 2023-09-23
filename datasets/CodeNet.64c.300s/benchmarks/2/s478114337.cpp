#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
#define PI 3.141592653589

int main(){
    int n, a, b, c, d;
	char ss;
    //int num[4][3][10]={0};
	while(1){
		cin >> a >> b >> c;
		if(a == -1 && b == -1 && c == -1)break;
		if(a == -1 || b == -1){
			a = 0;
			b = 0;
		}
		//if()b = 0;
		if(80 <= a + b)ss = 'A';
		else if(65 <= a + b)ss = 'B';
		else if(50 <= a + b)ss = 'C';
		else if(30 <= a + b)ss = 'D';
		else ss = 'F';
		
		if(ss == 'D' && 50 <= c)ss = 'C';
		cout << ss << endl;
	}

    //cin>>n;
    return 0;
}