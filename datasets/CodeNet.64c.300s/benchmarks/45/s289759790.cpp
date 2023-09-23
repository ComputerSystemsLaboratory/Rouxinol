#include <iostream>

using namespace std;

int main(int argc, char **)
{
	int n, m, t = -1, tmp;
	float p, s;
	
	while(1){
		cin >> n >> m >> p;
		if(n == 0){
			break;
		} else if(t != -1){
			cout << endl;
		}
		
		p = 1.0 - p/100;
		s = 0;
		for(int i = 1; i <= n; i++){
			cin >> tmp;
			s += tmp*100;
			if(i == m){
				t = tmp;
			}
		}
		
		if(t == 0){
			cout << "0";
			continue;
		}
		
		cout << (int)(p*s/t);
	}
cout << endl;	

	return 0;
}