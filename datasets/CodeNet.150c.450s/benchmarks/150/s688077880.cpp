#include <iostream>
#include <vector>

using namespace std;



int main(){
  vector<int> v(2000000,0);
  vector<int> v1;

  int n,num;
  cin >>n;

  for(int i=0;i<n;i++){
    cin >>num;

    v[num]=v[num]+1;
    
    
  }
  int cnt = 0;



  for(  vector<int>::iterator p=v.begin();p!=v.end();p++){
    if(*p!=0){
      for(int i=0;i<*p;i++){
	v1.push_back(cnt);
	}
    }
    

    cnt++;
}


  for(  vector<int>::iterator p=v1.begin();p!=v1.end();p++){
    if(p!=v1.end()-1){cout <<*p<<" ";
     
    }else{
      cout <<*p<<endl;
    }
  }


  
  return 0;
}

