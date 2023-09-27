#include <iostream>
using namespace std;

int main()
{
	int n,m;
	while(cin >> n >> m){
		if(n==0 && m == 0)
			break;
		int stone[50] = {0};
		int j = 0;
		int a = 100;
		int max_m = m;
		while(true){
			for(int i=0;i<n;i++){
				if(stone[i] == max_m)
					a = i;
			}
			if(a != 100)
				break;
		
			if(m > 0){
				stone[j]++;
				m--;
			}
			else{
				m = stone[j];
				stone[j] = 0;
			}
		
			j = (j+1)%n;
		}
		cout << a << endl;
	}
	return 0;
}