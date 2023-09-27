#include <iostream>
using namespace std;

int main(){
	int a[4],b[4];
	while(true)
	{
		for(int i=0;i<=3;i++)cin >> a[i];
		if(cin.eof())break;
		for(int i=0;i<=3;i++)cin >> b[i];
		int hit=0,blow =0;
		for(int i=0;i<=3;i++)
		{
			for(int j=0;j<=3;j++)
				if(a[i]==b[j])
					if(i==j)hit++;
					else blow++;
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}