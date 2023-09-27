
#include <iostream>
using namespace std;

int main(){
  int n;

  while( true ){
    cin >> n;
    if( !n ) break;

    // a:テつ催δつ湘つャテつづδ古つ静つョテつ静つ氾つ、kテつ古δづつづδ古つ和テつづδーテつ偲δヲテつづδゥ
    // kテつ古δづつづδ古つ和テつづつェnテつづδつづδ暗つづδゥテつづδヲテつづつ、テつづδテつづつェテつ妥つカテつ催δ敕つづつキテつづδゥテつづつゥテつづδーテつ津つイテつづδ療つづδゥ
    // n = k*a+k(k-1)/2 
    int sum = 0,a;
    for( int k=2;true;k++ ){
      a = n-k*(k-1)/2;
      if( a<=0 )  break;
      if( a%k==0 ){
	sum++;
	//	cout << k << ",st="<<a/k<<"\t";
      }
    }
    cout << sum << endl;
  }

  return 0;
}