#include "sub.h"

ITEM* get_sub_result(ITEM *item) {
    SUB_COMBO* combo = (SUB_COMBO *)item;
    ITEM* left_result = combo->left->GetResult(combo->left);
    ITEM* right_result = combo->right->GetResult(combo->right);
    return get_number_item(left_result->GetValue(left_result) -right_result->GetValue(right_result));
}