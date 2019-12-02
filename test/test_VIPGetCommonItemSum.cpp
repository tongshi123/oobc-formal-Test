/*
 * test_VIPGetCommonItemSum.cpp
 *
 *  Created on: 2019年11月22日
 *      Author: tongShi
*/

#include "ShoppingSystem.h"
#include <gtest/gtest.h>


TEST(VIPGetCommonItemPrice, GoldCard_buy_CoffeeCup_should_pay_54){
	ShoppingSystem shopping(GoldCard);
	shopping.buy(CoffeeCup);
	EXPECT_EQ(54, shopping.getSum());
}
//笔误，XXXX_pay_57
TEST(VIPGetCommonItemPrice, SilverCard_buy_CoffeeCup_should_pay_54){
	ShoppingSystem shopping(SilverCard);
	shopping.buy(CoffeeCup);
	EXPECT_EQ(57, shopping.getSum());
}

