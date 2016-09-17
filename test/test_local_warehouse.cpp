/*
 * test_local_warehouse.cpp
 *
 *  Created on: 2016年9月15日
 *      Author: baidu
 */
#include "gtest/gtest.h"
#include "local_warehouse.h"

struct LocalWarehouseTest : ::testing::Test {
protected:
	LocalWarehouse _warehouse;
};

TEST_F(LocalWarehouseTest, SBAT_get_inventory) {
	ASSERT_EQ(0, _warehouse.get_inventory("book"));
	_warehouse.add("book", 100);
	ASSERT_EQ(100, _warehouse.get_inventory("book"));
	_warehouse.add("book", 100);
	ASSERT_EQ(200, _warehouse.get_inventory("book"));
}

TEST_F(LocalWarehouseTest, SBAT_remove_with_enough_inventory) {
	_warehouse.add("book", 100);
	ASSERT_EQ(100, _warehouse.get_inventory("book"));
	_warehouse.remove("book", 10);
	ASSERT_EQ(90, _warehouse.get_inventory("book"));
	_warehouse.remove("book", 100 - 10);
	ASSERT_EQ(0, _warehouse.get_inventory("book"));
}

TEST_F(LocalWarehouseTest, SBAT_remove_no_enough_inventory) {
	_warehouse.add("book", 100);
	ASSERT_EQ(100, _warehouse.get_inventory("book"));
	_warehouse.remove("book", 200);
	ASSERT_EQ(100, _warehouse.get_inventory("book"));
}
