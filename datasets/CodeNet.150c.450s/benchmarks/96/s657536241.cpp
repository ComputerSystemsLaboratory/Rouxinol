#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

char num1[5]={'.', ',', '!', '?', ' '};
char num2[]="abc", num3[]="def", num4[]="ghi", num5[]="jkl", num6[]="mno", num7[]="pqrs", num8[]="tuv", num9[]="wxyz";

char func(int x, int y);

int main()
{
	int n, ch;
	cin >> n;
	ch = getchar();
	for(int i = 0; i < n; i++){
		int c1, c2=-1, c3=0;
		char c;
		while(1){
			c1 = getchar();
			if(c1 == '\n'){
				cout << endl;
				break;
			} else if(c1 == '0'){
				if(c2 != -1){
					c = func(c2, c3);
					cout << c;
					c3 = 0;
					c2 = -1;
				}
			} else {
				if(c1 == c2) c3++;
				else {
					c1 = c1 - '0';
					c2 = c1;
					c3++;
				}
			}
		}
	}
	return 0;
}

char func(int x, int y)
{
	int z;
	if(x == 1) return num1[(y-1)%5];
	else if(x == 2) return num2[(y-1)%3];
	else if(x == 3) return num3[(y-1)%3];
	else if(x == 4) return num4[(y-1)%3];
	else if(x == 5) return num5[(y-1)%3];
	else if(x == 6) return num6[(y-1)%3];
	else if(x == 7) return num7[(y-1)%4];
	else if(x == 8) return num8[(y-1)%3];
	else return num9[(y-1)%4];
}