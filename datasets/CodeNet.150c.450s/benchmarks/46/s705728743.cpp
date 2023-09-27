#include<iostream>

using namespace std;

int main()
{
  int n,x,count;
  cin >> n >> x;
  while(n||x){
    count=0;
    for(int i=1; i<n-1; i++){
      for(int j=i+1; j<n; j++){
        for(int k=j+1; k<n+1; k++){
          if(i+j+k==x)count++;
        }
      }
    }
    cout << count << endl;
    cin >> n >> x;
  }
  return 0;
}

