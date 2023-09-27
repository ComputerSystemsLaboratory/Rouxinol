#include <iostream>
#include <string>
using namespace std;

struct dice
{
	int _1, _2, _3, _4, _5, _6;

	void throwdice(char c) {
		int temp;
		switch(c){
			case 'N':
				temp = _1;
			    _1 = _2;
			    _2 = _6;
			    _6 = _5;
			    _5 = temp; 
			break;
			case 'E':
				temp = _1;
	      		_1 = _4;
	      		_4 = _6;
	      		_6 = _3;
	      		_3 = temp;
			break;
			case 'W':
			    temp = _1;
			    _1 = _3;
			    _3 = _6;
			    _6 = _4;
			    _4 = temp;
		    break;
		    case 'S':
		      	temp = _1;
		      	_1 = _5;
		      	_5 = _6;
		      	_6 = _2;
		      	_2 = temp;
		    break;
		    case 'R':
		    	int t_2 = _2, t_3 = _3, t_4 = _4, t_5 = _5;
		      	_2 = t_4;
		      	_3 = t_2;	      	
		      	_4 = t_5;
		      	_5 = t_3;
		    break;
		}
	}
};

int main(int argc, char const *argv[])
{
	dice d;
	int q, up, front;
	bool upsame;

	cin >> d._1 >> d._2 >> d._3 >> d._4 >> d._5 >> d._6;
	cin >> q;

	for (int i = 0; i < q; ++i)
	{
		upsame = false;
		cin >> up >> front;
		for (int j = 0; j < 4; ++j)
		{
			d.throwdice('S');
			if(d._1 == up)
			{
				upsame = true;
				break;
			}
		}

		if(!upsame)
		{
			for (int j = 0; j < 4; ++j)
			{
				d.throwdice('W');
				if(d._1 == up)
					break;
			}
		}

		for (int j = 0; j < 4; ++j)
		{
			d.throwdice('R');
			if(d._2 == front)
				break;
		}
		cout << d._3 << endl;
	}
	
	return 0;
}