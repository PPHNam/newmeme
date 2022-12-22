#include "Sanpham.h"

Sanpham::Sanpham()
{
	name = " ";
	gia = 0;
	soluong = 0;
}
Sanpham::Sanpham(string name, Danhmuc loaisp, int gia, int soluong)
{
	this->name = name;
	this->loaisp = loaisp;
	this->gia = gia;
	this->soluong = soluong;
}
Sanpham::Sanpham(const Sanpham& tmp)
{
	this->name = tmp.name;
	this->loaisp = tmp.loaisp;
	this->gia = tmp.gia;
	this->soluong = tmp.soluong;
}
Sanpham::~Sanpham()
{
	
}
int Sanpham::getGia()
{
	return this->gia;
}
void Sanpham::Nhap()
{
	cout << "Nhap ten san pham: ";
	getline(cin, this->name, '\n');
	cout << "Loai san pham: ";
	this->loaisp.Nhap();
	cout << "Nhap gia tien: ";
	cin >> this->gia;
	cout << "So luong: ";
	cin >> this->soluong;
	cin.ignore();
}
void Sanpham::Xuat()
{
	cout << "Ten san pham: " << this->name << endl;
	cout << "Loai San pham: "; this->loaisp.Xuat();
	cout << "Gia: " << this->gia << endl;
	cout << "So Luong: " << this->soluong << endl;
}

void Sanpham::setSoluong(int t)
{
	this->soluong = t;
}

void Sanpham::setName(string name)
{
	this->name = name;
}
void Sanpham::setGia(int gia)
{
	this->gia = gia;
}
void Sanpham::setDanhmuc(string name)
{
	this->loaisp.setName(name);
}