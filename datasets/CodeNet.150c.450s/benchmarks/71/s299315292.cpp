// 2011/05/31 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(cin.eof())
			break;

		int cnt = 0;
		for(int a=0; a<=9; a++){
			if(a>n)
				break;
			for(int b=0; b<=9; b++){
				if(a+b>n)
					break;
				for(int c=0; c<=9; c++){
					if(a+b+c>n)
						break;
					for(int d=0; d<=9; d++){
						if(a+b+c+d>n)
							break;
						if(a+b+c+d==n)
							cnt++;
					}
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}