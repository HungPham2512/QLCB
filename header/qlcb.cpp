#include "../header/qlcb.h"


	bool timKiem = 0;
	void QLCB::themMoiCanBo(CanBo* canBo)
	{
		listCanBo.push_back(canBo);
	}

	void QLCB::timKiemCanBo(const std::string& hoTen)
	{
		for (CanBo* canBo : listCanBo)
		{
			if (canBo->getHoTen() == hoTen)
			{
				std::cout << "Tim thay!" << std::endl;
				canBo->getThongTin();
				timKiem = 1;
			}
		}

		if (timKiem != 1)
		{
			std::cout << "Khong tim thay" << std::endl;
		}
	}

	void QLCB::hienThiThongTin() const
	{
		for (CanBo* canBo : listCanBo)
		{
			canBo->getThongTin();
		}
	}

	void QLCB::thoatChuongTrinh()
	{
		for (CanBo* canBo : listCanBo)
		{
			delete canBo;
		}
	}
