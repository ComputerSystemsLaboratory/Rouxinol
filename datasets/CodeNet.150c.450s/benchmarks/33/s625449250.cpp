// 2018/01/15 Tazoe

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	while(true){
		int x, y, s;
		cin >> x >> y >> s;

		if(x==0 && y==0 && s==0)
			break;

		int tmax = -1;

		for(int a=1; a<=s-1; a++){
			int ax = a*(100+x)/100;
			int ay = a*(100+y)/100;

			for(int b=1; b<=s-1; b++){
				int bx = b*(100+x)/100;
				int by = b*(100+y)/100;

				if(ax+bx==s){
					tmax = max(tmax, ay+by);
				}
				else if(ax+bx>s){
					break;
				}
			}
		}

		cout << tmax << endl;
	}

	return 0;
}

