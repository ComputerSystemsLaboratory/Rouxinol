// 2018/01/22 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int h, w;
		cin >> h >> w;

		if(h==0 && w==0)
			break;

		int d = h*h+w*w;

		int H = 150;
		int W = 150;
		int D = 150*150+150*150;

		for(int y=1; y<=150; y++){
			for(int x=y+1; x<=150; x++){
				int z = y*y+x*x;

				if(z<=d){
					continue;
				}
				else{
					if(z<D){
						H = y;
						W = x;
						D = z;
					}
					break;
				}
			}
		}

		for(int y=h+1; y<150; y++){
			bool flg = false;

			for(int x=y+1; x<=150; x++){
				int z = y*y+x*x;

				if(z==d){
					H = y;
					W = x;
					D = z;

					flg = true;
				}

				if(z>=d)
					break;
			}

			if(flg)
				break;
		}

		cout << H << ' ' << W << endl;
	}

	return 0;
}

