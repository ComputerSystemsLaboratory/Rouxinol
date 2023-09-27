#include<iostream>
#include<climits>
using namespace std;



struct cards{
	char suit;
	int num;
};

bool isStable( cards arr[], cards arr_stable[], size_t arr_s )
{
	for( size_t i=0; i<arr_s; i++ ){
		if( arr[i].suit != arr_stable[i].suit ){
			return false;
		}
	}
	return true;
}

void show( cards arr[], size_t size )
{
	for( size_t i=0; i<size; i++ ){
		cout<<arr[i].suit<<' '<<arr[i].num<<endl;
	}
}

void swap( cards &a, cards &b )
{
	cards t=a;
	a=b;
	b=t;
}

size_t partition(cards arr[], size_t arr_s, size_t left, size_t right)
{
	if( right >= arr_s ){
		cout<<"Error"<<endl;
		return -1;
	}


	size_t below=left-1;

	for( size_t above=left; above<right; above++ ){
		if( arr[above].num <= arr[right].num ){
			++below;
			swap( arr[above], arr[below] );
		}
	}
	swap( arr[right], arr[below+1] ); 
	return below+1; 
}

void merge( cards arr[], size_t arr_s, size_t lft, size_t md, size_t rgt )
{
	size_t left_s=md-lft+1, right_s=rgt-md+1;
	cards *left=new cards[left_s], *right=new cards[right_s];

	for( size_t i=0; i<left_s-1; i++ ){
		left[i]=arr[lft+i];
	}
	left[left_s-1].num=INT_MAX;
	for( size_t i=0; i<right_s-1; i++ ){
		right[i]=arr[md+i];
	}
	right[right_s-1].num=INT_MAX; 

	for( size_t i=0, left_i=0, right_i=0; i<left_s+right_s-2; i++ ){
		if( left[left_i].num <= right[right_i].num ){
			arr[lft +i]=left[left_i];
			++left_i;
		}else{
			arr[lft +i]=right[right_i];
			++right_i;
		}
	}

	delete[] right;delete[] left;
}

void mergeSort( cards arr[],  size_t arr_s,  size_t lft,  size_t rgt ) 
{
	size_t md=(lft + rgt)/2;
	if( rgt - lft >=2 ){ 

		mergeSort(arr, arr_s, lft, md);  
		mergeSort(arr, arr_s, md, rgt);
		merge(arr, arr_s, lft, md, rgt); 
	
	}
}




void quickSort( cards arr[], size_t arr_s, size_t left, size_t right )
{
	if( left < right ){
		size_t pivot_i=partition( arr, arr_s, left, right );
		quickSort( arr, arr_s, left, pivot_i-1 );
		quickSort( arr, arr_s, pivot_i+1, right );
	}
}
		



int main()
{
	size_t arr_s;
	cin>>arr_s;
	cards *arr=new cards[arr_s], *arr_stable=new cards[arr_s];
	for( size_t i=0; i<arr_s; i++ ){
		cin>>arr[i].suit;
		cin>>arr[i].num;
		arr_stable[i].suit=arr[i].suit;
		arr_stable[i].num=arr[i].num;
	}

	quickSort(arr, arr_s, 0, arr_s-1);
	mergeSort(arr_stable, arr_s, 0, arr_s);
	cout<<( isStable(arr, arr_stable, arr_s) ? "Stable":"Not stable" )<<endl;
	show(arr, arr_s);
}