#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <queue>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	int q,x;cin>>q;
  	string com;
  	list<int> v;
  	scanf("%d",&q);
  
  for(int i=0;i<q;i++){
  	cin>>com;
    if(com=="insert"){
  		scanf("%d",&x);
    	v.push_front(x);
  	}else if(com=="deleteFirst"){
  		v.pop_front();    
  	}else if(com=="deleteLast"){
  		v.pop_back();
  	}else if(com=="delete"){
  		scanf("%d",&x);
      	for(list<int>::iterator it=v.begin();it!=v.end();it++){
        	if(*it==x){
            	v.erase(it);
              	break;
            }
        }
  	}
}
  
  int i=0;
  	for(list<int>::iterator it=v.begin(); it!=v.end();it++){
  		if(i++) printf(" ");
    	printf("%d",*it);
  	}
  printf("\n");
  }
