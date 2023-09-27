#include <stdio.h>
using namespace std;
//---------------------------------------
void henkan(char inp[]);   //?°?????????¨??§???????????\?????????
//---------------------------------------

int main(void)
{
	//char inp0[12] = "abcdefghijk";
	char inp1[1201];
	//char inp2[12] = "abcdefghijk";	
	
	
	
	fgets(inp1, 1201, stdin);
	
	henkan(inp1);
	
	printf("%s",inp1);
	//printf("%s\n",inp0);
	//printf("%s\n",inp2);
	
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