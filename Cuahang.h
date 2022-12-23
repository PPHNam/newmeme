#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include "Sanpham.h"

using namespace std;

class Cuahang {
	string name;
	string day;
	vector<Sanpham> list;
public:
	Cuahang();
	Cuahang(string name, string day, vector<Sanpham> list);
	Cuahang(const Cuahang& tmp);
	~Cuahang();
	void setName(string name);
	void setDay(string day);
	void setSanpham(vector<Sanpham> list);
	void Nhap();
	void Xuat();
	string getDay();
};