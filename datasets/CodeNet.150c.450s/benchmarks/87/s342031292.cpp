#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


 int main(){
	 
	 int h;
	 while(1){
		 int p=0;
		 int flag=1;
		 int x;
		cin >> h;
		if(h == 0) break;
		vector<vector<int>> A(5);
		for(int j = h-1; j >= 0; j--){
			for(int i = 0; i< 5; i++){
				cin >> x;
				A[i].push_back(x);
			}
		}
		for(int i = 0; i< 5; i++){
			reverse(A[i].begin(), A[i].end());
			}


		while(1){
			int flag=0;
		for(int i = 0; i < h; i++){
			int count=0;
			int mem=-1;
			//一行の処理開始
			for(int j=0; j< 5;j++){
				if(mem==A[j][i]) count++;
				else {
					mem =A[j][i];
					count = 0;
				}
				if(count > 1) {
					A[j-2][i] +=10;
					A[j-1][i] +=10;
					A[j][i] +=10;
					if(mem!=0) flag =1;
				}
			}
			for(int k = 0; k < 5 ; k++){
				if(A[k][i] >=10){
					p += A[k][i]%10;
					A[k][i]=0;
				}
			}//一行の処理終了
		}
		for(int i= 0; i < 5 ; i++){
			vector<int> B(A[i]);
			int counter=0;
			for(int j = 0 ; j < h ; j++){
				if(B[j] !=0){
					A[i][counter] = B[j];
					counter+=1;
				}
			}
			for(;counter<h; counter++){
				A[i][counter] = 0;
			}
		} 
		if(flag == 0) break;
		}
		cout <<p <<endl;
	 }
		 



	return 0;
 }