#include <iostream>
#include <string>
using namespace std;

struct dice
{
	int _1, _2, _3, _4, _5, _6;
};

int main(int argc, char const *argv[])
{
	dice d;
	int temp;
	string cmd;

	cin >> d._1 >> d._2 >> d._3 >> d._4 >> d._5 >> d._6;
	cin >> cmd;

	for (int i = 0; i < cmd.size(); ++i)
	{
		switch(cmd[i]){
			case 'N':
				temp = d._1;
			    d._1 = d._2;
			    d._2 = d._6;
			    d._6 = d._5;
			    d._5 = temp; 
			break;
			case 'E':
				temp = d._1;
	      		d._1 = d._4;
	      		d._4 = d._6;
	      		d._6 = d._3;
	      		d._3 = temp;
			break;
			case 'W':
			    temp = d._1;
			    d._1 = d._3;
			    d._3 = d._6;
			    d._6 = d._4;
			    d._4 = temp;
		    break;
		    case 'S':
		      	temp = d._1;
		      	d._1 = d._5;
		      	d._5 = d._6;
		      	d._6 = d._2;
		      	d._2 = temp;
		    break;
		}
	}
	cout << d._1 << endl;
	return 0;
}