#include <iostream>
#include <string>

using namespace std;
int main(){
	string t,h ;
	int n,tl,hl,tp,hp;
	tp=0;
	hp=0;
	cin >> n;
	for(int i = 0; i< n; ++i){
		cin >> t >> h;
		tl = t.size();
		hl = h.size();
		for(int j=0; j < tl && j < hl;j++){
		  if(t[j] > h[j]){
				
			  tp += 3;
			  break;
		  }
		  else if(t[j]<h[j]){
			  
			  hp +=3;
			  break;
		  }
		  else

		  //if number of characters are same
		  if(j==tl-1 ||  j ==hl-1){
				if(tl==hl){
					tp+=1;
					hp+=1;
		  }
				else if (tl > hl){
					tp+=3;
				}
				else{
					hp+=3;
				}
		  }
		  
		}
	}
	cout << tp <<" "<< hp <<endl;

	


		return 0;
}