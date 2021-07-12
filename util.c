#include "util.h"


ITEM* get_number_item(int number) {
    NUMBER_ITEM* number_item = (NUMBER_ITEM *)malloc(sizeof(NUMBER_ITEM));
    number_item->number = number;
    number_item->GetValue = &get_value;
    number_item->GetResult = &get_result;
    number_item->item_type = T_NUMBER;
    return (ITEM *)number_item;
}

ITEM* get_combo_item(ITEM_TYPE type, ITEM* left, ITEM* right) {
    COMBO_ITEM * combo = (COMBO_ITEM *)malloc(sizeof(COMBO_ITEM));
    combo->left = left;
    combo->right = right;
    combo->item_type = type;
    combo->GetValue = &get_value;
    combo->GetResult = &get_result;
    return (ITEM *)combo;
}
