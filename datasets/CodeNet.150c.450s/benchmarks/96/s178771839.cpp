#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
  string key[10]={"0",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int n;
  cin>>n;
  for (int nn=0;nn<n;nn++){
    string in;
    vector<int> input;
    string ans;
    cin>>in;
    for (int i=0;i<in.length();i++){
      input.push_back(in[i]-48);
    }
    int count=0;
    int cc=0;
    for (int i=0;i<in.length();i++){
      if (input[i]==0&&i!=0&&count!=0){
	char c=key[input[i-1]][(count-1)%key[input[i-1]].size()];
	ans[cc]=c;
	cc++;
	count=0;
	continue;
      }
      else if (input[i]==0&&i==0)
	continue;
      else if (input[i]==0&&count==0)
	continue;
      else
	count++;
    }
    for (int i=0;i<cc;i++){
      cout<<ans[i];
    }
    cout<<endl;
  }
}