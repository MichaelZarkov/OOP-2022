#pragma once
#include <iostream>
#include "Book.h"

/*
* ������ 3:
�������� ��������, ����� ��� ���� Book �� ������ 1 � ���� Store, 
����� ��� ����� �� �����. ���� ���� Book � ������� �� ���� Store. 
�������� �����, ����� ��� ��������� ����� �� ���� Book � ��� ���������� �� ����� �� 
��� 500 �� ������ � ������ � �����.
*/


class Book;
class Store {
private:
	Book* books;
	unsigned size;
	unsigned capacity;

	void copy(const Store& other);
	void erase();
	void resize();

public:
	Store(const Book* books, const unsigned size);

	Store(const Store& other);

	const Store& operator=(const Store& other);

	void addBook(const Book& book);

	~Store();
};
