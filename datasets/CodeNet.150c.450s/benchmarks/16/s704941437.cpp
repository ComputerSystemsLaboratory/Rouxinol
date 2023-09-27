#pragma hdrstop
#pragma argsused

#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

typedef std::vector<int> TIntVector;

namespace Ground
{
enum TGroundShape
{
	gsUp,
	gsFlat,
	gsDown
};

typedef std::vector<TGroundShape> TGroundShapes;

TGroundShape CharToShape(char Shape)
{
	if(Shape == '/') return gsUp;
	if(Shape == '_') return gsFlat;
	return gsDown;
}




void Input(TGroundShapes& ShapeList)
{
	std::string GroundString;
	std::cin >> GroundString;

	for(unsigned int i=0;i<GroundString.length();i++)
	{
		ShapeList.push_back(CharToShape(GroundString[i]));
	}
}

void CreateHeightList(TIntVector& HeightList,const TGroundShapes& ShapeList)
{
	int Height = 0;
	HeightList.push_back(Height);

	for(unsigned int i=0;i<ShapeList.size();i++)
	{
		switch(ShapeList[i])
		{
			case gsUp   : Height++;break;
			case gsDown : Height--;break;
			default     : break;
		}
		HeightList.push_back(Height);
	}
}
};//namespace Ground

struct TMountain
{
	int Position;
	int Height;

public:
	TMountain(int APosition,int AHeight);
};

TMountain::TMountain(int APosition,int AHeight)
{
	Position = APosition;
	Height   = AHeight;
}

bool IsHighSecondMountain(const TMountain& First,const TMountain& Second)
{
	return (First.Height < Second.Height);
}

typedef std::vector<TMountain> TMountains;

void CreateMountains(TMountains& MountainList,const Ground::TGroundShapes& ShapeList,const TIntVector& HeightList)
{
	bool IsClimbing = true;
	for(unsigned int i=0;i<ShapeList.size();i++)
	{
		switch(ShapeList[i])
		{
			case Ground::gsUp   : IsClimbing = true;break;
			case Ground::gsDown : if(IsClimbing) MountainList.push_back(TMountain(i,HeightList[i] ));
								  IsClimbing = false;break;
			default             : break;
		}
	}
	if(IsClimbing) MountainList.push_back(TMountain(ShapeList.size(),HeightList[ShapeList.size()]));
}

enum ScanDirection
{
	sdFront,
	sdBack
};

int MeasureLake(const TIntVector& HeightList,int Edge,ScanDirection Direction)
{
	int Vector = Direction == sdFront ? 1 : -1;
	const int LakesideHeight = HeightList[Edge];
	int Position = Edge + Vector;
	int Size = 0;
	while(Size == 0 || HeightList[Position] < LakesideHeight)
	{
		Size += 2 * LakesideHeight - HeightList[Position] - HeightList[Position - Vector];
		Position += Vector;
	}
	return (Size + 1)/2;
}

typedef std::deque<int> TLakes;

int GetTotal(const TLakes& ALakes)
{
	TLakes Lakes = ALakes;
	int Size = 0;
	for(unsigned int i= 0;i<ALakes.size();i++)
	{
		Size += Lakes.front();
		Lakes.pop_front();
	}
	return Size;
}

int main()
{
	Ground::TGroundShapes ShapeList;
	Ground::Input(ShapeList);
	TIntVector HeightList;
	Ground::CreateHeightList(HeightList,ShapeList);

	TMountains MountainList;
	CreateMountains(MountainList,ShapeList,HeightList);

	TMountains::iterator Highest = std::max_element(MountainList.begin(),MountainList.end(),&IsHighSecondMountain);
	int Distance = std::distance(MountainList.begin(),Highest);

	TLakes Lakes;

	while(Highest != MountainList.end() - 1)
	{
		Highest = std::max_element(Highest+1,MountainList.end(),IsHighSecondMountain);
		Lakes.push_back(MeasureLake(HeightList,(*Highest).Position,sdBack));
	}

	std::reverse(MountainList.begin(),MountainList.end());
	Highest = MountainList.end() - Distance - 1;

	while(Highest != MountainList.end()-1)
	{
		Highest = std::max_element(Highest+1,MountainList.end(),IsHighSecondMountain);
		Lakes.push_front(MeasureLake(HeightList,(*Highest).Position,sdFront));
	}

	std::cout << GetTotal(Lakes) << std::endl;
	int LakeCount = Lakes.size();
	std::cout << LakeCount << std::flush;
	for(int i=0;i<LakeCount;i++)
	{
		std::cout << " " << std::flush;
		std::cout << Lakes.front() << std::flush;
		Lakes.pop_front();
	}

	std::cout << std::endl;

	std::cin >> Lakes.front();
	return 0;
}