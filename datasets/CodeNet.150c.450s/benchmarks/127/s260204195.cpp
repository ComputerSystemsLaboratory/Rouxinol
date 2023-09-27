#include <iostream>
#include <cstring>

using namespace std;

void solve(char t[100])
{
	char x[100], y[100], xh[100], yh[100];
	int count = 1;
	int e = 0;
	int n = 8 * (strlen(t) - 1);
	char s[800][100];
	bool flag = true;
	
	//cout << t << endl;
	
	for(int i = 0; i < strlen(t) - 1; i++){
		for(int j = 0; j <= i; j++){
			x[j] = t[j];
		}
		x[i + 1] = '\0';
		
		for(int j = i; j < strlen(t); j++){
			y[j - i] = t[j + 1];
		}
		y[strlen(t) - i + 1] = '\0';
		//cout << x << " " << y << endl;
		
		for(int j = 0; j < strlen(x); j++){
			xh[j] = x[strlen(x) - j - 1];
		}
		xh[strlen(x)] = '\0';
		
		for(int j = 0; j < strlen(y); j++){
			yh[j] = y[strlen(y) - j - 1];
		}
		yh[strlen(y)] = '\0';
		//cout << xh << " " << yh << endl;
		
		strcpy(s[0 + e], x);
		strcat(s[0 + e], y);
		
		strcpy(s[1 + e], x);
		strcat(s[1 + e], yh);
		
		strcpy(s[2 + e], xh);
		strcat(s[2 + e], y);
		
		strcpy(s[3 + e], xh);
		strcat(s[3 + e], yh);
		
		strcpy(s[4 + e], y);
		strcat(s[4 + e], x);
		
		strcpy(s[5 + e], y);
		strcat(s[5 + e], xh);
		
		strcpy(s[6 + e], yh);
		strcat(s[6 + e], x);
		
		strcpy(s[7 + e], yh);
		strcat(s[7 + e], xh);
		
		e += 8;
	}
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(!strcmp(s[i], s[j])){
				flag = false;
			}
		}
		if(flag) count++;
		else flag = true;
	}
	cout << count << endl;

}


int main()
{
	int m;
	char t[100];
	
	cin >> m;
	while(m--){
		cin >> t;
		solve(t);
	}
	return 0;
}