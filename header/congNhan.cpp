#include "congNhan.h"


	CongNhan::CongNhan(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi, int capBac)
		: CanBo(hoTen, gioiTinh, diaChi, tuoi), capBac(capBac) {}
	int CongNhan::getCapBac() const
	{
		return capBac;
	}

	void CongNhan::getThongTin() const
	{
		std::cout << getHoTen() << " " << getTuoi() << " " << getGioiTinh() << " " << getDiaChi() << " " << getCapBac() << std::endl;

	}