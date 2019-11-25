/*
 * test_PlainGetItemSumTest.cpp
 *
 *  Created on: 2019年11月22日
 *      Author: tongShi
*/

#include "ShoppingSystem.h"
#include <gtest/gtest.h>


TEST(GetCommonItemPriceTest, Plain_buy_Tea_and_CoffeeCup_sould_pay_178){
	//ShoppingSystem shopping(PlainCard);
	ShoppingSystem shopping;
	shopping.buy(Tea);
	EXPECT_EQ(118, shopping.getSum());
	shopping.buy(CoffeeCup);
	EXPECT_EQ(178, shopping.getSum());
}

