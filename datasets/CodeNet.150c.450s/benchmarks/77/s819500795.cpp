#include <iostream>
#include <cstdlib>

#define Finding 																																\
			for(int j = 0; j < nGems; j++)																										\
			{																																	\
				if(!GemList[j].Recovered && GemList[j].x == this->x && GemList[j].y == this->y)													\
				{																																\
					GemList[j].Recovered = true;																								\
					RecoverCount++;																												\
				}																																\
				if(RecoverCount >= Unrecovered) return RecoverCount;																			\
			}

// stdin : Gems / Instructions

struct Gem
{
	int x, y;
	bool Recovered;
};
class Robot
{
public:
	void Initialize();
	int MoveAndRecover(Gem*, int, char, int, int);
private:
	int x, y;
};

int main(void)
{
	int nGems, MaxGems, nInsts;
	Gem* GemList;
	Robot Mychar;
	
	do
	{
		std::cin >> nGems;
		if(nGems == 0) break;
		MaxGems = nGems;
		GemList = (Gem*)malloc(sizeof(Gem) * nGems);
		for(int i = 0; i < nGems; i++)
		{
			std::cin >> GemList[i].x;
			std::cin >> GemList[i].y;
			GemList[i].Recovered = false;
		}
		std::cin >> nInsts;
		Mychar.Initialize();
		for(int i = 0; i < nInsts; i++)
		{
			// North:+y, East:+x
			std::string dir;
			int dist;
			std::cin >> dir;
			std::cin >> dist;
			nGems -= Mychar.MoveAndRecover(GemList, MaxGems, dir[0], dist, nGems);
		}
		if(nGems <= 0)
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
		free(GemList);
	} while(true);
	
	return 0;
}

void Robot::Initialize()
{
	this->x = 10;
	this->y = 10;
}
int Robot::MoveAndRecover(
	Gem* GemList, int nGems, char Direction, int Distance, int Unrecovered)
{
	int RecoverCount = 0;
	
	if(Unrecovered <= 0) return 0;
	
	if(Direction == 'N')
	{
		// 自分の位置から下にDistanceまで走査する(実際に動く)
		for(int i = 0; i < Distance; i++)
		{
			Finding;
			this->y++;
		}
		Finding;
	}
	else if(Direction == 'S')
	{
		// 自分の位置から上にDistanceまで走査する(実際に動く)
		for(int i = 0; i < Distance; i++)
		{
			Finding;
			this->y--;
		}
		Finding;
	}
	else if(Direction == 'E')
	{
		// 自分の位置から下にDistanceまで走査する(実際に動く)
		for(int i = 0; i < Distance; i++)
		{
			Finding;
			this->x++;
		}
		Finding;
	}
	else if(Direction == 'W')
	{
		// 自分の位置から下にDistanceまで走査する(実際に動く)
		for(int i = 0; i < Distance; i++)
		{
			Finding;
			this->x--;
		}
		Finding;
	}
	
	return RecoverCount;
}