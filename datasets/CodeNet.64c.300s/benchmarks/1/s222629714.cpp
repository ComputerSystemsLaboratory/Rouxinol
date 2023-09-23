/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: baisganon
 *
 * Created on 2017/06/04, 17:44
 */

#include<iostream>
using namespace std;

int partition(int A[],int p,int r){
	int x = A[r];
	int i = p-1;
	for(int j=p;j<r;j++){
		if(A[j]<=x){
			i++;
			int tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	int tmp = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp;
	return i+1;
}

int main(){
	int size;
	cin >> size;
	int S[size];
	for(int i=0;i<size;i++){
		cin >> S[i];
	}

	int q = partition(S,0,size-1);

	for(int i=0;i<size;i++){
		if(i==q){
			cout<<"["<<S[i]<<"]";
		}else{
			cout<<S[i];
		}
                if(i!=size-1)cout<<" ";
	}
	cout <<endl;
	return 0; 
}