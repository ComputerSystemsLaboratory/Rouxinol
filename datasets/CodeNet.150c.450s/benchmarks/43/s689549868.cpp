#include <iostream>
#include <vector>

using namespace std;

class Player
{	friend class Batler;
	vector<int> card;
	long long int point;
public:
	Player():point(0){}
};
class Batler
{
	Player *p1, *p2;
public:
	Batler(Player *P1, Player *P2):p1(P1),p2(P2){}

	void init();
	void input();
	void start();
};
void Batler::init()
{
	if(!p1->card.empty()){
		p1->card.clear();
		p2->card.clear();
	}
	p1->point = 0;
	p2->point = 0;
}
void Batler::input()
{
	int buf;
	cin>>buf;
	p1->card.push_back(buf);
	cin>>buf;
	p2->card.push_back(buf);
}
void Batler::start()
{
	for(unsigned int i = 0; i < p1->card.size(); i++){
		if( p1->card[i] > p2->card[i]){
			p1->point += p1->card[i] + p2->card[i];
		}else if( p1->card[i] < p2->card[i] ){
			p2->point += p1->card[i] + p2->card[i];
		}else{
			p1->point += p1->card[i];
			p2->point += p2->card[i];
		}
	}
	cout<<p1->point<<" "<<p2->point<<endl;
}
int main()
{
	int n;
	Player p1, p2;
	Batler batle(&p1,&p2);

	while(1){
		batle.init();
		cin>>n;
		if(n == 0) return 0;

		//üÍ
		for(int i = 0; i < n; i++){
			batle.input();
		}
		//ð
		batle.start();
	}
}