#include <iostream>
#include <iomanip>

int main()
{
    setlocale(0, "");

    std::cout << std::setw(80) << "�������� �������� ������," << std::endl
             << std::setw(80) << "\t����� ������ ���� ��������� �� ����," << std::endl
             << std::setw(80) << "\t����� ���, ��� ������� �� ����� �����, " << std::endl
             << std::setw(80) << "�������, � �� ��� �� �� ������." << std::endl
        ;
}
