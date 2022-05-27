#pragma once

/*
* �������� ��������, ����� ��� ���� Bill, ����� ���� ���������� �� ������. 
������� �������� ����������, ����� ���� ���� �� ����������� ������ �� ������ Bill.
�������� �������� �������, ����� �� ����� ���������� �� ���������� ����������.
*/

class Bill {
private:
	double bill;

public:
	static unsigned numberOfBills;

	Bill(double _bill) : bill(_bill) {
		++numberOfBills;
	}

	static unsigned getNumberOfBills() {
		return numberOfBills;
	}
};
