#include<iostream>
using namespace std;
struct card{
	char c;
	int in;
	int number;
};
int partition(card A[], int p, int r){
	int memo=A[r].in;
	int i=p-1;
	for(int j=p; j<r; j++){
		int k=A[j].in;
		if(k<=memo){
			i++;
			card s=A[i];
			A[i]=A[j];
			A[j]=s;
		}
	}
	card m=A[i+1];
	A[i+1]=A[r];
	A[r]=m;
	return i+1;
}
void quickSort(card A[], int p, int r){
	if(p<r){
		int q=partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}
int main(){
	bool flag=true;
	int n,i;
	cin>>n;
	card c[n];
	for(i=0; i<n; i++){
		cin>>c[i].c>>c[i].in;
		c[i].number=i;
	}
	quickSort(c, 0, n-1);
	for(i=0; i<n-1; i++){
		if(c[i].in==c[i+1].in && c[i].number>c[i+1].number){
			flag=false;
			break;
		}
	}
	if(flag==true)
		cout<<"Stable"<<endl;
	else
		cout<<"Not stable"<<endl;
	for(i=0; i<n; i++)
		cout<<c[i].c<<" "<<c[i].in<<endl;
}
