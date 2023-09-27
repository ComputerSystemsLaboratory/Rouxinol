/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: baisganon
 *
 * Created on 2017/06/04, 19:09
 */

#include<iostream>

using namespace std;

int count=0;

void merge(int A[],int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1+1],R[n2+1];
    for(int i=0;i<n1;i++){
        L[i]=A[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=A[mid+i];
    }
    L[n1]=2000000000;
    R[n2]=2000000000;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i]<=R[j]){
            A[k]=L[i++];
        }else{
            A[k]=R[j++];
        }
        count++;
    }
    return;
}

void mergeSort(int A[],int left,int right){
    if(left+1>=right)return;
    int mid = (left+right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
}

int main(){
	int size;
	cin >> size;
	int S[size];
	for(int i=0;i<size;i++){
		cin >> S[i];
	}

	mergeSort(S,0,size);

	for(int i=0;i<size;i++){
		cout<<S[i]<<((i==size-1)?"":" ");
	}
	cout << endl << count << endl;
        int xxx;
        cin >> xxx;
	return 0; 
}