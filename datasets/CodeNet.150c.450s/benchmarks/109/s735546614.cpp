#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

typedef pair<int,int> P;
enum{IN,OUT};

int tosec(int h,int m,int s){
     int t=0;
     t+=s;
     t+=m*60;
     t+=h*60*60;
     return t;
}

int main(){
     int N;
     while(cin>>N,N){
	  list<P> hyou;
	  for(int i=0;i<N;i++){
	       int h1,h2,m1,m2,s1,s2;
	       scanf(" %d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
	       int temp1,temp2;
	       temp1=tosec(h1,m1,s1);temp2=tosec(h2,m2,s2);
	       //cout<<h2<<m2<<s2<<endl;
	       hyou.push_back(P(temp1,OUT));
	       hyou.push_back(P(temp2,IN));
	  }
	  hyou.sort();
	  int current=0,max_line=0;
	  list<P>::iterator itr=hyou.begin();
	  while(itr!=hyou.end()){
	       //cout<<itr->first<<" "<<itr->second<<endl;
	       switch(itr->second){
	       case OUT:
		    current++;
		    max_line=max(current,max_line);
		    break;
	       case IN:
		    current--;
		    break;
	       }
	       itr++;
	  }
	  cout<<max_line<<endl;
     }
}
    