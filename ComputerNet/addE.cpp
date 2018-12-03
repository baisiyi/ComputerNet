#include "addE.h"

void AddEdag(int chart[][100])
{
	int st, end;
	cout << "请输入边的任意一个节点：" << endl;
	cin >> st;
	cout << "请输入另一节点值：" << endl;
	cin >> end;
	--st;
	--end;
	cout << "输入权重：" << endl;
	cin >> chart[st][end];
	chart[end][st] = chart[st][end];
	cout << chart[st][end] << endl;
}
