#include<iostream>

using namespace std;
typedef long Type;
typedef struct CardValSuite{char suit,val;}Card;


template <class T1>
inline void swap0(T1& a,T1& b){
	T1 t;t=a;a=b;b=t;
}



Card* insertionSort(Card A[], int N){

	int i,j;
	Card buf;
	for(i=1;i<N;i++){
		j=i-1;
		buf=A[i];
		while(buf.val<A[j].val&&j>=0){
			A[j+1]=A[j];
			j--;
		}A[j+1]=buf;
		
		/*for(j=0;j<N-1;j++){
			cout<<A[j]<<" ";
		}cout<<A[N-1]<<endl;
		*/
	}
	return A;
}


Card* selectionSort(Card A[], int N){

	int i,j,cnt=0,cnt2=0;
	char Min;
	
	for(int i=0;i<N;i++){
		Min=A[i].val;
		for(int j=i;j<N;j++){
			if(Min>A[j].val)Min=A[j].val,cnt=j;
		}
		if(cnt)swap0(A[i],A[cnt]),cnt2++;
		cnt=0;
	}
	
	//cout<<cnt2<<endl;
	return A;
}



Card* bubbleSort(Card A[], int N){

	for(int j=0;j<N-1;j++)
	for(int i=N-1;i>j;i--){
		if(A[i].val<A[i-1].val)swap0(A[i],A[i-1]);
	}
	return A;
}



bool isStable(Card A[],Card B[],int N){

	for(int i=0;i<N;i++){
		if(A[i].val!=B[i].val||A[i].suit!=B[i].suit)
		return 0;
	}
	return 1;
}



int main(){
	
	int N;
	cin>>N;
	//Type A[N];
	Card* ans;
	Card* ans2;
	
	Card A[N],B[N];
	
	for(int i=0;i<N;i++)cin>>A[i].suit>>A[i].val;
	for(int i=0;i<N;i++)B[i]=A[i];
	
	ans=bubbleSort(A,N);
	
	for(int j=0;j<N-1;j++){
		cout<<ans[j].suit<<ans[j].val<<" ";
	}cout<<ans[N-1].suit<<ans[N-1].val<<endl;
	cout<<"Stable"<<endl;
	
	ans2=selectionSort(B,N);
	
	for(int j=0;j<N-1;j++){
		cout<<ans2[j].suit<<ans2[j].val<<" ";
	}cout<<ans2[N-1].suit<<ans2[N-1].val<<endl;
	
	if(isStable(ans,ans2,N)){
		cout<<"Stable"<<endl;
	}else{cout<<"Not stable"<<endl;}
	
	return 0;
}