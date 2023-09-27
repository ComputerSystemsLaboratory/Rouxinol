#include<iostream>
using namespace std;

int B[11]={0};
int C[11]={0};

bool DFS(int *a,int i=0,int b=1,int c=1)
{
	bool judge=true;

	if(i==10)
		return judge;

	judge=false;

	if(B[b-1]<a[i]){
		B[b]=a[i];
		judge=DFS(a,i+1,b+1,c);
		
	}
	if(C[c-1]<a[i]){
		C[c]=a[i];
		judge=DFS(a,i+1,b,c+1);
		
	}

	return judge;
}        

int main()
{
        int N;
	int i=0;
        cin>>N;

	while(i<N){
          int A[10];
          for(int i=0;i<10;i++){
           cin>>A[i];
          }

          if(DFS(A)==true){
           cout<<"YES"<<endl;
          }
          else{
           cout<<"NO"<<endl;
          }

          i++;
        }
                
        return 0;
} 