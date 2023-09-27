#include <iostream>
#include <vector>
using namespace std;

int m;
string s, s1,s2;
vector<string> v;

void add(string s){
  unsigned int i;

  if( v.size()==0 ){
    v.push_back( s );
    return;
  }

  for( i=0;i<v.size();i++ ){
    if( v[i]==s )
      return;
    if( v[i]>s ){
      v.insert( v.begin()+i, s );
      return;
    }
  }
  v.push_back( s );
}

string rev(string s){
  string r="";
  for( unsigned int i=0;i<s.length();i++ ){
    r = s.at(i) + r;
  }
  return r;
}

int main(){
  unsigned int ui,len;

  cin >> m;
  for( int loop=0;loop<m;loop++ ){
    cin >> s;
    //    cout << s << endl;
    
    v.clear();
    len = s.length();
    for( ui=1;ui<len;ui++ ){
      s1 = s.substr( 0,ui );
      s2 = s.substr( ui );
      //      cout << " "<<s1<<" "<<s2<<endl;
      add( s1+s2 );
      add( s1+rev(s2) );
      add( rev(s1)+s2 );
      add( rev(s1)+rev(s2) );
      add( s2+s1 );
      add( s2+rev(s1) );
      add( rev(s2)+s1 );
      add( rev(s2)+s1 );
    }
    cout << v.size() << endl;
  }

  return 0;
}