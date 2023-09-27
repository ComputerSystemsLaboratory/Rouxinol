#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int abs(int a,int b){

  int result;

  if(a<b)
    result=b-a;
  else
    result=a-b;
  return result;
};

int main(void){

  int n;
  int min=1000001;
  int  temp;
  
  while(cin >> n,n){

      vector <int> student(n);
    
    for(int i=0;i<n;i++){
      cin >> student[i];
    }

    sort(student.begin(),student.end(),greater<int>());

    for(int i=0;i<n-1;i++){
      
      temp=abs(student[i],student[i+1]);
      //cout << temp <<endl;

      if(min>temp)
	min=temp;
    }

    cout << min <<endl;

    student.clear();
    min=1000001;

  }

  return 0;
  
}