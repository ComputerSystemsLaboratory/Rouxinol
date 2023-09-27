#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <list>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	list<int> lst;
	int n,comn;
	char com[20];
	
	//??????????????°??????
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%s", com);
		scanf("%d", &comn);
		if (com[0] == 'i'){
			lst.push_front(comn);
		}
		//delete???????????????
		else if (com[0] == 'd'){
			if (strlen(com) == 6){
				for (list<int>::iterator it = lst.begin(); it != lst.end(); it++){
					if (*it == comn){
						lst.erase(it);
						break;
					}
				}
			}
			else if (com[6] == 'L'){
				lst.pop_back();
			}
			else if (com[6] == 'F'){
				lst.pop_front();
			}
		}

	}

	if (!lst.empty()){
		list<int>::iterator it = lst.begin();
		printf("%d", *it);
		it++;
		for (it; it != lst.end(); it++){
			printf(" %d", *it);
		}
	}
	printf("\n");
	return 0;
}