#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int a;
void up(int a){
  vec.push_back(a);
  int i=vec.size()-1;
  int flag=1;
  while(flag){
    flag=0;
    if(vec[i]>vec[(i-1)/2]){
      swap(vec[i],vec[(i-1)/2]);
      i=(i-1)/2;
      flag=1;
    }
  }
}

void down(){
  vec[0]=vec[vec.size()-1];
  vec.erase(vec.begin()+vec.size()-1);
  int flag=1;
  int i=0;
  while(flag){
    flag=0;
    if(i*2+1>=vec.size()) break;
    else if(i*2+1==vec.size()-1){
      if(vec[i]<vec[i*2+1]){
	swap(vec[i],vec[i*2+1]);
	i=i*2+1;
	flag=1;
      }
    }
    else if(vec[i]<max(vec[i*2+1],vec[i*2+2])){
	  if(vec[i*2+1]>vec[i*2+2]){
	    swap(vec[i],vec[i*2+1]);
	    i=i*2+1;
	    flag=1;
	  }
	  else{
	    swap(vec[i],vec[i*2+2]);
	    i=i*2+2;
	    flag=1;
	  }
    }
  }
}
int main(){
  string str;
  
  while(1){
    cin>>str;
    if(str=="end")break;

    else if(str=="insert"){
      cin>>a;
      up(a);
    }
    
    else if(str=="extract"){
      cout<<vec[0]<<endl;
      down();
    }

  }

  return 0;
}
    

