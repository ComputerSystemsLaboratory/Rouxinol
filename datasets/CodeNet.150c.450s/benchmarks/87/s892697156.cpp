#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>

using namespace std;

int H,c,ct=0,tmpct=0;
vector<int> b;
int ren=0;
void solve(){
  bool roop = true;
  while(roop){
  for(int i=0;i<H*6-2;i++){
    if(b[i] == b[i+1] && b[i+1] == b[i+2] && b[i] != 0){
      if(ren == 0){tmpct += b[i]*3;ren++;
      }else{
	tmpct += b[i];
	ren++;
      }
    }else if(ren>0){
      for(int j=i-ren;j<i+2;j++)
	b[j]=0;
      ren = 0;
    }
  }




  for(int i=0;i<5;i++){
    c=0;
    for(int j=0;j<H;j++)
	if(b[(H-j-1)*6 + i]==0)c++;
	else if(c>0){
	  b[(H-j+c-1)*6 + i] = b[(H-j-1)*6 + i];
	  b[(H-j-1)*6 + i] = 0;
    }
  }

  /*      for(int i=0;i<H;i++){
      for(int j=0;j<6;j++){
      cout << b[(i)*6 + j] << " ";
      }
      cout << "\n";
    }
      cout << "tmpct" << tmpct << "\n";
  */      
    if(tmpct > 0){ct += tmpct;
      tmpct = 0;}
    else break;


  
  }
}



int main(){
  while(true){
    cin >> H;
    if(H == 0)break;
    b.resize(H*6);
    for(int i=0;i<H;i++){
    cin >> b[i*6] >> b[i*6+1] >> b[i*6+2] >> b[i*6+3] >> b[i*6+4];
    b[i*6+5]=-1;
    }
    solve();
    b.clear();
    cout << ct << endl;
    ct = 0;
  }

  return 0;
}