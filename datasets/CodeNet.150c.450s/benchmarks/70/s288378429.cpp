#include <iostream>
#include <string>
using namespace std;

int main(void){
	string day[7]={	"Thursday",
 					"Friday",
 					"Saturday",
					"Sunday",
					"Monday",
 					"Tuesday",
 					"Wednesday"
				};
	int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int m,d;
	while(cin >> m >> d,m|d){
		int r=-1;
		for(int i=0;i<m;i++)
			r+=month[i];
		r+=d;
		r%=7;
		cout << day[r] << endl;
	}
	return 0;
}