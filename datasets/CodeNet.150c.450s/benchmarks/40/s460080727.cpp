class Dice{
	
public:
	Dice(int top, int front, int right,
		 int left, int back, int bottom);  //?????????????????????(?????°??????)
	
	void roll_n();
	void roll_e();
	void roll_s();
	void roll_w();
	int  get_top();  //top????????????(m_top)
	void show_all();
	
private:
	int m_top;
	int m_front;
	int m_right;
	int m_left;
	int m_back;
	int m_bottom;
};
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Dice_bec;

int main(void)
{
	Dice_bec dice_bec;
	int num;
	string rolling;
	
	for(int i = 0; i < 6; i++){
		cin >> num;
		dice_bec.push_back(num);
	}
	cin >> rolling;
	
	
	Dice dice(dice_bec[0], dice_bec[1], dice_bec[2],
			  dice_bec[3], dice_bec[4], dice_bec[5]);  //?????????????????????
			  
	
	for(int i = 0; i < rolling.size(); i++){
	
		switch(rolling[i]){
		case 'N' :
			 dice.roll_n();
			 break;
		case 'E' :
			 dice.roll_e();
			 break;
		case 'S' :
			 dice.roll_s();
			 break;
		case 'W' :
			 dice.roll_w();
			 break;
		}
	}
	
	cout << dice.get_top() << endl;
	//dice.show_all();
	
	return 0;
	
}
Dice::Dice(int top, int front, int right,      //?????????????????????
		   int left, int back, int bottom) :
		   m_top(top), m_front(front), m_right(right),
		   m_left(left), m_back(back), m_bottom(bottom)
{
	//	????????????
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

int Dice::get_top()
{
	return m_top;
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