#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
//---------------------------------------
void henkan(char inp[]);   //?°?????????¨??§???????????\?????????
//---------------------------------------

int main(void)
{
	string inp1;
	
	getline(cin, inp1);  //???????????????????????????????????????
	
	henkan(&inp1[0]);
		
	cout << inp1 << endl;   //????¨??????????C++ver

	
	return 0;
}

//------------------------------------------
void henkan(char inp[])
{	
	for(int i = 0; i < 1200; i++){
		if(inp[i] >= 'A' && inp[i] <= 'Z'){
			inp[i] += 32;
		}
		else if(inp[i] >= 'a' && inp[i] <= 'z'){
			inp[i] -= 32;
		}
	}
}