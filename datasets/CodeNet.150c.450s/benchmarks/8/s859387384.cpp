#include <iostream>

using namespace std;

inline int min(int x, int y){
	return x < y ? x : y;
}

int main(){
	int n;
	string cardTaro, cardHanako;
	unsigned int ctsize, chsize;
	int lim, pointTaro = 0, pointHanako = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> cardTaro >> cardHanako;
		ctsize = cardTaro.size();
		chsize = cardHanako.size();
		lim = min(ctsize, chsize);

		int j;
		for(j = 0; j < lim; j++){
			if(cardTaro[j] > cardHanako[j]){
				pointTaro += 3;
				break;
			}else if(cardTaro[j] < cardHanako[j]){
				pointHanako += 3;
				break;
			}
		}

		if(j == lim){
			if(ctsize > chsize){
				pointTaro += 3;
			}else if(ctsize < chsize){
				pointHanako += 3;
			}else{
				pointTaro += 1;
				pointHanako += 1;
			}
		}
	}

	cout << pointTaro << " " << pointHanako << endl;

	return 0;
}