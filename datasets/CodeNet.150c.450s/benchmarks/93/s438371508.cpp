#include<iostream>
#include<string>
#include<utility>
#include<cstdio>
 
using namespace std;
 
typedef struct{
    char symbol;
    int number;
}Card;
 
const int Sentinel = 200000000;
 
int partition(int Card[],int p,int r);
void quicksort(Card A[],int p,int r);
void merge(Card A[],int left,int mid,int right);
void mergeSort(Card A[],int left,int right);
 
int main(){
    int n; cin>>n;
    Card *card1,*card2;
	card1 = new Card[n]; card2 = new Card[n];
 
    for(int i=0;i<n;i++){
        //cin>>card1[i].symbol>>card1[i].number;
		cin>>card1[i].symbol;
		scanf("%d",&card1[i].number);
        card2[i] = card1[i];
    }
 
    quicksort(card1,0,n-1);
    mergeSort(card2,0,n);
 
    int judge = 0;
    for(int i=0;i<n;i++){
        if(card1[i].symbol!=card2[i].symbol){
            cout<<"Not stable"<<endl;
            judge = 1;
            break;
        }
    }
 
    if(judge==0) cout<<"Stable"<<endl;
 
    for(int i=0;i<n;i++){
		printf("%c %d\n",card1[i].symbol,card1[i].number);
        //cout<<card1[i].symbol<<" "<<card1[i].number<<endl;
    }

	delete [] card1; delete [] card2;
 
    cin.get();
    cin.get();
}

int partition(Card A[],int p,int r){
	int x = A[r].number;
	int i = p-1;
	for(int j=p;j<r;j++){
		if(x>=A[j].number){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[r],A[i+1]);
	return i+1;
}
 
void quicksort(Card A[],int p,int r){
    if(p<r){
        int q = partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}
 
void merge(Card A[],int left,int mid,int right){
    int n1 = mid-left, n2 = right-mid;
    Card *L,*R;
    L = new Card[n1+1]; R = new Card[n2+1];
    for(int i=0;i<n1;i++) L[i] = A[left+i];
    for(int i=0;i<n2;i++) R[i] = A[mid+i];
    L[n1].number = R[n2].number = Sentinel;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(L[i].number<=R[j].number){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
        }
    }
    delete [] L; delete [] R;
}
 
void mergeSort(Card A[],int left,int right){
    if(left+1<right){
        int mid = (left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}