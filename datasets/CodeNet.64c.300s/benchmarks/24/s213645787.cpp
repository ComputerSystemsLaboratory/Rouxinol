#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n, s, t, a, b;
	
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		a = b = 0;
		for(int i = 0; i < n; i++){
			cin >> s >> t;
			if(s > t){
				a += (s+t);
			} else if(s < t){
				b += (s+t);
			} else {
				a += s;
				b += t;
			}
		}
		
		cout << a << " " << b << endl;
	}
	
	return 0;
}