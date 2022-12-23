#pragma once
#include <cstring>
#include <string>
#include <iostream>
#include "Sanpham.h"
#include <vector>
using namespace std;

class Giohang {
	vector <Sanpham> list;
	int num;
	int tienhang;
	int thanhtoan;
public:
	Giohang();
	Giohang(vector<Sanpham> list, int num, int tienhang, int thanhtoan);
	Giohang(const Giohang& tmp);
	~Giohang();
	vector <Sanpham> getSP();
	void themSanpham(Sanpham sp);
	int getSL();
	int getTienhang();
	int getThanhtoan();
	Sanpham getSanpham(int pos);
	void setSoluong(int num);
	void setTienhang(int num);
	void setThanhtoan(int num);
	void CapNhatTienhang();
	void Nhap();
	void Xuat();
};