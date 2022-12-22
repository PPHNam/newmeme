#include "QuanLy.h"

int main()
{
	vector<Sanpham> list;
	handleFile(list);
	for (int i = 0; i < list.size(); i++)
	{
		list[i].Xuat();
	}
}