#include "addV.h"

int AddVertex(int chart[][100], int length)
{
	int n, num, m;
	num = length;
	cout << "当前节点数目为：" << num << endl;
	n = num;
	chart[num][num] = 0;
	while (num) {
	loop:
		cout << "请输入新节点与节点" << num << "的距离（输入值大于0，若不相连输入100）：" << endl;
		cin >> m;
		if (m == 0) { cout << "输入错误" << endl; goto loop; }
		else {
			--num;
			chart[n][num] = m;
			chart[num][n] = chart[n][num];
		}
	}
	length = length + 1;
	return length;
}