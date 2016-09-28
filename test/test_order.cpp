/*
 * test_order.cpp
 *
 *  Created on: 2016年9月17日
 *      Author: jing.q.xu
 */

#include "gtest/gtest.h"
#include "gtest/gtest.h"
#include "local_warehouse.h"
#include "order.h"

struct OrderTest : ::testing::Test {
protected:
	void SetUp () {
		_warehouse.add("book", 100);
		_warehouse.add("cd", 100);
	}
	LocalWarehouse _warehouse;
};

TEST(OrderTest, SBAT_fill_order_with_enough_inventory) {
	LocalWarehouse warehouse;
	warehouse.add("book", 100);
	Order order("book", 10);
	ASSERT_EQ(SUCCESS, order.fill(warehouse));
	ASSERT_EQ(100 - 10, warehouse.get_inventory("book"));
}
