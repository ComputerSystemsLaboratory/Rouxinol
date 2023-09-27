#include <stdio.h>
#include <string.h>

const int DEF = -1000000000;
class Cell{
private:
	int val;
	Cell *left,*right;
public:
	Cell(){
		val = DEF;
		left = NULL;
		right = NULL;
	}
	void Left(Cell *l){
		left = l;
	}
	void Right(Cell *r){
		right = r;
	}
	void Update(int x){
		val = x;
	}
	int Value(){
		return val;
	}
	Cell* Next(){
		return right;
	}
	Cell* Before(){
		return left;
	}

};

class DLL{
private:
	Cell *first,*last;
public:
	DLL(){
		first = new Cell();
		last = new Cell();
		first->Right(last);
		last->Left(first);
	}
	void Insert(int x){
		Cell *nc = new Cell();
		first->Update(x);
		first->Left(nc);
		nc->Right(first);
		first = nc;
	}
	void DeleteFirst(){
		first = first->Next();
		first->Update(DEF);
		delete first->Before();
	}
	void DeleteLast(){
		last = last->Before();
		last->Update(DEF);
		delete last->Next();
	}
	void Delete(int x){
		Cell* itr = first->Next();
		while(itr != last){
			if(itr->Value() == x){
				Cell* f = itr->Before();
				Cell* l = itr->Next();
				f->Right(l);
				l->Left(f);
				delete itr;
				return;
			}
			itr = itr->Next();
		}
	}
	void List(){
		Cell* itr = first->Next();
		printf("%d",itr->Value());
		itr = itr->Next();
		while(itr != last){
			printf(" %d",itr->Value());
			itr = itr->Next();
		}
		printf("\n");
	}
};

int main(){
	int n;
	DLL dll;

	scanf("%d",&n);
	char cmd[64];
	int v;
	while(scanf("%s",cmd) != EOF){
		if(strcmp(cmd,"insert") == 0){
			scanf("%d",&v);
			dll.Insert(v);
		}
		else if(strcmp(cmd,"delete") == 0){
			scanf("%d",&v);
			dll.Delete(v);
		}
		else if(strcmp(cmd,"deleteFirst") == 0){
			dll.DeleteFirst();
		}
		else if(strcmp(cmd,"deleteLast") == 0){
			dll.DeleteLast();
		}
		else if(strcmp(cmd, "list") == 0){
			dll.List();
		}
	}
	dll.List();
	return 0;
}


