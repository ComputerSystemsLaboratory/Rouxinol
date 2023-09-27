#include<iostream>
using namespace std;
int main(){
	int  h , w;
	int length;
	while(cin >> h >> w){
		if(h == 0 && w == 0) break;
			length = h*h + w*w;
			int height ; int width;
			int ansh=150,answ=150,ansl = 150*150 *2;
			for(height = 1;height <=150;height++){
				for(width = 1;width<=150;width++){
					if(height < width){
					int len = height*height + width*width;
					if((length == len && h < height ) || length < len){

								if(((ansl == len) && (ansh > height) )|| ansl > len){
										ansh = height; answ = width; ansl = len;
									}
								}
						}
				}

			}
			cout << ansh<< " " << answ << endl;
	}
}