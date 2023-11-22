#pragma once
#include <vector>
#include "canBo.h"

class QLCB
{
private:
	std::vector<CanBo*> listCanBo;

public:
	bool timKiem;
	void themMoiCanBo(CanBo* canBo);

	void timKiemCanBo(const std::string& hoTen);

	void hienThiThongTin() const;

	void thoatChuongTrinh();
};