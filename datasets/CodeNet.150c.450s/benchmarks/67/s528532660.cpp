#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n, t, l;
	float m;
	
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		
		t = 0;
		for(int i = 3; i < n; i+=2){
			if(n%i == 0){
				t++;
				l = i;
			}
		}
		
		for(int i = 2; i < n; i+=2){
			m = (float)n/(float)i - (int)(n/i);
			if(m == 0.5 && (i%2 != 0 || i == 2)){
				t++;
			}
		}
		cout << t << endl;
	}
	
	return 0;
}