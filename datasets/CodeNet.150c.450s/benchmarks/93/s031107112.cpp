#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Card{
	char mark;
	int num;
};

Card Cards1[500000];
Card Cards2[500000];


int partition(int p,int r){
	int x=Cards1[r].num;
	int i=p-1;
	for(int j=p;j<r;j++){
		if(Cards1[j].num<=x){
			i++;
			swap(Cards1[i],Cards1[j]);
		}
	}
	swap(Cards1[i+1],Cards1[r]);
	return i+1;
}

void quickSort(int p, int r){
	if(p<r){
		int q=partition(p,r);
		quickSort(p,q-1);
		quickSort(q+1,r);
	}
}

void merge(int left,int mid,int right){
	int n1=mid-left;
	int n2=right-mid;
	vector<Card> L;
	vector<Card> R;
	int i,j;
	for(i=0;i<n1;i++){
		L.push_back(Cards2[left+i]);
	}
	for(i=0;i<n2;i++){
		R.push_back(Cards2[mid+i]);
	}
	Card s;
	s.num=1<<30;
	L.push_back(s);
	R.push_back(s);
	i=j=0;
	for(int k=left;k<right;k++){
		if(L[i].num<=R[j].num){
			Cards2[k]=L[i++];
		}else{
			Cards2[k]=R[j++];
		}
	}
}

void mergeSort(int left, int right){
	if(left+1<right){
		int mid=left+(right-left)/2;
		mergeSort(left,mid);
		mergeSort(mid,right);
		merge(left,mid,right);
	}
}

bool isStable(int n){
	for(int i=0;i<n;i++){
		Card c1=Cards1[i];
		Card c2=Cards2[i];
		if(c1.mark!=c2.mark||c1.num!=c2.num){
			return false;
		}
	}
	return true;
}

int main(){
	int n,num;
	char mark;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> mark;
		cin >> num;
		Cards1[i].mark=Cards2[i].mark=mark;
		Cards1[i].num=Cards2[i].num=num;
	}
	
	quickSort(0,n-1);
	mergeSort(0,n);
	
	if(isStable(n)){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	
	for(int i=0;i<n;i++){
		Card c=Cards1[i];
		cout << c.mark << " " << c.num << endl;
	}	
	return 0;
}

