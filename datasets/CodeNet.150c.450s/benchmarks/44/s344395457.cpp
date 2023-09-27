#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a[4], b[4], s, t; 
	
	while(cin >> a[0] >> a[1] >> a[2] >> a[3]){
		cin >> b[0] >> b[1] >> b[2] >> b[3];
		s = t = 0;
		for(int i = 0; i < 4; i++){
			if(a[i] == b[i]){
				a[i] = b[i] = -1;
				s++;
			}
		}
		
		for(int i = 0; i < 4 && s != 4; i++){
			for(int j = 0; j < 4 && a[i] != -1; j++){
				if(a[i] == b[j]){
					t++;
				}
			}
		}
		
		cout << s << " " << t << endl;
	}
	
	return 0;
}