#include<cstdio>
#include<list>
#include<algorithm>

int main(){
	int q, x;
	char com[20];
	std::list<int> v;
	scanf("%d", &q);
	for (int i = 0; i < q; ++i){
		scanf("%s", com);
		if (com[0] == 'i'){
			scanf("%d", &x);
			v.push_front(x);
		}
		else if (com[6] == 'L'){
			v.pop_back();
		}
		else if(com[6] == 'F'){
			v.pop_front();
		}
		else if(com[0] == 'd'){
			scanf("%d", &x);
			for (auto it = v.begin(); it != v.end(); ++it){
				if (*it == x){
					v.erase(it);
					break;
				}
			}
		}
	}
	int i = 0;
	for (auto it = v.begin(); it != v.end(); ++it){
		if (i++)printf(" ");
		printf("%d", *it);
	}
	printf("\n");
	return 0;
}