#pragma once
#include <iostream>
#include <string>
class CanBo
{
private:
	std::string hoTen;
	std::string gioiTinh;
	std::string diaChi;
	int tuoi;

public:
	CanBo(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi);

	std::string getHoTen() const;
	int getTuoi() const;
	std::string getGioiTinh() const;
	std::string getDiaChi() const;
	virtual void getThongTin() const = 0;
};
