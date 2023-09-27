//貪欲法(嘘解法かも…)
#include<iostream>
using namespace std;

int corn1,corn2;
bool flag;

int main(){
	int n,i,j;
	int t;
	
	cin >> n;
	for( i = 0;i < n;i++ ){
		corn1 = 0;
		corn2 = 0;
		flag = true;
		for( j = 0;j < 10;j++ ){
			cin >> t;
			
			if( corn1 < t )
				corn1 = t;
			else if( corn2 < t )
				corn2 = t;
			else
				flag = false;
		}
		if( flag )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}