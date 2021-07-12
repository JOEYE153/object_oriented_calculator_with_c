#include <stdio.h>
#include "util.h"


int main() {
    // test: 2 + 3 - 1

    ITEM* test = get_combo_item(T_SUB,get_combo_item(T_ADD, get_number_item(2),
                                               get_number_item(3)), get_number_item(1));

    ITEM* result = test->GetResult(test);
    printf("%d", result->GetValue(result));
}
