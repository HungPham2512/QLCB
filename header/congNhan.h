#pragma once
#include "canBo.h"

class CongNhan : public CanBo
{
private:
	int capBac;
public:
	CongNhan(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi, int capBac);
	int getCapBac() const;
	void getThongTin() const;
};