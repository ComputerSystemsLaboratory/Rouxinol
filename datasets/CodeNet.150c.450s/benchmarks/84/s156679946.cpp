#include<iostream>
#include<climits>
using namespace std;

void show( int arr[], unsigned int size )
{
	cout<<arr[0]<<flush;
	for( unsigned int i=1; i<size; i++ ){
		cout<<' '<<arr[i]<<flush;
	}
	cout<<endl;
}
long long merge( int arr[], unsigned int arr_s, unsigned int lft, unsigned int md, unsigned int rgt )
{
//??????????????????????????????lft??\???md?????????md??\???rgt???????????????
	long long cntInv=0;

//?????????????????????????????????( ???????????????????????????????????????????????????????????? )
	int left_s=md-lft+1, right_s=rgt-md+1, *left=new int[left_s], *right=new int[right_s];
	for( int i=0; i<left_s-1; i++ ){
		left[i]=arr[lft+i];
	}
	left[left_s-1]=INT_MAX;
	for( int i=0; i<right_s-1; i++ ){
		right[i]=arr[md+i];
	}
	right[right_s-1]=INT_MAX; //???????????????????????±???????????¨???????????????????????????


//??????????????????????????????????????±???,??????
	for( int i=0, left_i=0, right_i=0; i<left_s+right_s-2; i++ ){
		if( left[left_i] <= right[right_i] ){ //?????????????????\?????´?????????????????????????????????????????????????°?????????????????????????
			arr[lft+i]=left[left_i];
			++left_i;
		}else{
			arr[lft+i]=right[right_i];
			++right_i;

			if( left[left_i] != INT_MAX ){
				cntInv+= left_s - left_i -1;
			}
		}
	}

	delete[] right;delete[] left;
	return cntInv;

	/*
	3 5 2 1 4
	3 - 2, 1
	5 - 2, 1, 4
	2 - 1
	1 - ???
	4 - ???
	*/

}

long long mergeSort( int arr[], unsigned int arr_s, unsigned int lft, unsigned int rgt ) 
{
	static long long cntInv=0;
	unsigned int md=(lft + rgt)/2;
	if( rgt - lft >=2 ){ //???????????¶???????????????????????\??????????????¨???! ??? lft????????????????´????????¬???????????????????  ?????????????????????????????????????????????merge????????°??????????????????!

//??????????????????mergeSort???????????¨???????????¨?????????????????????????????????
		mergeSort(arr, arr_s, lft, md);  
		mergeSort(arr, arr_s, md, rgt);
//??????(????????????)! ?????§?????????????????????????????????????????°?????????????????????????????????????????????????????§????????????
		cntInv+= merge(arr, arr_s, lft, md, rgt); 
	
	}
	return cntInv;
}

int main()
{
	int arr_s;
	cin>>arr_s;
	int *arr=new int[arr_s];
	for( int i=0; i<arr_s; i++ ){
		cin>>arr[i];
	}

	long long cntInv=mergeSort(arr, arr_s, 0, arr_s);
//	show(arr, arr_s);
	cout<<cntInv<<endl;

	delete[] arr;
}