#include<iostream>
using namespace std;

int main(){
   int n,i,j;
   cin >> n;
   int seq[n];

   for(i=0;i<n;i++){
	cin >> seq[i];
   }

   for(j=n-1;j>0;j--){
	cout << seq[j] << " ";
   }
   cout << seq[0] << endl;

   // cout << endl;

   return 0;
}