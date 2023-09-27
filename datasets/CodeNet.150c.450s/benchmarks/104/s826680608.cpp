#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int A[40],B[40],ary[40];
int main(){
	int W,N;
	cin>>W>>N;
	char hog[9];
	for(int i=1;i<=N;i++){
		cin>>hog;
		if(strlen(hog)==3){
			A[i]=hog[0]-'0';
			B[i]=hog[2]-'0';
		}
		else if(strlen(hog)==5){
			A[i]=(hog[0]-'0')*10+(hog[1]-'0');
			B[i]=(hog[3]-'0')*10+(hog[4]-'0');
		}
		else if(hog[1]=','){
			A[i]=(hog[0]-'0');
			B[i]=(hog[2]-'0')*10+(hog[3]-'0');
		}
		else{
			A[i]=(hog[0]-'0')*10+(hog[1]-'0');
			B[i]=hog[3]-'0';
		}
	}
	for(int i=1;i<=W;i++){
		ary[i]=i;
	}
	for(int i=1;i<=N;i++){
		swap(ary[A[i]],ary[B[i]]);
	}
	for(int i=1;i<=W;i++){
		cout<<ary[i]<<endl;
	}
	return 0;
}