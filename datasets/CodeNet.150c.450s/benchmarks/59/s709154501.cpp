#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void show(vector<int>& data){
	for(int i=0;i<data.size();i++){
		cout<<data[i];
		if(i==data.size()-1){
			cout<<endl;
		}else{
			cout<<" ";	
		}
	}
}




int main(){
	
	int size;
	cin>>size;
	vector<int> arr;
	arr.resize(size);
	for(int i=0;i<size;i++){
		int num;
		cin>>num;
		arr[i]=num;
	}
	show(arr);
	
	for(int i=1;i<size;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		show(arr);
	}

	
	return 0;
}