#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

int h;
int map[11][6];

int main(){
  int num = 1;

  while(cin>>h){
    if(h == 0)
      break;
    // cout<<"--------------------"<<num<<"-----------------------"<<endl;
    //num++;
    memset(map,0,sizeof(map));
    for(int i = 10-h+1;i<11;i++){
      for(int j = 0;j<5;j++){
	cin>>map[i][j];
      }
    }

    int point = 0;
    bool update = true;
    /*
    for(int i = 0;i<10;i++){
      for(int j = 0;j<5;j++){
	cout<<map[i][j]<<"\t";
      }
      cout<<endl;
    }
    */
    while(update){
      update = false;
      for(int i = 10-h+1;i <= 10;i++){
	int tmp = 1;
	for(int j = 1;j<6;j++){
	  if(j != 5 && map[i][j] == 0)
	    continue;
	  if(map[i][j] == map[i][j-1]){
	    tmp++;
	  }else if(tmp >= 3){
	    point += tmp * map[i][j-1];

	    update = true;
	    for(int k = j-tmp;k<j;k++){
	      for(int l = i;l >= 0;l--){
		map[l][k] = map[l-1][k];
	      }
	    }
	    tmp = 0;
	  }else{
	    tmp = 1;
	  }

	}
      }
      /*
      cout<<"--------------------------"<<endl;

    for(int i = 0;i<10;i++){
      for(int j = 0;j<5;j++){
	cout<<map[i][j]<<"\t";
      }
      cout<<endl;
      }

      */
    }
    cout<<point<<endl;
  }
    
	
  return 0;
}