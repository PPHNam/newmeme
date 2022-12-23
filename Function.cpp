#include "QuanLy.h"

// Xu ly phan nhap
void handleFile(vector <Sanpham> &list) // Lay thong tin tu file
{
	fstream fs;
	fs.open("list.txt");
	while (!fs.eof())
	{
		Sanpham tmp;
		string name;
		string loaisp;
		int gia;
		int soluong;
		getline(fs, name, '\n');
		getline(fs, loaisp, '\n');
		fs >> gia;
		fs.get();
		fs >> soluong;
		fs.get();
		tmp.setName(name);
		tmp.setGia(gia);
		tmp.setSoluong(soluong);
		tmp.setDanhmuc(loaisp);
		list.push_back(tmp);
	}
	fs.close();
	
}

bool Check(string danhmuc, Sanpham sp) // Kiem tra san pham khi nguoi dung nhap danh muc
{
	if (sp.getTenDanhmuc() == danhmuc)
		return true;
	else
		return false;
}

void handleProduct(Sanpham& sp, Giohang& giohang) // Xu ly khi co san pham nguoi tieu dung muon mua
{
	int choice;
	cout << "Ban co muon mua san pham nay khong, 1 co con lai khong ?" << endl;
	cin >> choice;
	cin.ignore();
	if (choice == 1)
	{
		if (sp.getSoluong() <= 0)
		{
			cout << "Da het san pham!!!!" << endl;
			return;
		}
		else
		{
			int tmp;
			tmp = sp.getSoluong();
			tmp -= 1;
			sp.setSoluong(tmp);
			giohang.themSanpham(sp);
			giohang.setSoluong(giohang.getSL() + 1);
			giohang.CapNhatTienhang();
			giohang.setThanhtoan(giohang.getTienhang());
		}
	}
	else
		cout << "Thoat" << endl;
}

void convertToDH(Donhang& donhang, Giohang giohang) // chuyen tu Giohang sang Donhang
{
	int num = giohang.getSL();
	stringstream ss;
	ss << num;
	string str = ss.str();
	string name = "DH";
	name += str;
	donhang.setMaDon(name);
	donhang.setDS(giohang.getSP());
	donhang.setSoluong(giohang.getSL());
	donhang.setTienhang(giohang.getTienhang());
	donhang.setThanhtoan(giohang.getThanhtoan());
}

void maGiamGiaGH(Giohang& giohang, Magiamgia ma, Cuahang store, Khachhang kh)// string name cua ma neu la loai 2 thi cu phap la MA + ten danh muc
{
	if (ma.getLoai() == 0)
	{
		int money = min(ma.getTientoida(), giohang.getTienhang() * ma.getPhantram() / 100);
		giohang.setThanhtoan(giohang.getThanhtoan() - money);
	}
	else if (ma.getLoai() == 1)
	{
		int money = 0;
		if (ma.getName() == "MAAothun")
		{
			string t;
			for (int i = 2; i < ma.getName().length(); i++)
			{
				t[i - 2] = ma.getName()[i];
			}
			for (int i = 0; i < giohang.getSL(); i++)
			{
				Sanpham a;
				a = giohang.getSanpham(i);
				if (a.getTenDanhmuc() == t)
				{
					money += min(ma.getTientoida(), giohang.getSanpham(i).getGia()*giohang.getSanpham(i).getSoluong() * ma.getPhantram() / 100);
				}
			}
			giohang.setThanhtoan(giohang.getThanhtoan() - money);
		}
		else
		{

		}
	}
	else if (ma.getLoai() == 2)
	{
		string s1 = store.getDay().substr(0, 5);
		string s2 = kh.getDOB().substr(0, 5);
		if (s1 == s2)
		{
			int money = min(ma.getTientoida(), giohang.getTienhang() * ma.getPhantram() / 100);
			giohang.setThanhtoan(giohang.getThanhtoan() - money);
		}
	}
}

