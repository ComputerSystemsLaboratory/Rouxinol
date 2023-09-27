#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	char k[9][5]={{'.',',','!','?',' '},
					{'a','b','c'},{'d','e','f'},
					{'g','h','i'},{'j','k','l'},
					{'m','n','o'},{'p','q','r','s'},
					{'t','u','v'},{'w','x','y','z'}};
	//0,6,8

	string s,out;
	int n;

	cin>>n;

	for(int i1=0;i1<n;i1++){
		cin>>s;
		out="";
		vector<int> v;
		for(int i2=0;i2<s.size();i2++){
			if(s[i2]=='0'){
				if(v.empty()){}
				else {
					if(v.back()==1){
						out+=k[v.back()-1][(v.size()-1)%5];
					}
					else if (v.back()==7 || v.back()==9){
						out+=k[v.back()-1][(v.size()-1)%4];
					}
					else{
						out+=k[v.back()-1][(v.size()-1)%3];
					}
					
				}
				v.clear();
			}
			else {
				if(!v.empty() && v.back()==s[i2]-48){
					v.push_back(s[i2]-48);
				}
				else {
					v.clear();
					v.push_back(s[i2]-48);
				}

			}
		}
		cout<<out<<endl;
	}

	return 0;
}