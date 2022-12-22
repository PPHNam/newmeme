#pragma once
#include <cstring>
#include <string>
#include <iostream>
#include "Giohang.h"
#include "Donhang.h"
using namespace std;

class Khachhang {
	string name;
	string email;
	string addr;
	bool gender;
	string dob;
	Giohang giohang;
	Donhang donhang;
public:
	Khachhang();
	Khachhang(string name, string email, string addr, bool gender, string dob, Giohang giohang, Donhang donhang);
	Khachhang(const Khachhang& tmp);
	~Khachhang();
	void Nhap();
	void Xuat();
};