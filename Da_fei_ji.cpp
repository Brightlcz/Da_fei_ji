// Da_fei_ji.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	int i, j;
	int x = 10;
	int y = 5;
	char input;
	int isfire = 0;
	int ny = 5;
	int iskilled = 0;
	while (1)
	{

		system("cls"); //清屏
		if (iskilled == 0) 
		{
			for (i = 0; i < ny; i++)
			{
				cout << " ";
			}
			cout << "+" << endl;//画靶子
		}


		if (isfire == 0)//不射击
		{
			for (i = 0; i < x; i++)
			{
				cout << endl;
			}

		}
		else//开始射击
		{
			for (i = 0; i < x; i++)
			{
				for (j = 0; j < y; j++)
				{
					cout << " ";
				}
				cout << "  |";//输出子弹
				cout << endl;
			}
			if (y + 2 == ny)//判断是否击中
			{
				iskilled = 1;
			}
			isfire = 0;
		}

		for (j = 0; j < y; j++)  //以下是画飞机
		{
			cout << " ";
		}

		cout << "  *" << endl; //前面有y+2个 空格

		for (j = 0; j < y; j++)
		{
			cout << " ";
		}

		cout << "*****" << endl;

		for (j = 0; j < y; j++)
		{
			cout << " ";
		}
		cout << " * *" << endl;

		input = _getch();
		
		if (input == 'w')
			x--;
		if (input == 's')
			x++;

		if (input == 'a')
			y--;
		if (input == 'd')
			y++;
		if (input == ' ')
			isfire = 1;//射击标准

	}
	system("pause");
    return 0;
}

