#include <iostream>

using namespace std;

int w,h;
int dx[8] = { -1 , -1 , -1 ,  0 , 0 ,  1 , 1 , 1};
int dy[8] = { -1 ,  0 ,  1 , -1 , 1 , -1 , 0 , 1};
int map[51][51];

void check(int x , int y){
	int mx,my;

	for(int i=0 ; i<8 ; i++){//üÍWûüð²×é
		mx = x + dx[i];
		my = y + dy[i];

		//tB[hOÉoÄ¢È¯êÎ²×é(0ÈãE³Èà)
		if(mx>=0 && mx<w && my>=0 && my<h){
			if(map[my][mx]==1){//¾Á½ç
				map[my][mx] = 2;//ñdÉ²×È¢½ßÉÊÌlðüêé
				check( mx , my );
			}
		}
	}
}

int main(){
	int count;//ÌðJEg·éÏ

	while(1){
		//ÏÌú»
		count = 0;
		
		//E³ÌüÍ
		cin >> w >> h;
		if(w==0 && h==0) break;//0 0ªüÍ³ê½çI¹

		//tB[hª©C©ÌîñðüÍ
		for(int y=0 ; y<h ; y++){
			for(int x=0 ; x<w ; x++){
				cin >> map[y][x];
			}
		}

		for(int y=0 ; y<h ; y++){
			for(int x=0 ; x<w ; x++){
				if(map[y][x]==1){//¾Á½çÄAÖðÄÑo·
					map[y][x] = 2;
					count++;
					check( x , y );
				}
			}
		}

		//¦ÌoÍ
		cout << count << endl;
	}

	return 0;
}