#include "Cuahang.h"

Cuahang::Cuahang()
{
	name = " ";
	day = " ";
}
Cuahang::Cuahang(string name, string day, vector<Sanpham> list)
{
	this->name = name;
	this->day = day;
	for (int i = 0; i < list.size(); i++)
		this->list[i] = list[i];
}
Cuahang::Cuahang(const Cuahang& tmp)
{
	this->name = tmp.name;
	this->day = tmp.day;
	for (int i = 0; i < tmp.list.size(); i++)
		this->list.push_back(tmp.list[i]);
}
Cuahang::~Cuahang()
{
	this->list.clear();
}
void Cuahang::setName(string name)
{
	this->name = name;
}
void Cuahang::setDay(string day)
{
	this->day = day;
}
void Cuahang::setSanpham(vector<Sanpham> list)
{
	for (int i = 0; i < list.size(); i++)
		this->list.push_back(list[i]);
}
void Cuahang::Nhap()
{
	cout << "Nhap ten cua hang: ";
	getline(cin, this->name, '\n');
	cout << "Nhap ngay mua hang: ";
	getline(cin, this->day, '\n');
	cout << "Nhap so luong san pham hien co: ";
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap san pham: ";
		this->list[i].Nhap();
	}
}
void Cuahang::Xuat()
{
	cout << "Ten cua hang: " << this->name << endl;
	cout << "Ngay mua hang: " << this->day << endl;
	cout << "Cac san pham hien co: " << endl;
	for (int i = 0; i < this->list.size(); i++)
	{
		this->list[i].Xuat();
		cout << endl;
	}
}

string Cuahang::getDay()
{
	return this->day;
}