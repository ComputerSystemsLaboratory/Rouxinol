#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

//ツ債計ツ行ツ青板づーツ偲ヲツ督セ
int GetRowCount()
{
	int count;
	std::cin >> count;
	return count;
}


typedef enum{LEFT,DOWN,RIGHT,UP} DIRECTION;

typedef struct _BLOCK
{
	int fundmention;
	DIRECTION direct;
	int x,y;

	static bool xPred(struct _BLOCK left,struct _BLOCK right)
	{
		return left.x < right.x;
	}

		static bool yPred(struct _BLOCK left,struct _BLOCK right)
	{
		return left.y < right.y;
	}

} BLOCK;

void GetBoxRect(int rowcount){

	std::vector<BLOCK> blocks;
	BLOCK block;
	memset(&block,0,sizeof(BLOCK));
	blocks.push_back(block);

	for(int i = 0; i < rowcount - 1; i++){
		BLOCK block;
		std::cin >> block.fundmention >> (int &)block.direct;
		blocks.push_back(block);
	}

	for(int i = 1; i < rowcount; i++){
		blocks[i].x = blocks[blocks[i].fundmention].x;
		blocks[i].y = blocks[blocks[i].fundmention].y;
		switch(blocks[i].direct){
			case LEFT:
				blocks[i].x++;
				break;
			case DOWN:
				blocks[i].y++;
				break;
			case RIGHT:
				blocks[i].x--;
				break;
			case UP:
				blocks[i].y--;
				break;
		}
	}

	int w = std::max_element(blocks.begin(),blocks.end(),BLOCK::xPred)->x - std::min_element(blocks.begin(),blocks.end(),BLOCK::xPred)->x + 1;
	int h = std::max_element(blocks.begin(),blocks.end(),BLOCK::yPred)->y - std::min_element(blocks.begin(),blocks.end(),BLOCK::yPred)->y + 1;

	std::cout << w << ' ' << h << std::endl;
}

void A()
{
	int rowcount = GetRowCount();
	while(rowcount != 0){
		GetBoxRect(rowcount);
		rowcount = GetRowCount();
	}
}

int main()
{
	A();

	return 0;
}