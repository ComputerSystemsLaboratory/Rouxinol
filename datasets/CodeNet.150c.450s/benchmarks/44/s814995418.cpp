#include <iostream>
using namespace std;

int a[4],b[4];
void search()
{
	int hit=0,blow=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(a[i] == b[j] && i==j)
				hit++;
			else if(a[i]==b[j])
				blow++;
		}
	}
	cout << hit << ' ' << blow << endl;
}

int main()
{
	while(cin >> a[0]){
		for(int i=1;i<4;i++){
			cin >> a[i];
		}
		for(int i=0;i<4;i++){
			cin >> b[i];
		}
		search();
	}
	return 0;
}