#include <bits/stdc++.h>
using namespace std;


map<string,int> train;
int n;

//第二引数"から"分ける
vector<string> split(string splitstring,int stringnum){
  int i;
  vector<string>stringanswer;
  string answerstring1 = "";
  string answerstring2 = "";
  for(i=stringnum-1;i<splitstring.size();i++)answerstring2+=splitstring[i];
  splitstring.erase(splitstring.begin()+stringnum-1,splitstring.end());
  answerstring1 = splitstring;
  stringanswer.push_back(answerstring1);
  stringanswer.push_back(answerstring2);
  return stringanswer;
}

int main(){
  int i,a,j,k,cnt=0;
  string s;
  cin >> n;
  for(a=0;a<n;a++){
    cin >> s;
    train.clear();
    cnt=0;
    for(i=2;i<=s.size();i++){
      vector<string> v;
      string now;
      v = split(s,i);
      v.push_back(v[0]);
      v.push_back(v[1]);
      //cout <<"v1 " << v[0] << endl;;
      //cout << "v2 " << v[1] << endl;
      reverse(v[2].begin(),v[2].end());
      reverse(v[3].begin(),v[3].end());
      for(j=0;j<=2;j+=2)for(k=1;k<=3;k+=2){
	  now = v[j]+v[k];
	  if(train.find(now)==train.end()){
	    //cout << now << endl;
	    cnt++;
	    train[now]=1;
	  }
	  now = v[k]+v[j];
	  if(train.find(now)==train.end()){
	    cnt++;
	    //cout << now << endl;
	    train[now]=1;
	  }
	}
    }
    cout << cnt << endl;
  }
  return 0;
}

