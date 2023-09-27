class Dice{
	
public:
	Dice(int top, int front, int right,
		 int left, int back, int bottom);  //?????????????????????(?????°??????)
	int get_right();
	void roll_topfront(int top, int front);
	void roll(char r);
	
private:
	
	void roll_top(int top);
	void roll_front(int front);
	void roll_n();
	void roll_e();
	void roll_s();
	void roll_w();
	int m_top;
	int m_front;
	int m_right;
	int m_left;
	int m_back;
	int m_bottom;
	void show_all();
};

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Dice_bec;

int main(void)
{
	Dice_bec dice_bec;
	int num;
	int q;  //???????????°
	
	for(int i = 0; i < 6; i++){
		cin >> num;
		dice_bec.push_back(num);
	}
	cin >> q;
	
	
	Dice dice(dice_bec[0], dice_bec[1], dice_bec[2],
			  dice_bec[3], dice_bec[4], dice_bec[5]);  //?????????????????????
			  
	
	for(int i = 0; i < q; i++){
		
		int top, front;
		cin >> top
		    >> front;
		dice.roll_topfront(top, front);
		
		cout << dice.get_right() << endl;
	}
	
	return 0;
	
}

Dice::Dice(int top, int front, int right,      //?????????????????????
		   int left, int back, int bottom) :
		   m_top(top), m_front(front), m_right(right),
		   m_left(left), m_back(back), m_bottom(bottom)
{
	//	????????????
}


void Dice::roll_topfront(int top, int front)
{
	roll_front(front);
	roll_top(top);
}

void Dice::roll_front(int front)
{
	if(front == m_front){
	}
	//????????¢
	else if(front == m_top){
		roll_s();
	}
	else if(front == m_back){
		for(int i = 0; i < 2; i++){
			roll_s();
		}
	}
	else if(front == m_bottom){
		roll_n();
	}
	//?¨??????¢
	else if(front == m_right){
		roll_w();
		roll_s();
	}
	else if(front == m_left){
		roll_e();
		roll_s();
	}
}

void Dice::roll_top(int top)
{
	while(top != m_top){
		roll_e();
	}
	
}

void Dice::roll_n()
{
	int temp = m_back;
	
	m_back   = m_top;
	m_top    = m_front;
	m_front  = m_bottom;
	m_bottom = temp;
	
}
void Dice::roll_e()
{
	int temp = m_top;
	
	m_top    = m_left;
	m_left   = m_bottom;
	m_bottom = m_right;
	m_right  = temp;
	
}

void Dice::roll_s()
{
	int temp = m_front;
	
	m_front  = m_top;
	m_top    = m_back;
	m_back   = m_bottom;
	m_bottom = temp;
}

void Dice::roll_w()
{
	int temp = m_left;
	
	m_left   = m_top;
	m_top    = m_right;
	m_right  = m_bottom;
	m_bottom = temp;
}

int Dice::get_right()
{
	return m_right;
}


void Dice::show_all()
{
	cout << m_top << ' '
		 << m_front << ' '
		 << m_right<< ' '
		 << m_left << ' '
		 << m_back << ' '
		 << m_bottom << ' ' << endl;
}

void Dice::roll(char r)
{
	switch(r){
	case 'N' :
		 roll_n();
		 break;
	case 'E' :
		 roll_e();
		 break;
	case 'S' :
		 roll_s();
		 break;
	case 'W' :
		 roll_w();
		 break;
	}
}