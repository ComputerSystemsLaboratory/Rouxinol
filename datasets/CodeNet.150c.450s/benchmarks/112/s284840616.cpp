#include <iostream>
using namespace std;

int main (void)
{
  int n, m;
  int i, j;
  char a[100], b[100];
  char c;

  while(1){

    cin >> n ;
    if (n == 0){ break; }
    for(i = 0; i < n; i++){
      cin >> a[i] >> b[i];
    }
    a[i] = '\0';
    b[i] = '\0';

    cin >> m;
    
    for(i = 0; i < m; i++){
      
      cin >> c;
      for(j = 0; a[j] != '\0'; j++){
	if(c == a[j]){
	  c = b[j];
	  break ;
	}
	
      }
      cout << c;
    }

	cout << endl;
    
  }
  
  return 0;
}
  