#include <iostream>
#include <stdio.h>

using namespace std;

struct Dice{

	int u;	int w;	int s;	int e;	int n;	int d;
	
	Dice (int d1, int d2, int d3, int d4, int d5, int d6)
		{u = d1; s = d2; e = d3; w = d4; n = d5; d = d6;}
	
	Dice (int *num){
		u = num[0]; s = num[1]; e = num[2];
		w = num[3]; n = num[4]; d = num[5];}
	
	Dice ()
		{u = 1; s = 2; e = 3; w = 4; n = 5; d = 6;}

	void rotate(char *direction){
		int dam = 0;
		for (int i = 0; direction[i] != '\0'; i++){
			switch (direction[i]){
			case 'E':
				dam = e;
				e = u; u = w; w = d; d = dam;
				break;
			case 'N':
				dam = n;
				n = u; u = s; s = d; d = dam;
				break;
			case 'S':
				dam = s;
				s = u; u = n; n = d; d = dam;
				break;
			case 'W':
				dam = w;
				w = u; u = e; e = d; d = dam;
				break;
			default:
				break;
			}
		}
	}	
	
	void display(char direction){
		switch (direction){
			case 'E': printf("%d\n",e); break;
			case 'N': printf("%d\n",n); break;
			case 'S': printf("%d\n",s); break;
			case 'W': printf("%d\n",w); break;
			case 'U': printf("%d\n",u); break;
			case 'D': printf("%d\n",d); break;
			default: break;
		}
	}
};


int main(){
	int num[6];
	for (int i = 0; i < 6; i++)cin >> num[i];
	Dice d = num;
	
	char s[100];
	cin >> s;
	d.rotate(s);
	d.display('U');
	return 0;
}