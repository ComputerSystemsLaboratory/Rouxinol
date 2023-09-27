#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int l, maxV, minV;
int value(int v[10]){
  int rtn=0, ex=1;
  for( int i=l-1;i>=0;i-- ){
    rtn += v[i] * ex;
    ex *= 10;
  }
  return rtn;
}

int main(){
  string a;
  int v[10];
  map<int,int> m;

  while( cin>>a>>l && (a!="0" || l>0) ){
    m.clear();
    for( int i=0;i<l;i++ ){
      if( i<(int)a.length() )
	v[i] = a[i]-'0';
      else
	v[i] = 0;
    }
    int index = 0;
    int ba = value(v);
    m[ ba ] = index++;

    while( true ){
      sort( v, v+l );
      minV = value(v);
      reverse( v, v+l );
      maxV = value(v);
      ba = maxV - minV;
 
      if( m.find(ba)!=m.end() ){
	cout << m[ba] << " " 
	     << ba << " "
	     << (index-m[ba]) << endl;
	break;
      }
      m[ ba ] = index++;
      for( int i=0;i<l;i++ ){
	v[i] = ba%10;
	ba = ba/10;
      }
    }
  }

  return 0;
}