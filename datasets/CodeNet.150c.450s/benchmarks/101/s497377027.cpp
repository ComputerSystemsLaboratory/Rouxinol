#include <iostream>
#include <list>
#include <string>
#include <vector>

class TUser
{
	std::list<TUser*> FFriends;
	int FGroupIndex;
public:
	TUser();
	
	void AddFriend(TUser* Friend);
	bool InviteFriends(int GroupIndex);
	int GroupIndex()const {return FGroupIndex;}
};

TUser::TUser()
:FGroupIndex(0)
{
}

void TUser::AddFriend(TUser* Friend)
{
	FFriends.push_back(Friend);
}

bool TUser::InviteFriends(int GroupIndex)
{
	if(FGroupIndex > 0) return false;
	FGroupIndex = GroupIndex;
	for(std::list<TUser*>::iterator It = FFriends.begin(); It != FFriends.end(); ++It){
		(*It)->InviteFriends(GroupIndex);
	}
	return true;
}

class TSns
{
	std::vector<TUser> FUsers;
public:
	TSns(int UserCount);
	
	void MakeGroups();
	void AddLink(int UserA, int UserB);
	std::string IsAccesible(int UserA, int UserB)const;
};
 
TSns::TSns(int UserCount)
: FUsers(UserCount)
{
}
 
void TSns::AddLink(int UserA, int UserB)
{
	FUsers[UserA].AddFriend(&FUsers[UserB]);
	FUsers[UserB].AddFriend(&FUsers[UserA]);
}

void TSns::MakeGroups()
{
	int GroupIndex = 1;
	for(unsigned int i = 0; i < FUsers.size(); ++i){
		if(FUsers[i].InviteFriends(GroupIndex)) ++GroupIndex;
	}
}

std::string TSns::IsAccesible(int UserA, int UserB)const
{
	if(FUsers[UserA].GroupIndex() == FUsers[UserB].GroupIndex()) return "yes";
	return "no";
}

int main()
{
	int UserCount;
	std::cin >> UserCount;
	TSns Sns(UserCount);
	
	int LinkCount;
	std::cin >> LinkCount;
	for(int i = 0; i < LinkCount; ++i){
		int UserA, UserB;
		std::cin >> UserA >> UserB;
		Sns.AddLink(UserA, UserB);
	}
	
	Sns.MakeGroups();
	
	int QuestionCount;
	std::cin >> QuestionCount;
	for(int i = 0; i < QuestionCount; ++i){
		int UserA, UserB;
		std::cin >> UserA >> UserB;
		std::cout << Sns.IsAccesible(UserA, UserB) << std::endl;
	}
	return 0;
}