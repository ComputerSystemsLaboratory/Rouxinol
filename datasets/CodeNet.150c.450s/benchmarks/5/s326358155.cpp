#include<iostream>
using namespace std;

int main(){
   int n,seq[100];

   cin >> n;

   for(int i=0; i<n; i++){
	cin >> seq[i];
   }

   for(int j=n-1; j>=0; j--){
	if(j != n-1){
		cout << " ";
	}

	cout << seq[j];
   }

   cout << endl;

   return 0;
}