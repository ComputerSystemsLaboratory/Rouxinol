#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

struct st_string{
	string str;
	st_string *next;
};

class array_class{
public:
	st_string *start;
	st_string *end,*buf;
	int n;
	array_class(){
		n=0;
		start=end=NULL;
	}
	void add(string str){
		if(start==NULL){
			start=new st_string;
			start->str=str;
			start->next=NULL;
			end=start;
			n++;
			return;
		}
		buf=start;
		while(buf!=NULL){
			if(str==buf->str) return;
			buf=buf->next;
		}
		buf=new st_string;
		buf->str=str;
		buf->next=NULL;
		end->next=buf;
		end=buf;
		n++;
		return;
	}
	int size(){
		return n;
	}
	void show(){
		buf=start;
		while(buf!=NULL){
			cout<<"  "<<buf->str<<endl;
			buf=buf->next;
		}
	}
	void clear(){
		while(start!=NULL){
			buf=start;
			start=start->next;
			delete buf;
		}
		n=0;
		start=NULL;
		return;
	}
};

array_class v;

void rev(char *start,char *end){
	char t;
	while(start<end){
		t=*start;
		*start=*end;
		*end=t;
		start++;
		end--;
	}
	return;
}

void add(char *s1,char *s2){
	string str;
	char *start,*end;
	char t;
	str=string(s1)+string(s2);
	v.add(str);
	str=string(s2)+string(s1);
	v.add(str);
	rev(s1,&s1[strlen(s1)-1]);
	str=string(s1)+string(s2);
	v.add(str);
	str=string(s2)+string(s1);
	v.add(str);
	rev(s2,&s2[strlen(s2)-1]);
	str=string(s1)+string(s2);
	v.add(str);
	str=string(s2)+string(s1);
	v.add(str);
	rev(s1,&s1[strlen(s1)-1]);
	str=string(s1)+string(s2);
	v.add(str);
	str=string(s2)+string(s1);
	v.add(str);
	return;
}

int main(){
	int n,count;
	char str[75],s1[75],s2[75];
	cin>>n;
	for(int p=0;p<n;p++){
		v.clear();
		cin>>str;
		int l=(strlen(str));
		for(int i=1;i<l;i++){
			strncpy(s1,str,i);
			s1[i]=0;
			strcpy(s2,&str[i]);
			add(s1,s2);
		}
		cout<<v.size()<<endl;;
	}
	return 0;
}