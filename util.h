#ifndef TEST_UTIL_H
#define TEST_UTIL_H

#include "item.h"

#include <stdlib.h>

ITEM* get_number_item(int number);

ITEM* get_combo_item(ITEM_TYPE type, ITEM* left, ITEM* right);

#endif //TEST_UTIL_H
