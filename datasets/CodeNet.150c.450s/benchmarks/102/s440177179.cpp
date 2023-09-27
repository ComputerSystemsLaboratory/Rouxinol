#include <iostream>
#include <vector>
#include <string>
using namespace std;

int walking(vector<vector<char> > &walk, int a, int b, int &count){
	walk[a][b] = '#';
	
	if(walk[a-1][b] == '.'){
		count++;
		walking(walk, a-1, b, count);
	}

	if(walk[a][b-1] == '.'){
		count++;
		walking(walk, a, b-1, count);
	}

	if(walk[a+1][b] == '.'){
		count++;
		walking(walk, a+1, b, count);
	}

	if(walk[a][b+1] == '.'){
		count++;
		walking(walk, a, b+1, count);
	}

	return count;
}

int main(){
	while(1){
		int W, H, a=0, b=0, count=0;
		string str;
		vector<vector<char> > walk;

		cin>>W>>H;
		if((W == 0) && (H == 0))
			break;

		walk.resize(H+2);
		for(int i=0;i<H+2;i++){
			walk[i].resize(W+2);

			if((i == 0) || (i == H+1)){
				for(int j=0;j<W+2;j++)
					walk[i][j] = '#';
			}else{
				walk[i][0] = '#';
				walk[i][W+1] = '#';
			}
		}

		for(int i=1;i<=H;i++){
			cin>>str;
			
			for(int j=0;j<W;j++)
				walk[i][j+1] = str[j];
		}
		
		for(int i=1;i<=H;i++){
			for(int j=1;j<=W;j++){
				if(walk[i][j] == '@'){
					a = i;
					b = j;
					count++;
				}
			}
		}
		
		cout<<walking(walk, a, b, count)<<endl;
	}

	return 0;
}