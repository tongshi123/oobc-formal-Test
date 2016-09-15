/*
 * local_warehouse.cpp
 *
 *  Created on: 2016年9月15日
 *      Author: jing.q.xu
 */

#include "local_warehouse.h"

void LocalWarehouse::add(const std::string & product, unsigned int count) {
	std::map<std::string, unsigned int>::iterator it = _inventories.find(product);
	if (it == _inventories.end()) {
		_inventories[product] = count;
	} else {
		_inventories[product] += count;
	}
}

Status LocalWarehouse::remove(const std::string & product, unsigned int count) {
	if (get_inventory(product) < count) {
		return FAILED;
	}
	_inventories[product] -= count;
	if (_inventories[product] == 0) {
		_inventories.erase(product);
	}
	return SUCCESS;
}

unsigned int LocalWarehouse::get_inventory(const std::string & product) const {
	std::map<std::string, unsigned int>::const_iterator it = _inventories.find(product);
	if (it == _inventories.end()) {
		return 0;
	}
	return it->second;
}
