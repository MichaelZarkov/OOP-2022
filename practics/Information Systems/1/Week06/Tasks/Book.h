#pragma once
#include "Store.h"

/*
* ������ 1:
�������� ��������, ����� ��� ���� Book � ��� �� �����(����� �� ������� � �������� �������) 
� ���� ��������. 
������ ��� �������:
- ����� ������ ����� �� ������ � ��������� 
- ����� �������� ����� �� ������ � ���������
*/
class Store;
class Book {
private:
	char* authorName;
	int numberOfPages;
	unsigned lenght;

	void copy(const Book& other);
	void erase();

public:
	Book();

	Book(const char* authorName, unsigned lenght, const int& numberOfPages);

	Book(const Book& other);

	const Book& operator=(const Book& other);

	const char* getAuthorName() const;
	const int getNumberOfPages() const;

	void setNewAuthorName(const char* newAuthorName, unsigned lenght);
	void setNeNumberOfPages(const int newNumberOfPages);

	~Book();

	friend class Store;
};
