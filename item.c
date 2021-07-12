#include "item.h"

int get_value(ITEM *item) {
    return ((NUMBER_ITEM *)item)->number;
}

ITEM *get_result(ITEM *item) {
    if(item->item_type == T_NUMBER) {
        return item;
    }else if(item->item_type == T_ADD) {
        return get_add_result(item);
    }else if(item->item_type == T_SUB) {
        return get_sub_result(item);
    }
}