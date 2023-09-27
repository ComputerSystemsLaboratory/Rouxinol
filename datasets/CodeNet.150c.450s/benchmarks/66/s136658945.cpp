#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M, a, O = 1, f = 0;
  string U[300], T;
  int i, j, k;
  cin>>N;
  for(i = 0; i < N; i++)cin>>U[i];
  
  cin>>M;
  
  for(i = 0; i < M; i++){
    	cin>>T;
	j = 0;
		while(j < N){
			f = 0;
			if((int)T.size() == (int)U[j].size()){
      				for(k = 0; k <(int)T.size(); k++){
					if(U[j][k] != T[k]){
						  break;
					}
				}
					if(k == (int)T.size()){
						if(O){
	 		 				cout<<"Opened by "<<T<<endl;
	  				 		 O = 0;
							f = 1;
							break;
						} else{
	 					  	cout<<"Closed by "<<T<<endl;
	  		 				 O = 1;
							f = 1;
							break;
						}
					}
				
    			 }
			if(f == 1) break;
			j++;
		}
		if(j == N) cout<<"Unknown "<<T<<endl;
	
	}
	
  return 0;
}


