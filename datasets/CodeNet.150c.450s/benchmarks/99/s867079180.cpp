#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int mcxitoint(string mcxi){
	int ret=0;
	for(string::iterator it=mcxi.begin();it!=mcxi.end();++it){
		int cur=1;
		if(isdigit(*it)){
			cur=(*it)-'0';
			++it;
		}
		switch (*it){
		case 'm':
			ret+=1000*cur;
			break;
		case 'c':
			ret+=100*cur;
			break;
		case 'x':
			ret+=10*cur;
			break;
		case 'i':
			ret+=cur;
			break;
		}
	}
	return ret;
}


string inttomcxi(int in){
	string ret="";
	if(in%10!=0){
		ret='i'+ret;
		if(in%10!=1)ret=static_cast<char>(in%10+'0')+ret;
	}
	in=in/10;
	if(in%10!=0){
		ret='x'+ret;
		if(in%10!=1)ret=static_cast<char>(in%10+'0')+ret;
	}
	in=in/10;
	if(in%10!=0){
		ret='c'+ret;
		if(in%10!=1)ret=static_cast<char>(in%10+'0')+ret;
	}
		in=in/10;
	if(in%10!=0){
		ret='m'+ret;
		if(in%10!=1)ret=static_cast<char>(in%10+'0')+ret;
	}
	return ret;
}



int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string mcxi[2];
		cin>>mcxi[0]>>mcxi[1];
		cout<<inttomcxi(mcxitoint(mcxi[0])+mcxitoint(mcxi[1]))<<endl;
	}
	return 0;
}