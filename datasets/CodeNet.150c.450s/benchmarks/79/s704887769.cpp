#include <iostream>

using namespace std;
int main(){
	int zero;
	while(1){
		int card,cut;
		
		cin >> card >> cut;
		if(card == 0 && cut == 0){
			return 0;
		}
		
		int topcard = card;
		
		int *c = new int[cut];
		int *p = new int[cut];

		for(int i=0; i<cut; ++i){
			cin >> p[i] >> c[i];
		}

		for(int i=cut-1; i>=0; --i){
			if(topcard > card-c[i]){
				topcard -= (p[i]-1);
			}
			else if( topcard > card-c[i]-(p[i]-1) ){
				topcard += c[i];
			}
		}
		cout << topcard << endl;
		
		delete[] c;
		delete[] p;
		
	}


}