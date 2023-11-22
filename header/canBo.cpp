#include "../header/canBo.h"


	CanBo::CanBo(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi)
		: hoTen(hoTen), gioiTinh(gioiTinh), diaChi(diaChi), tuoi(tuoi) {}
	std::string CanBo::getHoTen() const
	{
		return hoTen;
	}

	int CanBo::getTuoi() const
	{
		return tuoi;
	}

	std::string CanBo::getGioiTinh() const
	{
		return gioiTinh;
	}

	std::string CanBo::getDiaChi() const
	{
		return diaChi;
	}

