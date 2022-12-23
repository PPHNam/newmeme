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
	string getMadon();
	void setMaDon(string name);
	void setDonhang(const Sanpham& tmp);
	void setDS(vector <Sanpham> list);
	void setThanhtoan(int tien);
	void setSoluong(int num);
	void setTienhang(int num);
	void Nhap();
	void Xuat();
};