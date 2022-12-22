#include "QuanLy.h"

// Xu ly phan nhap
void handleFile(vector <Sanpham> &list)
{
	fstream fs;
	fs.open("list.txt");
	while (!fs.eof())
	{
		Sanpham tmp;
		string name;
		string loaisp;
		int gia;
		int soluong;
		getline(fs, name, '\n');
		getline(fs, loaisp, '\n');
		fs >> gia;
		fs.get();
		fs >> soluong;
		tmp.setName(name);
		tmp.setGia(gia);
		tmp.setSoluong(soluong);
		tmp.setDanhmuc(loaisp);
		list.push_back(tmp);
	}
	fs.close();
	
}