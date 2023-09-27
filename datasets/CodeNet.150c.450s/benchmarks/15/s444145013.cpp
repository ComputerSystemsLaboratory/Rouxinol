#include<iostream> 
using namespace std;

int C = 0;

int LinearSearch(int x, int S[], int n){
 for(int i=0; i<n; i++){
  if(S[i]==x){ 
    C++;
    return i;
  }
 }
 return -1;
}

int main(){
 
 int n;
 cin >> n;

 int S[n];
 for(int i=0; i<n; i++){
  cin >> S[i];
 }

 int q;
 cin >> q;

 int T[q];
 for(int i=0; i<q; i++){
  cin >> T[i];
 }

 for(int i=0; i<q; i++){
  LinearSearch(T[i], S, n);
 }

 cout << C << endl;

 return 0;
}