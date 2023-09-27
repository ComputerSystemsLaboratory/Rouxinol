/**************
*	??????????????????
*************/

#include <iostream>
#include <vector>	//??£?¨?
#include <climits>	//??¢??°
using namespace std;

//??\???
int merge(vector<int> &A, int left, int mid, int right)//??????????????°
{	
	int n1 = mid   - left;
	int n2 = right - mid;
	int merg_cnt = 0;
	//??????
	vector<int> L;
	L.resize(n1+1);
	vector<int> R;
	R.resize(n2+1);
	
	for(int i = 0; i< n1; i++){
		L[i] = A[left + i];
	}
	for(int i = 0; i< n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	
	int i = 0;
	int j = 0;
	
	for(int k = left; k < right; k++){
		if( L[i] <= R[j] ){
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
		}
		merg_cnt++;
	}
	return merg_cnt;
}
//--------------------------------------------
int mergeSort(vector<int> &A, int left, int right)//?????§
{
	int merg_cnt = 0;
	if((left+1) < right){
		int mid = (left + right)/2;
		merg_cnt += mergeSort(A, left, mid );
		merg_cnt += mergeSort(A, mid, right );
		merg_cnt += merge(A, left, mid, right );
	}
	return merg_cnt;
}
//--------------------------------------------
int main()
{
	int n;
	cin >> n;
	
	vector<int> S;
	S.resize(n);
	
	for(int i =0; i < n ;  i++){ 
		cin >> S[i] ;
	}
	
	int merg_cnt = 0;
	//????????????????????¢??°
	merg_cnt = mergeSort(S, 0, n);
	
	for(int i =0; i<n ; i++){
		cout << S[i] ;
		if(i != (n-1)){
			cout << " ";
		}
	}
	cout << endl << merg_cnt << endl;
	
	return 0;
}
//--------------------------------------------