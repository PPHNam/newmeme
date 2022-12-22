#include "Danhmuc.h"

Danhmuc::Danhmuc()
{
	name = " ";
}
Danhmuc::Danhmuc(string name)
{
	this->name = name;
}
Danhmuc::Danhmuc(const Danhmuc& tmp)
{
	this->name = tmp.name;
}
Danhmuc::~Danhmuc()
{

}
void Danhmuc::setName(string name)
{
	this->name = name;
}

string Danhmuc::getName()
{
	return this->name;
}
void Danhmuc::Nhap()
{
	cout << "Nhap ten danh muc: ";
	getline(cin, this->name, '\n');
}
void Danhmuc::Xuat()
{
	cout << "Ten Danh Muc: " << this->name << endl;
}