#pragma once
#include "canBo.h"

class KySu : public CanBo
{
private:
	std::string nganhDaoTao;
public:
	KySu(std::string hoTen, std::string gioiTinh, std::string diaChi, int tuoi, std::string nganhDaoTao);
	std::string getnganhDaoTao() const;
	void getThongTin() const;
};