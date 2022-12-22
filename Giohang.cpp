#include "Giohang.h"

Giohang::Giohang()
{
	num = 0;
	tienhang = 0;
	thanhtoan = 0;
}
Giohang::Giohang(vector<Sanpham> list, int num, int tienhang, int thanhtoan)
{
	for (int i = 0; i < list.size(); i++)
	{
		this->list[i] = list[i];
	}
	this->num = num;
	this->tienhang = tienhang;
	this->thanhtoan = thanhtoan;
}
Giohang::Giohang(const Giohang& tmp)
{
	for (int i = 0; i < tmp.list.size(); i++)
	{
		this->list[i] = tmp.list[i];
	}
	this->num = tmp.num;
	this->tienhang = tmp.tienhang;
	this->thanhtoan = tmp.thanhtoan;
}
Giohang::~Giohang()
{
	this->list.clear();
}
void Giohang::Nhap()
{
	cout << "Nhap so luong san pham: ";
	cin >> this->num;
	cin.ignore();
	this->tienhang = 0;
	for (int i = 0; i < this->num; i++)
	{
		Sanpham product;
		cout << "Nhap ten san pham: ";
		product.Nhap();
		this->list.push_back(product);
		this->tienhang += product.getGia();
	}
	this->thanhtoan = this->tienhang;
	
}
void Giohang::Xuat()
{
	cout << "Soluong San pham: " << this->num << endl;
	for (int i = 0; i < num; i++)
	{
		this->list[i].Xuat();
		cout << endl;
	}
	cout << "Tien hang: " << this->tienhang << endl;
	cout << "Tien phai thanh toan: " << this->thanhtoan << endl;
}
