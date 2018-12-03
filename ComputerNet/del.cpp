#include "del.h"

int DeleteVertex(int chart[][100], int length)
{
	int n, num, i, j;
	num = length;
	cout << "当前节点数目为：" << num << endl;
	cout << "请输入删除节点名：";
	cin >> n;
	cout << chart[0][8] << endl;
	n -= 1;
	for (i = 0; i < num; ++i) {//列的移动
		for (j = n; j < num; j++) {
			chart[i][j] = chart[i][j + 1];
		}
	}
	for (i = n; i < num; i++) {//行的移动
		for (j = 0; j < num; j++) {
			chart[i][j] = chart[i + 1][j];
		}
	}
	for (int i = 0; i <= length - 1; i++)chart[i][length - 1] = chart[10][10];
	for (int i = 0; i <= length - 1; i++)chart[length - 1][i] = chart[10][10];
	cout << chart[0][7];
	length = length - 1;
	return length;
}
void DeleteEdge(int chart[][100])
{
	int st, end;
	cout << "请输入边的任意一个节点：";
	cin >> st;
	cout << "请输入另一节点值：";
	cin >> end;
	--st;
	--end;
	cout << "删除成功" << endl;
	chart[st][end] = 100;
	chart[end][st] = chart[st][end];
	cout << endl;
}
