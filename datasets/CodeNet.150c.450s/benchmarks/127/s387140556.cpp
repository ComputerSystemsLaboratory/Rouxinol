#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int ans(string buf){
	set<string> pa;
	pa.clear();
	string str1,str2;//str1:ツ湘」 str:ツ可コ
	for(int i=1;i-1<buf.size()-1;i++){
		str1=string(buf,0,i);
		str2=string(buf,i,buf.size()-i);

		string str1_reverse=str1;
		string str2_reverse=str2;
		reverse(str1_reverse.begin(),str1_reverse.end());
		reverse(str2_reverse.begin(),str2_reverse.end());
		string ins=str1+str2;
		pa.insert(ins);

		ins=str2+str1;
		pa.insert(ins);

		ins=str1_reverse+str2;
		pa.insert(ins);

		ins=str2+str1_reverse;
		pa.insert(ins);
		
		ins=str2_reverse+str1;
		pa.insert(ins);

		ins=str1+str2_reverse;
		pa.insert(ins);

		ins=str1_reverse+str2_reverse;
		pa.insert(ins);

		ins=str2_reverse+str1_reverse;
		pa.insert(ins);
		
	}
	return pa.size();
}

int main(){
	int d;
	string buf;
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>buf;	
		cout<<ans(buf)<<endl;
	}
	return 0;
}