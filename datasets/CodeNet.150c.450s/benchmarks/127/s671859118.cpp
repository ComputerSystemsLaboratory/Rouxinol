#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int count (string rs) {

  vector<string> se;

  string sa,sb,rsa,rsb,rsb2,s;

  s = rs;
  reverse(rs.begin(), rs.end() );

  for(int i=0; i<s.length(); i++) {
    rsa = s.substr(0,i);
    rsb = s.substr(i,s.length()-i);

    sa = rsa;
    sb = rsb;

    reverse(sb.begin(), sb.end());
    reverse(sa.begin(), sa.end());

    se.push_back( sa + sb );
    se.push_back( sb + sa );
    se.push_back( rsa + rsb );
    se.push_back( rsb + rsa );
    se.push_back( rsa + sb );
    se.push_back( rsb + sa );
    se.push_back( sa + rsb );
    se.push_back( sb + rsa );

  }

  sort(se.begin(), se.end());
  vector<string>::iterator uni = unique(se.begin(),se.end());
  se.erase(uni,se.end());

  return se.size();
}

int main() {

  int m;
  scanf("%d",&m);

  char c[80];
  while(m--) {
    string s;
    scanf("%s", c);
    printf("%d\n",count(string(c)));
  }
}