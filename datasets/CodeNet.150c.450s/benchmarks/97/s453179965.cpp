#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void init(int array[300][2]){
	for(int i=0;i<300;i++){
		for(int j=0;j<2;j++){
			array[i][j]=0;
		}
	}
}

int main(){
	while(1){
		int N;
		int max_width=0,max_height=0;
		int min_width=0,min_height=0;
		int array[300][2];
		init(array);
		cin >> N;
		if(N==0)break;
		for(int i=1;i<N;i++){
			int n,d;
			cin >> n >> d;
			if(d==0){
				array[i][0]=array[n][0]-1;
				array[i][1]=array[n][1];
			}else if(d==1){
				array[i][1]=array[n][1]+1;
				array[i][0]=array[n][0];
			}else if(d==2){
				array[i][0]=array[n][0]+1;
				array[i][1]=array[n][1];
			}else{
				array[i][1]=array[n][1]-1;
				array[i][0]=array[n][0];			
			}
			max_width=max(array[i][0],max_width);
			max_height=max(array[i][1],max_height);
			min_width=min(array[i][0],min_width);
			min_height=min(array[i][1],min_height);	
		}
		
		cout << max_width - min_width +1<<" "<<max_height - min_height +1<<endl;
	}
		
	return 0;
}