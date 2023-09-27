#include <stdio.h>
#include <iostream>
#include <algorithm>

#define MAX 36

struct Card{
	char suit,value;
};

void Bubble_sort(struct Card c[],int num){
	bool flag = true;
	for(int i = 0;flag;i++){
		flag = false;
		for(int j = num - 1;j >= i+1; j--){
			if(c[j].value < c[j-1].value){
				std::swap(c[j],c[j-1]);		
				flag = true;
			}
		}
	}
}

void Selection_sort(struct Card c[],int num){
	for(int i=0;i<num;i++){
		int mini = i;
		for(int j = i;j < num;j++){
			if(c[j].value < c[mini].value){
				mini = j;
			}
		}
		std::swap(c[i],c[mini]);
	}
}

void print(struct Card c[],int num){
	std::cout<<c[0].suit<<c[0].value;
	for(int i=1;i<num;++i){
		std::cout<<" "<<c[i].suit <<c[i].value;
	}
	std::cout<<std::endl;
}

bool isStable(struct Card c1[],struct Card c2[],int num){
	for(int i=0;i<num;++i){
		if(c1[i].suit != c2[i].suit)
			return false;
	}
	return true;
}


int main(){
	
	Card C1[MAX],C2[MAX];

	int n=0;

	std::cin>>n;

	for(int i=0;i<n;++i){
		std::cin >> C1[i].suit >> C1[i].value;
		C2[i] = C1[i];
	}
	Bubble_sort(C1,n);
	Selection_sort(C2,n);
	bool flag = isStable(C1,C2,n);
	
	print(C1,n);
	std::cout<<"Stable"<<std::endl;
	print(C2,n);
	if(flag)
		std::cout<<"Stable"<<std::endl;
	else
		std::cout<<"Not stable"<<std::endl;

	return 0;
}