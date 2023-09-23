// 2011/06/23 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int a[4];
		cin >> a[0];
		if(cin.eof())
			break;
		for(int i=1; i<4; i++)
			cin >> a[i];
		int b[4];
		for(int i=0; i<4; i++)
			cin >> b[i];

		int hit = 0;
		int blw = 0;
		for(int i=0; i<4; i++)
			for(int j=0; j<4; j++)
				if(a[i]==b[j])
					if(i==j)
						hit++;
					else
						blw++;

		cout << hit << ' ' << blw << endl;
	}

	return 0;
}