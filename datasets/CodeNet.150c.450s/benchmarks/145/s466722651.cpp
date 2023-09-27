#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct P {
  string s;
  int n;
};

int main(){
  vector<P> v;
  string s,d="";
  P p;
  int f=0, l=0;

  getline( cin,s );
  //  cout << "input : "<< s << endl;

  for( unsigned int i=0;i<s.length();i++ ){
    if( s[i]==' ' || i==s.length()-1 ){
      if( s[i]!=' ' ) d += s[i];
      p.s = d;

      //      cout << d << endl;
      unsigned int j;
      for( j=0;j<v.size();j++ ){
	if( v[j].s==d ){
	  v[j].n++;
	  f = max( f,v[j].n ); break;
	}
      }
      if( j==v.size() ){
	p.s = d; p.n=1;
	v.push_back( p );
	l = max( l,(int)d.length() );
      }
      d="";
    }else{
      d = d + s[i];
    }
  }

  for( unsigned int i=0;i<v.size();i++ ){
    if( v[i].n==f ){
      cout << v[i].s << " "; break;
    }
  }
  for( unsigned int i=0;i<v.size();i++ ){
    if( (int)v[i].s.length()==l ){
      cout << v[i].s << endl; break;
    }
  }

  return 0;
}