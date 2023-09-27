#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>
#include <utility>
#include<queue>
#include<algorithm>
#include<list>

using namespace std;

void print_list(const list<int>& dlist){
  const list<int>::const_iterator itEnd = dlist.end();
  for(list<int>::const_iterator it =dlist.begin();it !=itEnd;++it){
    if(it!=dlist.begin())cout <<" ";
    cout << *it;
  }
  cout << endl;
}

//void delete_list(list<int> &dlist,int key){
 // list<int>::iterator find_ptr = find_list(dlist,key);

//}

int main(){
  
  int n = 0;
  cin >> n;

  string command;
  int num;

  list<int> dlist;
  list<int>::iterator it;
  list<int>::iterator l;

  for(int i=0;i<n;i++){
   cin >> command ;
     if(command=="insert"){
        cin >> num;
        dlist.push_front(num);
     }
     else if(command =="delete"){
        cin >> num;
        //delete_list(dlist);
        //list<int>::iterator find_ptr = find(dlist.begin(),dlist.end(),num);
        //if()
        for(it=dlist.begin(),l=dlist.end();it!=l;++it){
          if(*it == num){
            dlist.erase(it);
            break;
          }
     }
    }
     else if(command =="deleteFirst"){
      dlist.pop_front();
     }
     else{
     dlist.pop_back();
     } 

     
  }


  print_list(dlist);


  return 0;
}
