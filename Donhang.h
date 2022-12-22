#pragma once
#include <cstring>
#include <string>
#include <iostream>
#include "Sanpham.h"
#include <vector>
using namespace std;

class Donhang {
	string madonhang;
	vector <Sanpham> list;
	int num;
	int tienhang;
	int thanhtoan;
	string day;
public:
	Donhang();
	Donhang(string, vector <Sanpham>, int, int, int, string);
	Donhang(const Donhang& tmp);
	~Donhang();
	void setDonhang(const Sanpham& tmp);
	void setThanhtoan(int tien);
	void Nhap();
	void Xuat();
};