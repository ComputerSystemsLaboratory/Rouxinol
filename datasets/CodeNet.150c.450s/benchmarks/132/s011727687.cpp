#include <iostream>

using namespace std;

int main(){
	int n, p, index, owan, answer;
	int person[1000];

	while(1){
		//ÏÌú»
		index = 0;
		for(int i=0 ; i<1000 ; i++){
			person[i] = 0;
		}
   
		//lüÍ  n:óâÒÌl  p:¬ÎÌ
		cin >> n >> p;
		if(n==0 && p==0) break;
		owan = p;//ßÍ¨oÉ¬Îª·×ÄüÁÄ¢é

		while(1){
			if(owan>0){//¨oÉÎª êÎÎð1ÂÆé
				owan--;
				person[index]++;
			}
			else{//ÎðSüêé
				owan += person[index];
				person[index] = 0;
			}

			// élª·×ÄÌ¬ÎðàÁÄ¢½ç»Ìlª¬·ÆÈé
			if(owan==0 && person[index]==p){
				answer = index;
				break;
			}
			index++;//ÐÆÂÆÈèÌÐÆÖ
			if(index>=n)index = 0;
		}

		//¦ÌoÍ
		cout << answer << endl;
	}

	return 0;
}