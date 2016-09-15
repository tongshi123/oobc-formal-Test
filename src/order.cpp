/*
 * order.cpp
 *
 *  Created on: 2016年9月15日
 *      Author: jing.q.xu
 */

#include "order.h"
#include "warehouse.h"

Status Order::fill(Warehouse & warehouse) {
	if (warehouse.get_inventory(_item_name) < _item_count) {
		return FAILED;
	}
	return warehouse.remove(_item_name, _item_count);
}
