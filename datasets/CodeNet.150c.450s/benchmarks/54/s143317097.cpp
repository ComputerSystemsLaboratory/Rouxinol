#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;
string henkan(string x)//??§?????????????????°?°????????????????
{
    int len = x.length();
     
    for(int i = 0; i < len; i++){
        if('A' <= x[i] && x[i] <= 'Z'){
            x[i] += 32;
        }
    }
    return x;
}

void print_answer(int num)
{
	printf("%d\n", num);
}
int main(void)
{
	string W;//??????
	string T;//??????
	
	getline(cin, W);
	
	string x;
	x = W;
	W = henkan(W);
	
	int num = 0;
	while(x!= "END_OF_TEXT"){
		cin >> T;
		
		x = T;
		T = henkan(T);
		
		if(W == T){
			num++;
		}
	}
	
	print_answer(num);
	
	return 0;
}