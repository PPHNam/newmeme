#pragma once
// file giup quan li cac file header de dang hon
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Sanpham.h"
#include "Danhmuc.h"
#include "Khachhang.h"
#include "Giohang.h"
#include "Donhang.h"
#include "Magiamgia.h"
#include <cstring>
#include <string>
#include "CacDanhmuc.h"
#include "Cuahang.h"

using namespace std;

void handleFile(vector <Sanpham>& list);
bool Check(string danhmuc, Sanpham sp);
void handleProduct(Sanpham& sp, Giohang& giohang);
void convertToDH(Donhang& donhang, Giohang giohang);
void maGiamGiaGH(Giohang& giohang, Magiamgia ma, Cuahang store, Khachhang kh);