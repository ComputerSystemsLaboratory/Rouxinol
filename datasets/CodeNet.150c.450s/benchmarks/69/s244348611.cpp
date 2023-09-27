#include<iostream>
#include<stack>
using namespace std;

stack<int> array1,array2;
int Balls[10];

bool DFS(int number,stack<int> s1,stack<int> s2){
  if(number > 9) return true;
  if(s1.top() < Balls[number]){
    s1.push(Balls[number]);
    if(DFS(number+1,s1,s2)){
      return true;
    }
    s1.pop();
  }
  if(s2.top() < Balls[number]){
    s2.push(Balls[number]);
    if(DFS(number+1,s1,s2)){
      return true;
    }
    s2.pop();
  }
  return false;
  /*if(number > 9) return;
  if(firstarray){
    if(array1.top() < Balls[number]){
      array1.push(Balls[number]);
      DFS(number+1,false);
      DFS(number+1,true);
    }
    else if(second){
      return;
    }
    else{
      DFS(number,false,true);
    }
  }
  else{
    if(array2.top() < Balls[number]){
      array2.push(Balls[number]);
      DFS(number+1,false);
      DFS(number+1,true);
    }
    else if(second){
      return;
    }
    else{
      DFS(number,true,true);
    }
  }*/
}

int main(){

    int N;

    cin >> N;

    for(int i=0;i<N;i++){
      for(int i=0;i<10;i++){
        cin >> Balls[i];
      }
      array1.push(0);
      array2.push(0);

      if(DFS(0,array1,array2)){
        cout << "YES" << endl;
      }
      else{
        cout << "NO" << endl;
      }
      while (!array1.empty()) {
        array1.pop();
      }
      while (!array2.empty()) {
        array2.pop();
      }
    }
    return 0;
}