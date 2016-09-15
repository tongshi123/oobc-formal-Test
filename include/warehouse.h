/*
 * warehouse.h
 *
 *  Created on: 2016年9月15日
 *      Author: jing.q.xu
 */

#ifndef INCLUDE_WAREHOUSE_H
#define INCLUDE_WAREHOUSE_H
#include "status.h"
#include <string>
struct Warehouse {
    virtual void add(const std::string & product, unsigned int count) = 0;
    virtual Status remove(const std::string & product, unsigned int count) = 0;
    virtual unsigned int get_inventory(const std::string & product) const = 0;
    virtual ~Warehouse() {}
};

#endif /* INCLUDE_WAREHOUSE_H */
