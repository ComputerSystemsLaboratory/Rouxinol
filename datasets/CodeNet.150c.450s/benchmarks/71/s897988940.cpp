#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int cnt = 0;
		
		for(int i0 = 0; i0 < 10; ++i0)
			for(int i1 = 0; i1 < 10; ++i1) 
				for(int i2 = 0; i2 < 10; ++i2) 
					for(int i3 = 0; i3 < 10; ++i3) 
						if(n == i0 + i1 + i2 + i3) cnt++;
		cout << cnt << endl;
	} 
}
