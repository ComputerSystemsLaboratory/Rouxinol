#include <iostream>
#include <queue>
using namespace std;
int main(){
	char s[10];
	int key;
	priority_queue<int> p;
	while(1){
		scanf("%s",s);
        if(s[0]=='i'){
			scanf("%d",&key);
			p.push(key);
		}else if(s[1]=='x'){
			printf("%d\n",p.top());
			p.pop();
		}else if(s[0]=='e') {
			break;
		}
	}
	return 0;
}
