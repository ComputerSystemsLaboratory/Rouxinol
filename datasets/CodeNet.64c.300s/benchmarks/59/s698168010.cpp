#include<iostream>
using namespace std;

void MakePrimeArray(bool A[],int n){
	A[0] = A[1] = false;
	for(int i=2;i<n;i++){
		A[i] = true;
	}

	for(int	i=2;i*i<n;i++){
		if(A[i]){
			for(int j=i*i;j<n;j+=i){
				A[j] = false;
			}
		}
	}
}



int main(){
  /*
  long int n=10000000;

  bool *primearray = new bool[n];

	MakePrimeArray(primearray,n);
*/
	int num;
  cin >> num;
  int input=0;
  int solve=0;
	for(int i=0;i<num;i++){
    cin >> input;
    /*if(primearray[input]){
      solve++;
    }*/
    if(input!=1){
      for(int j=2;j*j<=input;j++){
        if(input%j==0){
          solve--;
          break;
        }
      }
      solve++;
    }
  }
	cout << solve << endl;
	return 0;
}