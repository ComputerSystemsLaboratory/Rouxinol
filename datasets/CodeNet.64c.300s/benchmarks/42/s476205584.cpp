#include <iostream>

using namespace std;

int main(){
  int n,m,x,y;
  while(true){
    cin >> n;
    if (n == 0)
      break;
    bool jew[21][21];
    for(int i=0;i<441;i++)
      jew[i%21][i/21] = true;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      jew[x][y] = false;
    }
    cin >> m;
    char dir[m];
    int len[m];
    for(int i=0;i<m;i++)
      cin >> dir[i] >> len[i];
    x=10;
    y=10;
    int correct = 0;
    for(int i=0;i<m;i++){
      while(len[i]>0){
	switch(dir[i]){
	case 'N':
	  y++;
	  break;
	case 'E':
	  x++;
	  break;
	case 'S':
	  y--;
	  break;
	case 'W':
	  x--;
	  break;
	}
	if (!jew[x][y]){
	  jew[x][y] = true;
	  n--;
	}
	len[i]--;
      }
    }
    if (n)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
   
  return 0;
}