#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;

int toint(string str){
	stringstream ss;
	int num;
	ss << str;
	ss >> num ;
    return num;
}

string tostring(int num){
	stringstream ss;
		ss << num;
	    return ss.str();
}

string to0string(int L,string str){
	int size = str.size();
	if(size < L){
	for(int i=0;i<(L-size);i++){
		str = '0' + str;
	  }
	}
	return str;
}

int main(){
   int a,L; string str;  stringstream ss;
   while(cin >> a >> L){
	   if(a == 0 && L == 0) break;
	   int num[21];
	   num[0] = a;
	   for(int i=0;;i++){
		   bool flag = false;
		   str = to0string(L,tostring(a));
		    int mx,mn;
	    	sort(str.begin(),str.end());
	    	mn = toint(str);
	        reverse(str.begin(),str.end());
	    	mx = toint(str);
	    	num[i+1] = a = mx -mn;
	    	for(int j=0;j<i+1;j++){
	    		if(num[j]== num[i+1]){
	    					cout<<j<<" "<<num[j]<<" "<<i+1-j<<endl;
	    					flag = true;
	    				}
	    	}
	    	if(flag) break;
	    }
   }
}