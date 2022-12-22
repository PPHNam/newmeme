#include "Magiamgia.h"

Magiamgia::Magiamgia()
{
	name = " ";
	loaigiamgia = 0;
	phantramgiam = 0;
	tientoida = 0;
}
Magiamgia::Magiamgia(string name, int loaigiamgia, int phantramgiam, int tientoida)
{
	this->name = name;
	this->loaigiamgia = loaigiamgia;
	this->phantramgiam = phantramgiam;
	this->tientoida = tientoida;
}
Magiamgia::Magiamgia(const Magiamgia& tmp)
{
	this->name = tmp.name;
	this->loaigiamgia = tmp.loaigiamgia;
	this->phantramgiam = tmp.phantramgiam;
	this->tientoida = tmp.tientoida;
}
Magiamgia::~Magiamgia() {}

string Magiamgia::getName()
{
	return this->name;
}
void Magiamgia::Nhap()
{
	cout << "Nhap Ten ma giam gia: ";
	getline(cin, this->name, '\n');
	cout << "Nhap loai giam gia:\n 0: Toan San Thuong Mai\n 1: Theo Danh muc\n2: Sinh nhat\nMoi Nhap: ";
	do
	{
		cin >> this->loaigiamgia;
		if (this->loaigiamgia != 0 && this->loaigiamgia != 1 && this->loaigiamgia != 2)
		{
			cout << "Sai cu phap, moi nhap lai: ";
		}
	} while (this->loaigiamgia != 0 && this->loaigiamgia != 1 && this->loaigiamgia != 2);
	cout << "Nhap phan tram giam: ";
	cin >> this->phantramgiam;
	if (this->phantramgiam > 100)
		this->phantramgiam = 100;
	else if (this->phantramgiam < 0)
		this->phantramgiam = 0;
	cout << "Nhap so tien toi da duoc giam: ";
	cin >> this->tientoida;
	cin.ignore();
}
void Magiamgia::Xuat()
{
	cout << "Ten ma giam gia" << this->name << endl;
	cout << "Loai giam gia: ";
	if (this->loaigiamgia == 0)
		cout << "Toan San Thuong Mai" << endl;
	else if (this->loaigiamgia == 1)
		cout << "Theo danh muc" << endl;
	else
		cout << "Sinh Nhat" << endl;
	cout << "So tien phan tram giam: " << this->phantramgiam << endl;
	cout << "So tien toi da duoc giam: " << this->tientoida << endl;
}

int Magiamgia::getLoai()
{
	return this->loaigiamgia;
}
int Magiamgia::getPhantram()
{
	return this->phantramgiam;
}
int Magiamgia::getTientoida()
{
	return this->tientoida;
}