#include <iostream>
#define N 51
#define M 100001
using namespace std;

int main()
{
  while(true){
    int n,m;
    char mae[N],ato[N];
    cin >> n;
    if(n<=0) break;
    
    for(int i=0;i<n;i++){
      cin >> mae[i] >> ato[i];
    }
    cin >> m;
    
    for(int i=0;i<m;i++){
      char ch;
      cin >> ch;
      
      for(int j=0;j<n;j++){
	if(ch==mae[j]){
	  ch=ato[j];
	  break;
	}
      }
      cout << ch;
    }
    cout << endl;
  }
  
  return 0;
}