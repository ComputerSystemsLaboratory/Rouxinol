#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, int> all;
	string buf;
	int maxlength = 0;
	string maxstring;
	while(cin>>buf){
		if(!all.count(buf)){
			all.insert( map<string, int>::value_type(buf, 1) );
			if(maxlength < buf.size()){
				maxlength = buf.size();
				maxstring = buf;
			}
		} else {
			all[buf]++;
		}
	}
	map<string, int>::iterator it = all.begin();
	int maxf = 0;
	string maxsf;
	while( it != all.end() )
	{
		if(maxf < (*it).second){
			maxf = (*it).second;
			maxsf = (*it).first;
		}
		++it;
	}
	cout<<maxsf<<" "<<maxstring<<endl;
	return 0;
}