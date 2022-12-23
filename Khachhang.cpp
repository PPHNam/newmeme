#include "Khachhang.h"

Khachhang::Khachhang()
{
	name = " ";
	email = " ";
	addr = " ";
	gender = true;
	dob = " ";
}
Khachhang::Khachhang(string name, string email, string addr, bool gender, string dob, Giohang giohang, Donhang donhang)
{
	this->name = name;
	this->email = email;
	this->addr = addr;
	this->gender = gender;
	this->dob = dob;
	this->giohang = giohang;
	this->donhang = donhang;
}

Khachhang::Khachhang(const Khachhang& tmp)
{
	this->name = tmp.name;
	this->email = tmp.email;
	this->addr = tmp.addr;
	this->gender = tmp.gender;
	this->dob = tmp.dob;
	this->giohang = tmp.giohang;
	this->donhang = tmp.donhang;
}
Khachhang::~Khachhang()
{

}
void Khachhang::Nhap()
{
	cout << "Nhap ten Khach hang: ";
	getline(cin, this->name, '\n');
	cout << "Nhap dia chi email: ";
	getline(cin, this->email, '\n');
	cout << "Nhap dia chi giao hang: ";
	getline(cin, this->addr, '\n');
	cout << "Nhap gioi tinh: 0 la nu, con lai la Nam ";
	int t;
	cin >> t;
	if (t != 1 && t != 0)
		t = 1;
	this->gender = t;
	cin.ignore();
	cout << " Nhap ngay thang nam sinh: ";
	getline(cin, this->dob, '\n');
	//cout << "Nhap gio hang: ";
	//this->giohang.Nhap();
	//cout << "Nhap don hang: ";
	//this->donhang.Nhap();
}
void Khachhang::Xuat()
{
	cout << "Ten khach hang: " << this->name << endl;
	cout << "Dia chi email: " << this->email << endl;
	cout << "Dia chi giao hang: " << this->addr << endl;
	cout << "Gioi tinh: "; 
	if (this->gender == 0)
		cout << "Nu" << endl;
	else
		cout << "Nam" << endl;
	cout << "Ngay thang nam sinh: " << this->dob << endl;
	cout << "Gio hang hien co: ";
	this->giohang.Xuat();
	cout << "Don hang hien co: ";
	this->donhang.Xuat();
}

string Khachhang::getDOB()
{
	return this->dob;
}

Giohang Khachhang::getGiohang()
{
	return this->giohang;
}
Donhang Khachhang::getDonhang()
{
	return this->donhang;
}

void Khachhang::setGiohang(Giohang gh)
{
	this->giohang = gh;
}
void Khachhang::setDonhang(Donhang dh)
{
	this->donhang = dh;
}

string Khachhang::getName()
{
	return this->name;
}
string Khachhang::getAddr()
{
	return this->addr;
}