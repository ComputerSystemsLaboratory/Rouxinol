#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  string str1,str2;
  vector<int> ans(n);
  cin.ignore();
  for(int i=0; i<n; i++){
    vector<char> a;
    vector<char> b;
    getline(cin,str1);
    for(int j=0; j<(int)str1.size(); j++){
      char ch=str1[j];
      a.push_back(ch);
    }
    getline(cin,str2);
    for(int j=0; j<(int)str2.size(); j++){
      char ch=str2[j];
      b.push_back(ch);
    }
  	int path[a.size()+1][b.size()+1];
  	for(int h=0; h<a.size()+1; h++){
  		for(int w=0; w<b.size()+1; w++){
  			if(h==0 || w==0){
  				path[h][w]=0;
  			}else{
  				int max=path[h-1][w];
  				if(max<path[h][w-1]) max=path[h][w-1];
  				if(a[h-1]==b[w-1] && max<path[h-1][w-1]+1){
  					max=path[h-1][w-1]+1;
  				}
  				path[h][w]=max;
  			}
  		}
  	}
  	ans[i]=path[a.size()][b.size()];
  }
  for(int i=0; i<n; i++){
  	cout<<ans[i]<<endl;
  }
  return 0;
}
