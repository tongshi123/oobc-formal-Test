/*
 * local_warehouse.h
 *
 *  Created on: 2016年9月15日
 *      Author: jing.q.xu
 */

#ifndef INCLUDE_LOCAL_WAREHOUSE_H
#define INCLUDE_LOCAL_WAREHOUSE_H

#include "warehouse.h"
#include <string>
#include <map>
struct LocalWarehouse : Warehouse {
    void add(const std::string & product, unsigned int count);
    Status remove(const std::string & product, unsigned int count);
    unsigned int get_inventory(const std::string & product) const;
private:
    std::map<std::string, unsigned int> _inventories;
};

#endif /* INCLUDE_LOCAL_WAREHOUSE_H_ */
