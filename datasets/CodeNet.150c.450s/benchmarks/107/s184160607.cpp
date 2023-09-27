#include<iostream>
#include<vector>
using namespace std;

int main(){
	string str1,str2;
	vector<char> s1;
	vector<char> s2;
	getline(cin,str1);
	for(int i=0; i<(int)str1.size(); i++){
		s1.push_back(str1[i]);
	}
	getline(cin,str2);
	for(int i=0; i<(int)str2.size(); i++){
		s2.push_back(str2[i]);
	}
	
	int path[s1.size()+1][s2.size()+1];
  	for(int h=0; h<s1.size()+1; h++){
  		for(int w=0; w<s2.size()+1; w++){
  			if(h==0 && w==0){
  				path[h][w]=0;
  			}else if(h==0){
  				path[h][w]=path[h][w-1]+1;
  			}else if(w==0){
  				path[h][w]=path[h-1][w]+1;
  			}else{
  				int min=path[h][w-1]+1;
  				if(min>path[h-1][w]+1) min=path[h-1][w]+1;
  				int x;
  				if(str1[h-1]==str2[w-1]){
  					x=path[h-1][w-1];
  				}else{
  					x=path[h-1][w-1]+1;
  				}
  				if(min>x) min=x;
  				path[h][w]=min;
  			}
  		}
  	}
	cout<<path[s1.size()][s2.size()]<<endl;
	return 0;
}
