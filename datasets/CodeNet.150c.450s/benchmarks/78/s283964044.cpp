#include <iostream>

#define N 1000000

using namespace std;

int min(int a,int b){
	if(a>=b)return b;
	else return a;
}

int main(){


	int *data;
	int *data2;
	data = new int[N];
	data2= new int[N];
	int *square;
	int squareLength=0;

	int *square2;
	int square2Length=0;

	square = new int[N];
	square2= new int[N];

	for(int i=0;i<N;i++){
		data[i]=N;
		data2[i]=N;
	}

	for(int i=1;i*(i+1)*(i+2)/6 <=N;i++){
		data[i*(i+1)*(i+2)/6]=1;
		square[squareLength]=i*(i+1)*(i+2)/6;
		squareLength++;
		if((i*(i+1)*(i+2)/6 %2)==1){
			data2[i*(i+1)*(i+2)/6]=1;
			square2[square2Length]=i*(i+1)*(i+2)/6;
			square2Length++;
		}
	}

/*
	for(int i=0;i<squareLength;i++){
		cout<<square[i]<<endl;
	}
*/
	for(int i=1;i<N;i++){
		for(int j=0;j<squareLength;j++){
			if(i-square[j]<0)continue;
			data[i] = min(data[i],data[i-square[j]]+1);
		}
		for(int j=0;j<square2Length;j++){
			if(i-square2[j]<0)continue;
			data2[i] = min(data2[i],data2[i-square2[j]]+1);
		}
	}

	int n;
	while(cin>>n){
		if(n==0)break;

		cout<<data[n]<<" "<<data2[n]<<endl;

	}

	return 0;

}