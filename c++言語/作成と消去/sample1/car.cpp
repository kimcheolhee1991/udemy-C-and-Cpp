#include "car.h"
#include <iostream>

using namespace std;

//  コンストラクタ
CCar::CCar() : m_fuel(0), m_migration(0)
{
	cout << "CCar create" << endl;
}
//  デストラクタ
//処理が終わる時自動で呼ばれる生成されたコンストラクタを破棄する
CCar::~CCar()
{
	cout << "CCar delete" << endl;
}
void CCar::move()
{
	//  燃料があるなら移動
	if (m_fuel > 0) {
		m_migration++;  //  距離移動
		m_fuel--;       //  燃料消費
	}
	cout << "move :" << m_migration << endl;
	cout << "fuel : " << m_fuel << endl;
}
//  燃料補給メソッド
void CCar::supply(int fuel)
{
	if (fuel >= 0) {
		m_fuel += fuel; //  燃料補給
	}
	cout << "fuel" << m_fuel << endl;
}