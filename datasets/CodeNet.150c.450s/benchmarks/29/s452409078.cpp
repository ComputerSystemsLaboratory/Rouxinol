#include <iostream>
#include <string>
#include <list>
#include <cassert>


struct Proc{
	std::string meirei;
	int value;
};
typedef std::list<int> IList;

void input(IList& ilist);
int output(const IList& vec);
void calc(IList&ilist, Proc& command);
 
int main()
{
    std::cin.tie(0);//??\??????????????????
    std::ios::sync_with_stdio(false);
    IList result;
    input(result);
    output(result);
    return 0;
}
///--------------------------------------------
void input(IList& ilist)
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        Proc command;
        std::cin >> command.meirei;
        if((command.meirei == "insert")||( command.meirei == "delete")){
        	std::cin >> command.value;
		}
		calc(ilist, command);
    }
}
        
void calc(IList&ilist, Proc& command)
{

    if( command.meirei == "deleteFirst"){
        ilist.pop_front();
        // ilist.erase(ilist.begin());
    }else if(command.meirei == "deleteLast"){
        ilist.pop_back();
    }else if(command.meirei =="insert"){
            //???????????????
            ilist.insert(ilist.begin(), command.value);
    }else{//??????
        for(auto itr = ilist.begin(); itr != ilist.end(); ++itr){
            if(*itr == command.value){
	            ilist.erase(itr);
                break;
            }
        }
    }

}
///--------------------------------------------
int output(const IList& intlist)
{
    for(auto itr = intlist.begin(); itr != intlist.end(); ++itr){
        if(itr != (intlist.begin())){
            std::cout << " "  ;
        }
        std::cout << *itr;
    }
    std::cout << std::endl;
    return 0;
}