#include<iostream>
using namespace std;

int main(){

  string s;
  int sum;
  string prev;
  int n;


  while(cin >> n){
    if(n==0){break;}
    sum=0;

    cin >> s;
    prev = s;

    for(int i=1; i<n; i++){
      cin >> s;
      if((prev=="lu"&&s=="ru") || (prev=="ru"&&s=="lu") || 
	 (prev=="ld"&&s=="rd") || (prev=="rd"&&s=="ld")){
	sum++;
      }
      prev = s;
    }

    cout << sum << endl;

  }

  return 0;
}