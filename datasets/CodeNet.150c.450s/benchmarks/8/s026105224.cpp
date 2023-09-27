//topic9c
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int tarous=0,hanakos=0;
  for(int i=0;i<n;i++){
    string tarou,hanako;
    cin>>tarou>>hanako;
    if(tarou>hanako){
      tarous+=3;
    }else if(tarou<hanako){
      hanakos+=3;
    }else{
      tarous++;
      hanakos++;
    }
  }
  cout<<tarous<<' '<<hanakos<<endl;
  return 0;
}

