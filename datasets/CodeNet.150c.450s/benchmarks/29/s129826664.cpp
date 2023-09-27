#include <iostream>
#include <list>
#include <string>
using namespace std;
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n,x;
	string str;
	list <int> lst;
	list<int>::iterator it;
	cin >> n;
	while (n--){
	cin >> str;
		if (str == "insert"){
			cin >> x;
			lst.push_front(x);
  }else if (str == "deleteFirst") lst.pop_front();		
   else if (str == "deleteLast")  lst.pop_back();			
			
   else{    cin >> x;
         	for (it = lst.begin(); it!=lst.end(); ++it){
		   		 if (*it == x){
					  lst.erase(it); break;
			    	}				 	
			  }
	    }
	}
	for (it = lst.begin(); it != --lst.end(); ++it){
		cout << *it<<" ";
	}cout <<*it<<endl;
	return 0;
}