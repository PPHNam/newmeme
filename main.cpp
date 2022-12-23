#include "QuanLy.h"

int main()
{
	vector<Sanpham> list;
	handleFile(list);
	for (int i = 0; i < list.size(); i++)
	{
		list[i].Xuat();
	}
	
	Cuahang store;
	//cout << "Nhap ten cua hang: ";
	string name = "Cua hang do gia dung";
	//getline(cin, name, '\n');
	//cout << "Nhap ngay mua tai cua hang: ";
	string day = "14/07/2022";
	//getline(cin, day, '\n');
	store.setDay(day);
	store.setName(name);
	store.setSanpham(list);
	store.Xuat();
	Khachhang Customer;
	Customer.Nhap();
	Customer.Xuat();
	Magiamgia ma1("MAAothun", 1, 23, 50000);
	Magiamgia ma2("MACacloai", 0, 13, 48000);
	Magiamgia ma3("MASN", 2, 10, 54000);
	int choice;
	Giohang gh;
	Donhang dh;
	int tiensum = 0;
	int giamgia = 100;
	bool flashsale = true;
	bool fl = 0;
	do
	{
		if (flashsale == true)
		{
			cout << "FLASH SALE !!!!!!" << endl;
			for (int i = 0; i < list.size(); i++)
			{
				list[i].setGia(list[i].getGia() * 80 / 100);
			}
			gh.setTienhang(gh.getTienhang() * 80 / 100);
			fl = 1;
		}
		else
		{
			if (fl == 1)
			{
				for (int i = 0; i < list.size(); i++)
				{
					list[i].setGia(list[i].getGia() * 100 / 80);
				}
				gh.setTienhang(gh.getTienhang() * 100 / 80);
				fl = 0;
			}
		}
		cout << "Nhan 1 de tien hanh mua hang, 0 de thoat: ";
		cin >> choice;
		cin.ignore();
		if (choice == 1)
		{
			string nameDM;
			do
			{
				cout << "Moi nguoi dung nhap ten danh muc, hoac Nhap Thoat de thoat: AothunNam, AothunNu, Non, Aokhoac, Tuisach, Thietbidt, Noithat, Aothun: ";
				getline(cin, nameDM, '\n');
				if (nameDM == "Thoat")
					cout << "THOAT!!!" << endl;
				else if (nameDM == "Aothun" || nameDM == "Non" || nameDM == "Aokhoac" || nameDM == "Tuisach" || nameDM == "Thietbidt" || nameDM == "Noithat" || nameDM == "AothunNam" || nameDM == "AothunNu")
				{
					bool flag = 0;
					for (int i = 0; i < list.size(); i++)
					{
						if (Check(nameDM, list[i]))
						{
							list[i].Xuat();
							handleProduct(list[i], gh);
							cout << "Da them san pham vao gio hang!!" << endl;
							flag = 1;
						}
					}
					if (flag == 0)
						cout << "Hien khong co san pham cua danh muc can tim" << endl;
				}
				else
					cout << "Khong hop le, nhap lai" << endl;
			} while (nameDM != "Thoat");
			gh.Xuat();
			string magiamgia;
			bool ch;
			cout << "Ban co muon nhap ma giam gia khong, 0 de thoat ?";
			cin >> ch;
			cin.ignore();
			if (ch)
			{
				cout << "Nhap ma giam gia: ";
				getline(cin, magiamgia, '\n');
				if (magiamgia == "MAAothun")
					maGiamGiaGH(gh, ma1, store, Customer);
				else if (magiamgia == "MACacloai")
					maGiamGiaGH(gh, ma2, store, Customer);
				else if (magiamgia == "MASN")
					maGiamGiaGH(gh, ma3, store, Customer);
				else
					cout << "Khong hop le, huy giam gia" << endl;
			}
			convertToDH(dh, gh);
			dh.setThanhtoan(gh.getThanhtoan() * giamgia / 100);
			cout << "Don hang ban dang co la: " << endl;
			dh.Xuat();
			cout << "Ban Muon mua don hang nay khong ?, an 1 de co" << endl;
			int cho;
			cin >> cho;
			if (cho == 1)
			{
				tiensum += gh.getThanhtoan();
				if (giamgia == 99)
					cout << "Khach hang hang dong" << endl;
				else if (giamgia == 98)
					cout << "Khach hang hang bac" << endl;
				else if (giamgia == 96)
					cout << "Khach hang hang vang" << endl;
				cout << "Don hang: " << dh.getMadon() << endl;
				cout << "Khach hang: " << Customer.getName() << endl;
				cout << "Dia chi nhan: " << Customer.getAddr() << endl;
				cout << "Cam on quy khach da chon mua san pham!!!" << endl;
			}
			else
				cout << "Thoat!!" << endl;
		}
		else if (choice == 0)
			cout << "Thoat Cua hang" << endl;
		else
			cout << "Khong hop le, moi nhap lai" << endl;
		if (tiensum > 10000000 && tiensum <= 50000000)
			giamgia = 99;
		else if (tiensum > 50000000 && tiensum <= 200000000)
			giamgia = 98;
		else if (tiensum > 200000000)
			giamgia = 96;
	} while (choice != 0);
}