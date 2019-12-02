/*
 * test_VIPGetBargainSumTest.cpp
 *
 *  Created on: 2019年11月22日
 *      Author: tongShi
*/

#include "ShoppingSystem.h"
#include <gtest/gtest.h>

//ShoppingSystem, 这个名字是不是有点太大了？
TEST(VIPGetBargainSumTest, Bargain_Item_coffee_is_48_sould_payfor_48_without_VIP){
	ShoppingSystem shopping;
	shopping.buy(Coffee);
	//getPayment或者getCost会更直白？
	EXPECT_EQ(48, shopping.getSum());
}

TEST(VIPGetBargainSumTest, Bargain_Item_coffee_is_48_sould_payfor_48_with_GoldCard){
	ShoppingSystem shopping(GoldCard);
	shopping.buy(Coffee);
	EXPECT_EQ(48, shopping.getSum());
}

TEST(VIPGetBargainSumTest, Bargain_Item_coffee_is_48_sould_payfor_48_with_SilverCard){
	ShoppingSystem shopping(SilverCard);
	shopping.buy(Coffee);
	EXPECT_EQ(48, shopping.getSum());
}
