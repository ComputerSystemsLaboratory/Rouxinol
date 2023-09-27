#include<iostream>
using namespace std;

struct card {
	int num;
	char suit;
	bool operator!=(const card& o2){
		return ( num != o2.num )||( suit != o2.suit );
	}
};

void show(card arr[], int N){
	for(int i=0; i<N; i++)
		if(i<N-1)
			cout<<arr[i].suit<<arr[i].num<<' '<<flush;
		else
			cout<<arr[i].suit<<arr[i].num<<flush;
	cout<<endl;
}

bool stable(card arr_st[], card arr[], int N){
	for(int i=0; i<N; i++)
		if(arr_st[i] != arr[i]) return false;
	return true;
}

void swap(int& a, int& b){
	int t=a;
	a=b;
	b=t;
}

int BubbleSort(card*, int);
int SelectionSort(card*, int);

int main()
{

	int N;cin>>N;

	card* arr_bub=new card[N];
	for(int i=0; i<N; i++){
		cin>>arr_bub[i].suit;
		cin>>arr_bub[i].num;
	}
	card* arr_sel=new card[N];
	for(int i=0; i<N; i++){
		arr_sel[i].suit=arr_bub[i].suit;
		arr_sel[i].num=arr_bub[i].num;
	}

	int count;
	count=BubbleSort(arr_bub, N);
	show(arr_bub, N);
	cout<<"Stable"<<endl;

	count=SelectionSort(arr_sel, N);
	show(arr_sel, N);
	cout<<( stable(arr_bub, arr_sel, N)? "Stable" : "Not stable")<<endl;

}


int BubbleSort(card* arr, int N)
{

	int counter=0;

	for(int i=0; i<N-1; i++) {

		for(int j=0; j<N-i-1; j++) {
			if( arr[j].num > arr[j + 1].num )
				swap(arr[j], arr[j + 1]);
			counter++;
		}

//		show(arr, N);
	}
	return counter;
}

int SelectionSort(card* arr, int N){

	int mini,counter=0;
	for(int i=0; i<N-1; i++) {
		mini=i;

		for(int j=i+1; j<N; j++) {

			mini= (arr[mini].num > arr[j].num)? j : mini;

		}

		if(mini != i){
			swap( arr[mini], arr[i] );
			counter++;
		}
		//show(arr, N);
	}
	return counter;
}