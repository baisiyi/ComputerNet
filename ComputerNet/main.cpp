#include<iostream>
#include"addE.h"
#include"addV.h"
#include"del.h"
#include"print.h"
#include"read.h"
#define N 100

int main() {
	int length = 9, chart[N][N];//length为数组长度，chart为网络图转化的二维数组
	int a;
	cout << "		控制菜单" << endl;
	cout << "输入1输出路由表			输入2增加" << endl;
	cout << "输入3删除			输入4结束" << endl;
	cout << "输入数字：";
	ReadFile(chart, length);
	while (cin >> a) {
		int b, c;
		switch (a) {
		case (1): {
			PrintRoute(chart, length);
			break;
		}
		case (2): {
			cout << "增加指定边输入1     	增加指定点输入2	       返回上一级输入3" << endl;
			cout << "增加函数输入数字：";
			cin >> b;
			if (b == 1) {
				AddEdag(chart);
				PrintRoute(chart, length);
			}
			else if (b == 2) {
				length = AddVertex(chart, length);
				PrintRoute(chart, length);
			}
			else if (b == 3) {
				break;
			}
			break;

		}
		case (3): {
			cout << "删除指定边输入1	    删除指定点输入2       返回上一级输入3" << endl;
			cout << "删除函数输入数字：";
			cin >> c;
			if (c == 1) {
				DeleteEdge(chart);
				PrintRoute(chart, length);
			}
			else if (c == 2) {
				cout << chart[0][8] << endl;
				length = DeleteVertex(chart, length);
				PrintRoute(chart, length);
			}
			else if (c == 3) {
				break;
			}
			break;
		}
		case (4): {
			cout << "感谢使用" << endl;
			return 0;
		}
		}
		cout << endl << "输入数字：";
	}
	cout << "感谢使用1" << endl;
	cout << endl;
	system("pause");
	cout << endl;
	return 0;
}
