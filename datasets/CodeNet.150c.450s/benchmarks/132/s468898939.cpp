#include <iostream>

using namespace std;

int main(){
  while(true){
    int n,p,i,wan;
    cin >> n >> p;
    if (n==0&&p==0)
      break;
    wan = p;
    int people[n];
    for(int j=0;j<n;j++)
      people[j] = 0;
    for(i=0;;i++){
      if (wan > 0){
	people[i%n]++;
	wan--;
	if (people[i%n] == p)
	  break;
      }
      else{
	wan += people[i%n];
	people[i%n] = 0;
      }
    }
    cout << i%n << endl;
  }
  return 0;
}