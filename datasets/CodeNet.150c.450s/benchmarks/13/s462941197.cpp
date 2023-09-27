#include <bits/stdc++.h>
using namespace std;

int main(){
	char Chara[1000],Frisk[1000],Soul[1000];
	cin >> Chara >> Frisk;

		strcpy(Soul,Chara);
		strcat(Chara,Soul);
		if(strstr(Chara,Frisk) == 0 )cout << "No"  << endl;
		else cout << "Yes" << endl;
}