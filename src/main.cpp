#include "../header/canBo.h"
#include "../header/congNhan.h"
#include "../header/kySu.h"
#include "../header/nhanVien.h"
#include "../header/qlcb.h"

int main()
{
	QLCB qlcb;
	std::string name;

	CanBo* canBo1 = new CongNhan("Nguyen Van A", "Nam", "Hanoi", 40, 5);
	CanBo* canBo2 = new KySu("Nguyen Thi B", "Nu", "Namdinh", 35, "TuDongHoa");
	CanBo* canBo3 = new NhanVien("Nguyen Van C", "Nam", "Haiphong", 25, "GiaoVien");

	qlcb.themMoiCanBo(canBo1);
	qlcb.themMoiCanBo(canBo2);
	qlcb.themMoiCanBo(canBo3);

	qlcb.hienThiThongTin();

	std::cout << "Nhap ten tim kiem" << std::endl;
	std::getline(std::cin, name);

	qlcb.timKiemCanBo(name);

	qlcb.thoatChuongTrinh();

	return 0;
}