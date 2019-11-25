/*
 * ShoppingSystem.h
 *
 *  Created on: 2019年11月22日
 *      Author: tongShi
*/

#ifndef INCLUDE_SHOPPING_SYSTEM
#define INCLUDE_SHOPPING_SYSTEM
#include <iostream>
#include <vector>
using namespace std;

typedef int ItemName;
typedef int Rank;

static const ItemName Coffee = 0;
static const ItemName CoffeeCup = 1;
static const ItemName Chocolate = 2;
static const ItemName Tea = 3;

static const Rank GoldCard = 2;
static const Rank SilverCard = 1;
static const Rank PlainCard = 0;


class ShoppingSystem
{
public:
	int m_rank = 0;
	double discount = 1;
	ShoppingSystem(Rank rank = PlainCard );
	double getPrice(int i) const;
	double getSum() const;
	void buy(int number);
private:
	
	double sum = 0;
	//vector<int> number = {1,2,3,4};
	vector<double> itemPrice = {48, 60, 48.8, 118};
	vector<bool> isbargain = {true, false, false, false};
};
#endif /*INCLUDE_SHOPPING_SYSTEM*/



