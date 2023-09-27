#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void solve(stack <int> s , int r ){
  
  
  int p[r] ,c[r];

  for(int i = 0 ; i < r ; i++ ){
    cin >> p[i] >> c[i];
    p[i]--;
  }
  
  for(int i = 0 ; i < r ; i++ ){
    stack<int> s_sita;
    stack<int> s_ue;
    
    

    while(p[i]-- > 0){
      int a = s.top();
      s.pop();
      //cout << "push_sita:" << a << endl;
      //cout << "p:" << p[i] << endl;
      //cout << "size" << s.size() << endl;
      s_sita.push(a);
    }

    while(c[i]-- > 0){
      int a =s.top();
      s.pop();
      //cout << "push_ue:" << a << endl;
      //cout << "c" << c[i] << endl;
      //cout << "size" << s.size() << endl;
      s_ue.push(a);
    }
    
    while(!s_sita.empty()){
      s.push(s_sita.top());
      //cout << "s.push" << s_sita.top() << endl;
      s_sita.pop();
    }
    
    while(!s_ue.empty()){
      s.push(s_ue.top());
      //cout << "s.push" << s_ue.top() << endl;
      s_ue.pop();
    }
    
    //cout << "size" << s.size() << endl;

    //cout << endl;

  }
    
  cout << s.top() << endl;

  return;

}

int main(){

  int r , n ;

  
  while(1){

    cin >> n >> r;
    if(r == 0 || n == 0)
      break;

    else{
      stack <int> s;
      for(int i = 1 ; i <= n ; i++ ){
        s.push(i);
        //cout << i << endl;
      }
      solve(s,r);
      //cout << "done" << endl;
    }
  }

  return 0;
}