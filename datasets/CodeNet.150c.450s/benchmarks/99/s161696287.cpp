#include <iostream>
#include <cstring>

using namespace std;

int change(char a[10])
{
	int x = 0;
	
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == 'm'){
			if(i == 0){
				x += 1000;
			}
			else{
				x += (a[i - 1] - '0') * 1000;
			}
		}
		
		if(a[i] == 'c'){
			if(i == 0 || a[i - 1] == 'm'){
				x += 100;
			}
			else{
				x += (a[i - 1] - '0') * 100;
			}
		}
		
		if(a[i] == 'x'){
			if(i == 0 || a[i - 1] == 'm' || a[i - 1] == 'c'){
				x += 10;
			}
			else{
				x += (a[i - 1] - '0') * 10;
			}
		}
		
		if(a[i] == 'i'){
			if(i == 0 || a[i - 1] == 'm' || a[i - 1] == 'c' || a[i - 1] == 'x'){
				x += 1;
			}
			else{
				x += a[i - 1] - '0';
			}
		}
	}
	return x;
}

void out(int ans)
{
	int m, c, x, i;
	m = ans / 1000;
	c = (ans - m * 1000) / 100;
	x = (ans - m * 1000 - c * 100) / 10;
	i = ans - m * 1000 - c * 100 - x * 10;
	
	if(m == 1) cout << "m";
	if(m - 1 > 0) cout << m << "m";
	
	if(c == 1) cout << "c";
	if(c - 1 > 0) cout << c << "c";
	
	if(x == 1) cout << "x";
	if(x - 1 > 0) cout << x << "x";
	
	if(i == 1) cout << "i";
	if(i - 1 > 0) cout << i << "i";
	
	cout << endl;
}

int main()
{
	int n;
	char a[10], b[10];
	
	cin >> n;
	while(n--){
		cin >> a;
		cin >> b;
		
		out(change(a) + change(b));
	}
	
	return 0;
}