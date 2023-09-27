#include <iostream>
using namespace std;
const int VMAX=10000;
void countingSort(int A[],int n,int vmax,int B[]){
   int *C=new int[vmax];
   for(int i=0;i<vmax;i++)C[i]=0;
   for(int i=0;i<n;i++)	C[A[i]]++;
   for(int i=1;i<vmax;i++)C[i]+=C[i-1];
   
   for(int i=n-1;i>-1;--i){
   		B[C[A[i]]--]=A[i];
   } 
   
   delete C;

}
int main(){
	int n;
	cin>>n;
	int *A=new int[n];
	int *B=new int[n+1];
    int vmax=0;
	for(int i=0;i<n;i++){
		cin>>A[i];
		if(vmax<A[i])vmax=A[i];
	}
    
    countingSort(A,n,vmax+1,B);
    

    for(int i=1;i<n+1;i++){
       if(i>1)cout<<" ";
       	cout<<B[i];
    }
    cout<<endl;
    delete A;
    delete B;
    return 0;
}
