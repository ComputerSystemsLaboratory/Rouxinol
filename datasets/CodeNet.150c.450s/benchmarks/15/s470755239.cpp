/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: baisganon
 *
 * Created on 2017/06/04, 20:10
 */

#include<iostream>
using namespace std;

int LinearSearch(int x,int s[],int n){
	s[n] = x;
	for(int i=0;;i++){
		if(s[i]==x){
			if(i<n){
				return i;
			}else{
				return -1;
			}
		}
	}
}

int main(){
	int data1;
	cin >> data1;
	//int* list1 = new int[data1+1];
	int list1[data1+1];
	for(int i=0;i<data1;i++){
		cin >> list1[i];
	}

	int data2;
	cin >> data2;
	//int* list2 = new int[data2];
	int list2[data2];
	for(int i=0;i<data2;i++){
		cin >> list2[i];
	}

	int count=0;
	for(int i=0;i<data2;i++){
		if(LinearSearch(list2[i],list1,data1)!=-1)
			count++;
	}
	
	cout << count << endl;
	//delete[] list1,list2;
	return 0; 
}