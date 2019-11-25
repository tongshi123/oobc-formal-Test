/*
 * ShoppingSystem.cpp
 *
 *  Created on: 2019年11月22日
 *      Author: tongShi
*/

#include "ShoppingSystem.h"
ShoppingSystem::ShoppingSystem(Rank rank): m_rank(rank){
	if(m_rank == GoldCard){
		discount = 0.9;
	}
	else if(m_rank == SilverCard){
		discount = 0.95;
	}
	else discount = 1;
}

double ShoppingSystem::getSum() const{
	return sum;
}

void ShoppingSystem::buy(ItemName item){
	switch(item){
		case Coffee:
			//sum += itemPrice[number-1] * discount;
			sum += itemPrice[item];
			break;
		case CoffeeCup:
			sum += itemPrice[item] * discount;
			break;
		case Chocolate:
			sum += itemPrice[item] * discount;
			break;
		case Tea:
			sum += itemPrice[item] * discount;
			break;
		default:
			break;
	}
}













