#include <iostream>
#include <fstream>
#include <list>
using namespace std;

class game{
	int length;
	int cur;
	int *r,*l;
	int r_score,l_score;
public:
	game(int _l){
		length = _l;
		r = new int [length];
		l = new int [length];
		r_score = 0;
		l_score = 0;
		cur = 0;
	}
	~game(){
		delete [] r;
		delete [] l;
	}
	void run();
	void insert(int,int);
};

void game::run(){
	for(int i = 0;i < length;i++){
		if(r[i] < l[i]){
			l_score += r[i] + l[i];
		}else if(r[i] > l[i]){
			r_score += r[i] + l[i];
		}else{
			l_score += l[i];
			r_score += r[i];
		}
	}
	cout<<l_score<<" "<<r_score<<endl;
}

void game::insert(int l_card,int r_card){
	r[cur] = r_card;
	l[cur] = l_card;
	cur++;
}

int main(){
	list<game*> lst;
	while(1){
		int read;
		cin>>read;
		if(read == 0){
			break;
		}
		game *g = new game(read);
		for(int i = 0; i < read;i++){
			int r_card,l_card;
			cin>>l_card>>r_card;
			//cout<<l_card<<","<<r_card<<endl;
			g->insert(l_card,r_card);
		}
		lst.push_back(g);
	}

	for(auto it = lst.begin();it != lst.end();it++){
		(*it)->run();
		delete (*it);
	}
	return 0;
}