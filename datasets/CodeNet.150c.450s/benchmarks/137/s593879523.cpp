#include<iostream>
#include<string>
#include<cstring>
#include<vector>

using namespace std;
const int M=1046527;
const int L=14;
const int NIL=-1;
string H[M];

int h1(int key){
	return key % M;
}
int h2(int key){
	return 1+(key % (M-1));
}
int getChar(char ch){
	switch(ch){
		case 'A':return 1;
		case 'C':return 2;
		case 'G':return 3;
		case 'T':return 4;
		default:return 0;
	}
}
long long getKey(string str){
	int len=str.size();
	long long sum=0,p=1;
	for(int i=0;i<len;++i){
         sum+=p*getChar(str[i]);
         p*=5;
	}
	return sum;
}
void insert(string &word){
     long long key=getKey(word);
     int i=0,j;
     while(true){
        j=(h1(key)+i*h2(key)) % M;
        if(H[j]=="") {
           H[j]=word;
           return;
        }
        else i++;
        
     }
}
bool find(string &word){
      
        long long key=getKey(word);
        long long h,i;
        for(i=0;;i++){
        	h=(h1(key)+i*h2(key)) % M;
        	if(H[h]==word) return true;
        	else if(H[h].size()==0) return false;
        }

}

int main(){
	int n ;
	string com,word;
	
	cin>>n;
	while(cin>>com>>word){
		if(com[0]=='i'){
             insert(word);
		}
		else if(com[0]=='f'){
           if( find(word) )
           	cout<<"yes"<<endl;
           else
           	cout<<"no"<<endl;
		}
	}

}
