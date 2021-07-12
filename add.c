#include "add.h"

ITEM* get_add_result(ITEM *item) {
    ADD_COMBO* combo = (ADD_COMBO *)item;
    ITEM* left_result = combo->left->GetResult(combo->left);
    ITEM* right_result = combo->right->GetResult(combo->right);
    return get_number_item(left_result->GetValue(left_result) + right_result->GetValue(right_result));
}