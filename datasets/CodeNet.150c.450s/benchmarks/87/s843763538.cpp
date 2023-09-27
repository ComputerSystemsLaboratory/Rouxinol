#include<iostream>
#include<vector>
using namespace std;

class game{
private:
  vector<vector<int> > map;
  int score;
  int size;
public:
  game(int s){
    size=s;
    map.resize(size);
    for(int i=0;i<size;i++){
      map[i].resize(5);
    }
    score=0;
  }

  void setnum(int num,int i,int j){
    map[i][j]=num;
  }

  void deleteline(){
    for(int i=0;i<size;i++){
      int c=1;
      int index = 0;
      int end = 0;
      int delnum=0;
      for(int j=0;j<4;j++){
	if(map[i][j]==map[i][j+1]) c++;
	else c=1;
	if(c>=3){
	  delnum=map[i][j];
	  index = j - c + 1;
	  end = j;
	}
      }
      for(int j=index;j<=end+1;j++){
	if(map[i][j]==delnum){map[i][j]=0;score+=delnum;}
      }
    }
  }

  void falldown(){
    for(int c=0;c<=size;c++){
      for(int i=size-2;i>=0;i--){
	for(int j=0;j<5;j++){
	  if(map[i+1][j]==0){ map[i+1][j]=map[i][j]; map[i][j]=0;} 
	}
      }
    }
  }

  int calc(){
    int bf = -1;
    while(bf != score){
      bf = score;
      deleteline();
      falldown();
      //        show();
    }
    return score;
  }
  /*
  void show(){
    cout<<endl;
    for(int i=0;i<size;i++){
      for(int j=0;j<5;j++){
	cout<<map[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    }*/
  

};

int main(){
  int t=1;
  while(cin>>t){
    if(t == 0) break;
    game g(t);
    for(int i=0;i<t;i++){
      for(int j=0;j<5;j++){
	int num;
	cin>>num;
	g.setnum(num,i,j);
      }
    }
    cout<<g.calc()<<endl;

  }
  return 0;
}