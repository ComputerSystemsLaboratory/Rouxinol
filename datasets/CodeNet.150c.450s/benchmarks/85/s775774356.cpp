#include <iostream>
#include <climits>
using namespace std;

long int M[101][101];
long int a[1000];
int n;
void solve(){
  for(int i=0;i<=n;i++){
     M[i][i]=0;
  }
    
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
	  int j=i+l-1;
	  M[i][j]=INT_MAX;
       	  for(int k=i;k<j;k++){
	        long int tmp = M[i][k]+M[k+1][j]+a[i-1]*a[k]*a[j];
		M[i][j] = min(M[i][j],tmp);	
	    }
	}
    }
}

int main(){ 
   cin>>n;
   int p, q;
   for(int i=0; i<n; i++){
    cin>>p>>q;
    if(i == 0){
      a[i] = p;
      a[i+1] = q;
    }else{
      a[i+1] = q;
    }
  }

//   for(int i=0;i<2*n;i++)
//	cout<<a[i]<<endl;
   solve();
// for(int i=0;i<=n;i++){
//	for(int j=0;j<=n;j++){
//	    cout<<"("<<i<<","<<j<<")"<<M[i][j]<<" ";
//	}
//	cout<<endl;
 //  }
   cout<<M[1][n]<<endl;
   return 0;
} 