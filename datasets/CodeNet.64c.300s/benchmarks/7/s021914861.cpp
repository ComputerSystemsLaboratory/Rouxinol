#include<iostream>
using namespace std;

#define CARD_TYPE 4
#define CARD_RANK 13
#define CARD_MAX 52

int main()
{	
	bool cards[CARD_TYPE][CARD_RANK] = { false };
	int N;
	int type, rank;
	char ctype;
	
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> ctype >> rank;
		
		switch( ctype )
		{
		case 'S': type = 0; break;
		case 'H': type = 1; break;
		case 'C': type = 2; break;
		case 'D': type = 3; break;
		}
		rank --;
		cards[type][rank] = true;
	}
	
	for(int i = 0; i < CARD_TYPE; i++)
	{
		for(int j = 0; j < CARD_RANK; j++)
		{
			if(cards[i][j] == false)
			{
				switch( i )
				{
				case 0: cout << "S "; break;
				case 1: cout << "H "; break;
				case 2: cout << "C "; break;
				case 3: cout << "D "; break;
				}				
				
				cout << j + 1 << endl;
			}
		}
	}
	return 0;
}