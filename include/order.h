/*
 * order.h
 *
 *  Created on: 2016年9月15日
 *      Author: jing.q.xu
 */

#ifndef INCLUDE_ORDER_H
#define INCLUDE_ORDER_H
#include "status.h"
#include <string>
struct Warehouse;
struct Order {
    Order(const std::string & name, unsigned int count)
        : _item_name(name)
        , _item_count(count) {
    }
    Status fill(Warehouse & warehouse);
    //code omitted for brevity
private:
    std::string _item_name;
    unsigned int _item_count;
};

#endif /* INCLUDE_ORDER_H */
