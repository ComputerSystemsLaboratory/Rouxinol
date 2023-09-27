#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
   string W,T;
   int i=0;

   cin >> W;
   for(int j=0; j<W.size(); j++){
	W[j] = tolower(W[j]);
   }

   while(cin >> T,T != "END_OF_TEXT"){
	for(int k=0; k<T.size(); k++){
		T[k] = tolower(T[k]);
	}
	if(T == W) i++;
   }
	cout << i << endl;
   return 0;
}