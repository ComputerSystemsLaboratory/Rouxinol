#include<iostream>
#include<string>
#include<list>

using namespace std;

int main(){
  int n;
  cin >> n;
  string c;
  int num;
  list<int>::iterator itr;
  list<int>lst;
  itr = lst.begin();
  for(int i=0;i<n;i++){
    cin >> c;
    if(c=="deleteFirst") lst.pop_front();
    else if(c=="deleteLast") lst.pop_back();
    else cin >> num;
    if(c=="insert") lst.push_front(num);
    
    else if(c=="delete"){
      for(itr=lst.begin();itr!=lst.end();itr++){
	if(*itr==num){
	  lst.erase(itr);
	  break;
	}
      }
    }    
  }
  int point=0;
  int cont=0;
  for(itr=lst.begin();itr!=lst.end();itr++) point+=1;
    
  for(itr=lst.begin();itr!=lst.end();itr++){
    if(cont==point-1){
      cout << *itr << endl;
      break;
    }
    cout << *itr <<" ";
    cont++;
  }
  return 0;
}