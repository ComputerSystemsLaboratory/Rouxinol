#include <bits/stdc++.h>

using namespace std;

int main()
{
  int h, w, ah, aw;
  while(cin >> h >> w, h || w){
    ah = aw = 1000;
    for(int i = 1; i <= 150; i++){
      for(int j = i+1; j <= 150; j++){
	if(i*i + j*j > h*h + w*w || i*i + j*j == h*h + w*w && i > h){
	  if(i*i + j*j < ah*ah + aw*aw || i*i + j*j == ah*ah + aw*aw && i < ah) ah = i, aw = j;	  
	}
      }
    }
    cout << ah << " " << aw << endl;
  }
  return 0;
}