#include<bits/stdc++.h>
using namespace std;


string Reverse(string s){

  string work="";
  for(int i=s.size()-1; i>=0; i--)
    work += s[i];

  return work;

}


bool Check(string s , vector<string> list){


  for(int i=0; i<(int)list.size(); i++){
    if(list[i] == s) return false;
  }

  return true;

}

int main(){


  int m;
  string in;
  string head,tail;
  int size;

  vector<string> list(0);

  cin >> m;

  for(int i=0; i<m; i++){

    cin >> in;
    size = in.size();

    list.clear();
    list.push_back(in);

    for(int j=1; j<size; j++){
      int k;      
      head = tail = "";
      for(k=0; k<j; k++){
	head+=in[k];
      }
      for(; k<size; k++){
	tail+=in[k];
      }
      //split

      if( Check( head+tail , list) ){
	list.push_back(head+tail);
      }
      if( Check( Reverse(head)+tail , list) ){
	list.push_back(Reverse(head)+tail);
      }
      if( Check( head+Reverse(tail) , list) ){
	list.push_back(head+Reverse(tail));
      }
      if( Check( Reverse(head)+Reverse(tail) , list) ){
	list.push_back(Reverse(head)+Reverse(tail));
      }
      if( Check( tail+head , list) ){
	list.push_back(tail+head);
      }
      if( Check( Reverse(tail)+head , list) ){
	list.push_back(Reverse(tail)+head);
      }
      if( Check( tail+Reverse(head) , list) ){
	list.push_back(tail+Reverse(head));
      }
      if( Check( Reverse(tail)+Reverse(head) , list) ){
	list.push_back(Reverse(tail)+Reverse(head));
      }
      //connect

      /*for(int m=0; m<(int)list.size(); m++){
	cout << list[m] << endl;
      }
      cout << endl;
      */
    }

    cout << list.size() << endl;
      

  }







  return 0;

}