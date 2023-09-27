#include<string>
#include<iostream>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<list>

using namespace std;

int main(){
		int n;
		scanf("%d",&n);
		list<int> v;
		char aa[20];
		int i;
		for(i=0;i<n;i++){
		scanf("%s",aa);
		if(aa[0]=='i'){ 
			int a;
			scanf("%d",&a);
			v.push_front(a);
		}
		else if(aa[0]=='d'&&aa[6]=='\0') {
			int a;
			scanf("%d",&a);
			for(list<int>::iterator it=v.begin(); it!=v.end();it++){
				if(*it==a) {
					v.erase(it);
					break;
				}
			}
		}
		else if(aa[0]=='d' && aa[6]=='F') v.pop_front();
		else  v.pop_back();
	}
	
	i=0;
for(list<int>::iterator it=v.begin(); it != v.end();it++){
	if(i++) printf(" ");
	printf("%d",*it);
	}
	printf("\n");
	return 0;
	}