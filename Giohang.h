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
	void Nhap();
	void Xuat();
};