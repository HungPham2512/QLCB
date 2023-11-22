#include "../header/kySu.h"


	KySu::KySu(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi, std::string nganhDaoTao)
		: CanBo(hoTen, gioiTinh, diaChi, tuoi), nganhDaoTao(nganhDaoTao) {}
	std::string KySu::getnganhDaoTao() const
	{
		return nganhDaoTao;
	}

	void KySu::getThongTin() const
	{
		std::cout << getHoTen() << " " << getTuoi() << " " << getGioiTinh() << " " << getDiaChi() << " " << getnganhDaoTao() << std::endl;
	}