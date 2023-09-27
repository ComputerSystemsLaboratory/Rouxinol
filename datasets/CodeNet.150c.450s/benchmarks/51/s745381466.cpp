#include <iostream>
using namespace std;

int main(){
   bool S[31]={false};
   int n;
   
   for(int i=0; i<28; i++){
      cin >> n;
      S[n]=true;
   }
   for(int i=1; i<31; i++){
      if(S[i]==false) cout << i << endl;
   }
}
