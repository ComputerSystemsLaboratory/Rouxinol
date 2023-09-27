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
#include<vector>
#include<algorithm>
using namespace std;

struct card{
    int num;
    char name;
    bool operator<(const card& right)const{
        return num<right.num;
    }
    bool operator<=(const card& right)const{
        return num<=right.num;
    }bool operator==(const card& right)const{
        return num==right.num&&name==right.name;
    }
};

int partition(card A[],int p,int r){
	card x = A[r];
	int i = p-1;
	for(int j=p;j<r;j++){
		if(A[j]<=x){
			i++;
			card tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	card tmp = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp;
	return i+1;
}

void quicksort(card A[],int p,int r){
    if(p>=r)return;
    int q=partition(A,p,r);
    quicksort(A,p,q-1);
    quicksort(A,q+1,r);
}

int main(){
	int size;
	cin >> size;
	card S[size];
        vector<card> V;
	for(int i=0;i<size;i++){
		cin >> S[i].name >> S[i].num;
                V.push_back(S[i]);
	}

	quicksort(S,0,size-1);
        stable_sort(V.begin(),V.end());

        vector<card>::iterator c=V.begin();
        bool isStable=true;
        for(int i=0;i<size;i++){
            if(!(*c==S[i]))isStable=false;
            c++;
        }
        
        cout << (isStable==true?"Stable":"Not stable") <<endl;
	for(int i=0;i<size;i++){
            cout << S[i].name << " " << S[i].num << endl; 
            //if(i!=size-1)cout<<" ";
	}
        int xxx;
        cin >> xxx;
	return 0; 
}