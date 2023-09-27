#include<iostream>
using namespace std;

int main(){
  int i, j, m, n;
  char c1[100000], c2[100000], s1[100000], s2[100000];

  while(1){
    cin >> m;
    if (m == 0) break;
    for (i=0; i<m; i++){
      cin >> c1[i] >> c2[i];
    }

    cin >> n;
    for (i=0; i<n; i++){
      cin >> s1[i];
      for (j=0; j<m; j++){
	if (s1[i] == c1[j]){
	  s2[i]=c2[j];
	  break;
	}
	s2[i]=s1[i];
      }
    }

    for (i=0; i<n; i++){
      cout << s2[i];
    }
    cout << endl;
  }

  return 0;
}