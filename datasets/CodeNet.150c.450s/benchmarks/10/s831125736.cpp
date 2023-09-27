/*
 * OfficialHouse.cpp
 *
 *  Created on: 2014/07/24
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define FLOOR_NUM	(3)
#define HOUSE_NUM	(4)
#define ROOM_NUM	(10)

typedef struct {
	int iHouseNo;
	int iFloorNo;
	int iRoomNo;
	int iPersonNum;
} S_HouseInfo;

typedef unsigned int u_int;

class C_HouseInfo {
private:
	vector<S_HouseInfo> m_vecHouseInfo;
	map<int, vector<int> > m_mapFloorInfo;
public:
	void SetHouseInfo(vector<S_HouseInfo> a_vecHouseInfo);
	vector<map<int, pair<int, int> > > GetMapFloorInfo(int a_iHouseNo);
};

int main(void) {

	int iInfoNum = 0;
	cin >> iInfoNum;	// 情報数

	vector<S_HouseInfo> vecHouseInfo;
	for (u_int i = 0; i < iInfoNum; i++) {
		S_HouseInfo HouseData;
		int iHouseNo = 0;	// b棟
		int iFloorNo = 0;	// f階
		int iRoomNo = 0;	// r番目
		int iPersonNum = 0;	// v人
		cin >> iHouseNo >> iFloorNo >> iRoomNo >> iPersonNum;
		HouseData.iHouseNo = iHouseNo;
		HouseData.iFloorNo = iFloorNo;
		HouseData.iRoomNo = iRoomNo;
		HouseData.iPersonNum = iPersonNum;
		vecHouseInfo.push_back(HouseData);
	}

	C_HouseInfo HouseData;
	HouseData.SetHouseInfo(vecHouseInfo);


	for (int k = 0; k < HOUSE_NUM; k++) {
		vector<map<int, pair<int, int> > > vecMapInfo = HouseData.GetMapFloorInfo(k+1);

		map<int, vector<int> > Map;
		for (int i = 0; i < FLOOR_NUM; i++) {
			vector<int> tmp(ROOM_NUM, 0);
			for (int j = 0; j < vecMapInfo.size(); j++) {
				map<int, pair<int, int> > map = vecMapInfo.at(j);

				pair<int, int> pair = map[i + 1];
				tmp[pair.first - 1] += pair.second;
			}
			Map[i] = tmp;
		}

		for (u_int i = 0; i < FLOOR_NUM; i++) {
			vector<int> tmp = Map[i];
			for (int j = 0; j < tmp.size(); j++) {
				cout << " " << tmp.at(j);
			}
			cout << endl;
		}
		if (k != HOUSE_NUM - 1) {
			cout << "####################" << endl;
		}
	}


	return 0;
}

void
C_HouseInfo::SetHouseInfo(vector<S_HouseInfo> a_vecHouseInfo) {
	m_vecHouseInfo = a_vecHouseInfo;
}

vector<map<int, pair<int, int> > >
C_HouseInfo::GetMapFloorInfo(int a_iHouseNo) {

	vector<map<int, pair<int, int> > > vecMapInfo;
	for (int i = 0; i < m_vecHouseInfo.size(); i++) {

		map<int, pair<int, int> > mapResidenceInfo;
		S_HouseInfo HouseInfo = m_vecHouseInfo.at(i);
		if (a_iHouseNo == HouseInfo.iHouseNo) {
			mapResidenceInfo[HouseInfo.iFloorNo] = make_pair(HouseInfo.iRoomNo, HouseInfo.iPersonNum);
			vecMapInfo.push_back(mapResidenceInfo);
		}
	}
	return vecMapInfo;
}