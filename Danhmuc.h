#pragma once
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Danhmuc {
	string name;
public:
	Danhmuc();
	Danhmuc(string name);
	Danhmuc(const Danhmuc& tmp);
	~Danhmuc();
	string getName();
	void setName(string name);
	void Nhap();
	void Xuat();
};