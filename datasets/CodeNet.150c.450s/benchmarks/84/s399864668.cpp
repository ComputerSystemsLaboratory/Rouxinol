#include <cstdio>
#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n; 
void Print(int *arr, int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}


int Merge(int *arr, int lft, int mid, int rht)
{
	
	int inv_cnt=0;
	int n1= mid-lft+1;
	int n2= rht-mid; ///rht-(mid+1)+1
	int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i]= arr[lft+i];
	}


	for(int i=0; i<n2; i++){

		R[i]= arr[mid+i+1];
	}


	int lidx= 0;
	int ridx= 0;
	int k= lft;
	///***Previous Bug: Ekta while use ; tahole lidx or ridx might cross n1 (or n2)
	///*vital : 3ta while hobe ;
	while(lidx<n1 && ridx<n2){
		if(L[lidx]<= R[ridx]){
			arr[k++]= L[lidx++];
			//cout<<"arr["<<k<<"]="<<arr[k]<<endl;

		}
		else{
			//cout<<"Else :arr["<<k<<"]="<<arr[k]<<endl;
			inv_cnt+= (n1-lidx);
			
			//cout<<"\n\n##############lft="<<lft<<" rht="<<rht<<"  mid-k+1="<<mid-k+1<<" inv_cnt="<<inv_cnt<<endl; 
			arr[k++]= R[ridx++];
			
			
			//ridx++;
		}
	}

    while(lidx<n1){
        arr[k++]= L[lidx++];

    }
    ///**ei 2tar modhdeh ekta while i kebol cholbe
    while(ridx<n2){
        arr[k++] = R[ridx++];
    }
    //cout<<"\nMerge:inv_cnt="<<inv_cnt<<endl; 
	return inv_cnt;



}
int mergeSort(int *arr, int lft, int rht)
{
	int inversion_cnt=0; 
	
	if(lft<rht){

		int mid= (lft+rht)/2;
		inversion_cnt+= mergeSort(arr, lft, mid);
		inversion_cnt+= mergeSort(arr, mid+1, rht);
		inversion_cnt+= Merge(arr, lft, mid, rht);
		
	}
	
	
	return inversion_cnt;
}



int32_t main()
{
	
    int choice;
    int *arr;
    bool flag= true;
            //printf("Number of elements: ");
            scanf("%d", &n);
            arr= new int[n];

            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
    int inv= mergeSort(arr, 0, n-1); 
    //cout<<"Inversion Cnt="<<inv<<endl;
    //Print(arr, n);
	cout<<inv<<endl; 

    return 0;
}



