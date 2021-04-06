#pragma once
void f2();
#define SHOP_NAME "Subway"

class Sandwich {
public:
	void Read();
	void Write();

private:
	char name[32];
	float price;
	bool isHot;

	static const float TAX;
};