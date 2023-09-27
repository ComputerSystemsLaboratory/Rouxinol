#include <iostream>
#include <map>
using namespace std;
int main()
{
  int n,m,d,p;
  for(;;){
    cin >> n >> m;
    if(n==0 && m==0) break;
    multimap<int,int,greater<int> > mp;
    while(n--){
      cin >> d >> p;
      mp.insert(multimap<int,int>::value_type(p,d));
    }
    multimap<int,int>::iterator it = mp.begin();
    while(m > 0 && it != mp.end()){
      if((*it).second <= m){
	m -= (*it).second;
	mp.erase(it);
	it = mp.begin();
      }else{
	(*it).second -= m;
	m = 0;
      }
    }
    m = 0;
    while(it != mp.end()){
      m += (*it).first * (*it).second;
      it++;
    }
    cout << m << endl;
  }
  return 0;
}