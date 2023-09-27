#include <iostream>
#include <string>
#include <list>
#include <cassert>

typedef std::list<int> IList;

void input(IList& ilist);
int output(const IList& vec);
// IList calc(const PList& vec);

int main()
{
    std::cin.tie(0);//??\??????????????????
    std::ios::sync_with_stdio(false);
    IList result;
    input(result);
// 	IList ovec = calc(ivec);
    output(result);
    return 0;
}
///--------------------------------------------
void input(IList& ilist)
{
    int n;
    std::cin >> n;
//    list.resize(n);
    for(int i = 0; i < n; i++){
        std::string meirei;
        std::cin >> meirei;
        
        if( meirei == "deleteFirst"){
            ilist.pop_front();
            // ilist.erase(ilist.begin());
        }
        else if(meirei == "deleteLast"){
            ilist.pop_back();
        }else{
            int value;
            std::cin >> value;
            if(meirei =="insert"){
                //???????????????
                ilist.insert(ilist.begin(), value);
        //        ilist.push_back(value);
            }else{//??????
                for(auto itr = ilist.begin(); itr != ilist.end(); ++itr){
                    if(*itr == value){
			            ilist.erase(itr);
                        break;    
                    }
                }
            }
        }
    }
    // output(ilist);
}
///--------------------------------------------
int output(const IList& intlist)
{
    for(auto itr = intlist.begin(); itr != intlist.end(); ++itr){
        if(itr != (intlist.begin())){
            std::cout << " "  ;
        }
        std::cout << *itr;               //  itr ????????????????´????????????????????????§ 1 ?????¨???
    }
    std::cout << std::endl;
    return 0;
}
///--------------------------------------------
///@func    calc
///@brif    ??¨????
///--------------------------------------------
/*
IList calc(const PList& ilist)
{
	IList ovec;
//   std::cout << "IList ovec;"<< std::endl;
    for(auto itr = ilist.begin(); itr != ilist.end(); ++itr){
        if(itr->meirei == "insert"){
  //          	std::cout << "ovec.insert"<< std::endl;
            ovec.insert(ovec.begin(), itr->value);
            
        }else if(itr->meirei == "delete"){
            auto otr = ovec.begin();
            for(; otr != ovec.end(); ++otr){
                if(*otr == itr->value){
                    break;
                }
            }
            if(otr != ovec.end()){
				ovec.erase(otr);
//				std::cout << "ovec.erase(otr)"<< std::endl;
            }
        }else if(itr->meirei == "deleteFirst"){
            ovec.erase(ovec.begin());
 //           std::cout << "deleteFirst" << std::endl;
        }else if(itr->meirei == "deleteLast"){
            ovec.pop_back();
 //           std::cout << "deleteLast" << std::endl;
        }else {
            assert(true);
        }
//      output(ovec);
    }
    return ovec;
}

*/