#include <iostream>
using namespace std;

int main()
{
  int input;
  int temp=0;

  while(1){
    int count=0;
    cin>>input;
    
    if(input==0)
      break;

    for(int i=1;i<input;i++){
      temp=i;
      for(int j=i+1;j<input;j++){
        temp+=j;
        if(temp>input)
          break;
        
        if(temp==input){
          count++;
          break;
        }
      }
    }
    
    cout<<count<<endl;
  }
}

