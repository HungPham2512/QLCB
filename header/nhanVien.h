#pragma once
#include "canBo.h"

class NhanVien : public CanBo
{
private:
	std::string congViec;
public:
	NhanVien(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi, std::string congViec);
	std::string getcongViec() const;
	void getThongTin() const;
};
