#include <iostream>
#include "sample.cpp"

using namespace std;

int main()
{
	CSample obj;  // CSampleをインスタンス化
	int num;

	// cout << "整数を入力して下さい:";
	cout << "input number:";
	cin >> num;


	obj.set(num);  // CSampleのメンバ変数をセット
	cout << obj.get() << endl;  // メンバ変数の値を出力

	return 0;
}