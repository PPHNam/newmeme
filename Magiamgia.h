#pragma once
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Magiamgia {
	string name;
	int loaigiamgia; //0 1 2
	int phantramgiam;
	int tientoida;
public:
	Magiamgia();
	Magiamgia(string, int, int, int);
	Magiamgia(const Magiamgia& tmp);
	~Magiamgia();
	string getName();
	int getLoai();
	int getPhantram();
	int getTientoida();
	void Nhap();
	void Xuat();
};