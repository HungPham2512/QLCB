#include "nhanVien.h"

	NhanVien::NhanVien(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi, std::string congViec)
		: CanBo(hoTen, gioiTinh, diaChi, tuoi), congViec(congViec) {}

	std::string NhanVien::getcongViec() const
	{
		return congViec;
	}

	void NhanVien::getThongTin() const
	{
		std::cout << getHoTen() << " " << getTuoi() << " " << getGioiTinh() << " " << getDiaChi() << " " << getcongViec() << std::endl;
	}