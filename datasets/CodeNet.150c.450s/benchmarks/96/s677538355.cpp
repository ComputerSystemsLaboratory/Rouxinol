#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	char symbol[5] = {'.', ',', '!', '?', ' '};
	char ans[80];
	int stringSize = 0;
	char input[2000];
	int count;
	
	cin >> count;
	for(int q=0; q < count; q++){
		stringSize = 0;
		cin >> input;
		int num = 0;
		int numCount = 0;
		for(int i=0; i < (int)strlen(input); i++){
			char tmp = input[i];
			int n = atoi(&tmp);
			if(n == num) numCount++;
			else if(n != num){
				switch(num){
					case 1:
						ans[stringSize++] = symbol[numCount % 5];
						break;
					case 2:
						ans[stringSize++] = 'a' + numCount % 3;
						break;
					case 3:
						ans[stringSize++] = 'd' + numCount % 3;
						break;
					case 4:
						ans[stringSize++] = 'g' + numCount % 3;
						break;
					case 5:
						ans[stringSize++] = 'j' + numCount % 3;
						break;
					case 6:
						ans[stringSize++] = 'm' + numCount % 3;
						break;
					case 7:
						ans[stringSize++] = 'p' + numCount % 4;
						break;
					case 8:
						ans[stringSize++] = 't' + numCount % 3;
						break;
					case 9:
						ans[stringSize++] = 'w' + numCount % 4;
						break;
					case 0:
						break;
				}
				num = n;
				numCount = 0;
			}
		}
		ans[stringSize] = '\0';
		cout << ans << endl;
	}
}