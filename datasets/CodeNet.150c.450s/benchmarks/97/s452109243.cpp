#include <iostream>
using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main(){
	int N,n,d;
	int map[500][500];

	while(1){
		//ÏÌú»
		for(int y=0 ; y<500 ; y++){
			for(int x=0 ; x<500 ; x++){
				map[y][x] = -1;
			}
		}
		map[250][250] = 0;//0Ì^Cð(x,y)=(250,250)ÌÀWÉu­

		//f[^ZbgNÌüÍ
		cin >> N;
		if(N==0) break;//0ðüÍÅI¹
		
		for(int i=0 ; i<N-1 ; i++){
			//N-1ñ¾¯n dÌüÍ
			cin >> n >> d;

			for(int y=0 ; y<500 ; y++){
				for(int x=0 ; x<500 ; x++){
					if(map[y][x]==n){//^CÔn¾Á½ç

						//^CnÔ©ç1}XÆÈèÉ(i+1)ÔÌ^Cðu­
						//(i+1)ÈÌÍiª0©çnÜÁÄ¢é©ç
						//d: 0:¶  1:º  2:E  3:ã
						int mx = x + dx[d];
						int my = y + dy[d];
						map[my][mx] = i+1;
					}
				}
			}
		}

		//(^CÌ éXÀWÌÅål)-(^CÌ éXÀWÌÅ¬l)+1 ªßéÅ·
		//(^CÌ éYÀWÌÅål)-(^CÌ éYÀWÌÅ¬l)+1 ªßé³Å·
		int minX = 500 , minY = 500;
		int maxX =   0 , maxY =   0;
		//^CÌ éX,YÀWÌÅålÆÅ¬lðßé
		for(int y=0 ; y<500 ; y++){
			for(int x=0 ; x<500 ; x++){
				if(map[y][x]>=0){
					if(x<minX) minX = x;
					if(x>maxX) maxX = x;
					if(y<minY) minY = y;
					if(y>maxY) maxY = y;
				}
			}
		}
		//ðÌoÍ
		cout << (maxX-minX)+1 << " " << (maxY-minY)+1 << endl;
	}
}