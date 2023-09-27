#include <iostream>
#include <vector>
#include <string>
using namespace std;
//---------------------------------------------------------------------------

//??§?¨?
struct TPosition{
    int x;
    int y;
};

struct TSection{
	int Start;
	int End;
};

void RemoveExtraStr(string& str);	//????????????????????????
void GetHeight(vector<int>& List, string str);  //?????????????????????
void GetMtList(vector<int>& List, vector<TPosition>& MtList);   //?±±???????????????
TSection GetSection(vector<TPosition>& MtList, int Index);	//????????????Index??????????????§?????????????±±??????????????????
void GetSectionList(vector<TSection>& List, vector<TPosition>& MtList); //???????????????
int GetMenseki(int Start, int End, vector<int>& HeightList); //??¢????????????

//-----------------------------------------------------------------
//????????????????????????
void RemoveExtraStr(string& str)
{
    string temp;
    temp = str;
    int Start = 0;
    int End = str.size() - 1;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '\\'){
            Start = i;
            break;
        }
    }
    
    for(int j = temp.size() - 1; j >= 0; j--){
        if(temp[j] == '/'){
            End = j;
            break;
        }
    }
    temp = str.substr(Start, End - Start + 1);
    str = temp;
}
//-----------------------------------------------------------------

//?????????????????????
void GetHeight(vector<int>& List, string str)
{
    List.clear();
    int Height = 0;
    
    for(int i = 0; i < str.size(); i++){
        List.push_back(Height);

        if(str[i] == '/'){
            Height++;
        } else if(str[i] == '\\'){
            Height--;
        }
        if(i == str.size() - 1){
            List.push_back(Height);
        }
    }
}
//-----------------------------------------------------------------

//?±±???????????????
void GetMtList(vector<int>& List, vector<TPosition>& MtList)
{
    MtList.clear();
	TPosition Zahyo;
	Zahyo.x = 0;
	Zahyo.y = 0;
	bool Up = true;

	for(int i = 0; i < List.size(); i++){
		Zahyo.x = i;
		Zahyo.y = List[i];

		if(Up == true && List[i] > List[i+1]){
			MtList.push_back(Zahyo);
			Up = false;
		} else if(Up == false && List[i] < List[i+1]){
			Up = true;
		} else if(Up == true && i == List.size() - 1){
			MtList.push_back(Zahyo);
		}
    }
}
//-----------------------------------------------------------------

//????????????Index??????????????§?????????????±±??????????????????
TSection GetSection(vector<TPosition>& MtList, int Index)
{
	int MaxHeight = MtList[Index + 1].y;
    
	for(int i = Index + 1; i < MtList.size(); i++){
		if(MaxHeight < MtList[i].y)   MaxHeight = MtList[i].y;
	}
	
	int TargetHeight = MaxHeight;
	if(MaxHeight > MtList[Index].y){
	    for(int i = Index + 1; i < MtList.size(); i++){
	        if(MtList[Index].y <= MtList[i].y){
	            TargetHeight = MtList[i].y;
	            break;
	        }
	    }
	}
    
	TSection Section;
	Section.Start = MtList[Index].x;
    for(int j = Index + 1; j < MtList.size(); j++){
        if(TargetHeight == MtList[j].y){
			Section.End = MtList[j].x;
            return Section;
        }
    }
}
//-----------------------------------------------------------------

//??¢????????????
int GetMenseki(int Start, int End, vector<int>& HeightList)
{
	bool Calculate = false;
	int Menseki = 0;
	int halfcount = 0;
    int Height = 0;
	int MaxHeight;
	
	if(HeightList[Start] <= HeightList[End]){
		MaxHeight = HeightList[Start];
	} else{
		MaxHeight = HeightList[End];
	}
	
    for(int i = Start; i <= End; i++){
    	if(HeightList[i] == MaxHeight && HeightList[i] > HeightList[i+1] && Calculate == false){
			Calculate = true;
			Height = 0;
			continue;
		} else if(HeightList[i] == MaxHeight && Calculate == true){
    		Calculate = false;
    		break;
    	}
    	
    	if(Calculate == true){
        	if(HeightList[i-1] != HeightList[i]){
            	halfcount++;
            	if(HeightList[i-1] < HeightList[i]){
                	Menseki += Height * (-1);
                	Height++;
				} else if(HeightList[i-1] > HeightList[i]){
                	Height--;
                	Menseki += Height * (-1);
            	}
        	} else{
            	Menseki += Height * (-1);
        	}
		}
    }
    halfcount /= 2;
    Menseki = Menseki - halfcount;
    return Menseki;
}
//-----------------------------------------------------------------

int main(int argc, char* argv[])
{
    string str;
    std::cin >> str;

	//????????????????????????
	RemoveExtraStr(str);

	//?????????????????????
    vector<int> HeightList;
	GetHeight(HeightList, str);

    //?±±???????????????
    vector<TPosition> MtList;
    GetMtList(HeightList, MtList);
	
	if(MtList.size() < 2){
		cout << 0 << endl;
		cout << 0 << endl;
		return 0;
	}

	vector<TSection> SectionList;
	SectionList.clear();
	
	for(int i = 0; i < MtList.size(); i++){
		TSection Temp;
		Temp = GetSection(MtList, i);
		SectionList.push_back(Temp);
		int Index = 0;
		for(int j = 0; j < MtList.size(); j++){
			if(Temp.End == MtList[j].x){
				Index = j;
			}
		}
		if(Index == MtList.size() - 1)	break;
		i = Index - 1;
	}

	int TotalMenseki = 0;
	vector<int> MensekiList;
	MensekiList.clear();
	for(int i = 0; i < SectionList.size(); i++){
		int Menseki;
		Menseki = GetMenseki(SectionList[i].Start, SectionList[i].End, HeightList);
		MensekiList.push_back(Menseki);
	}

	for(int i = 0; i < MensekiList.size(); i++){
		TotalMenseki += MensekiList[i];
	}
    
	cout << TotalMenseki << endl;
	
	cout << MensekiList.size();
	for(int i = 0; i < MensekiList.size(); i++){
		cout << " ";
		cout << MensekiList[i];
	}
	cout << endl;
}