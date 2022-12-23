#include <iostream>
#include "Donhang.h"


Donhang::Donhang()
{
	madonhang = " ";
	num = 0;
	tienhang = 0;
	thanhtoan = 0;
	day = " ";
}
Donhang::Donhang(string name, vector <Sanpham> list, int num, int tienhang, int thanhtoan, string day)
{
	this->madonhang = name;
	this->num = num;
	this->tienhang = tienhang;
	this->thanhtoan = thanhtoan;
	this->day = day;
	for (int i = 0; i < list.size(); i++)
		this->list.push_back(list[i]);
}
Donhang::Donhang(const Donhang& tmp)
{
	this->madonhang = tmp.madonhang;
	this->num = tmp.num;
	this->tienhang = tmp.tienhang;
	this->thanhtoan = tmp.thanhtoan;
	this->day = tmp.day;
	for (int i = 0; i < tmp.list.size(); i++)
		this->list.push_back(tmp.list[i]);
}
Donhang::~Donhang()
{
	this->list.clear();
}
void Donhang::setDonhang(const Sanpham& tmp)
{
	this->list.push_back(tmp);
	this->num += 1;
}
void Donhang::Nhap()
{
	cout << "Nhap ma don hang: ";
	getline(cin, this->madonhang, '\n');
	cout << "Nhap so luong san pham: ";
	cin >> this->num;
	cin.ignore();
	this->tienhang = 0;
	for (int i = 0; i < num; i++)
	{
		cout << "Nhap San pham: ";
		Sanpham product;
		product.Nhap();
		this->list.push_back(product);
		this->tienhang += product.getGia();
	}
	this->thanhtoan = this->tienhang;
}
void Donhang::Xuat()
{
	cout << "Ma don hang: " << this->madonhang << endl;
	cout << "Soluong San pham: " << this->num << endl;
	for (int i = 0; i < num; i++)
	{
		this->list[i].Xuat();
		cout << endl;
	}
	cout << "Tien hang: " << this->tienhang << endl;
	cout << "Tien phai thanh toan: " << this->thanhtoan << endl;
}

void Donhang::setThanhtoan(int tien)
{
	this->thanhtoan = tien;
}

void Donhang::setDS(vector <Sanpham> list)
{
	for (int i = 0; i < list.size(); i++)
		this->list.push_back(list[i]);
}

void Donhang::setSoluong(int num)
{
	this->num = num;
}
void Donhang::setTienhang(int num)
{
	this->tienhang = num;
}
void Donhang::setMaDon(string name)
{
	this->madonhang = name;
}
string Donhang::getMadon()
{
	return this->madonhang;
}