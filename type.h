#ifndef TEST_TYPE_H
#define TEST_TYPE_H

typedef enum ITEM_TYPE
{
    T_ITEM, T_NUMBER, T_ADD, T_SUB
} ITEM_TYPE;

//typedef enum COMBO_TYPE
//{
//    T_ADD, T_SUB
//} COMBO_TYPE;

typedef struct item ITEM;

typedef struct item{
    ITEM_TYPE item_type;
    ITEM* (*GetResult)(ITEM *item);
    int (*GetValue)(ITEM *item);
} ITEM;

typedef struct number_item{
    ITEM_TYPE item_type;
    ITEM* (*GetResult)(ITEM *item);
    int (*GetValue)(ITEM *item);

    int number;
} NUMBER_ITEM;

typedef struct combo_item{
    ITEM_TYPE item_type;
    ITEM* (*GetResult)(ITEM *item);
    int (*GetValue)(ITEM *item);

    ITEM* left;
    ITEM* right;
} COMBO_ITEM;

typedef struct add_combo{
    ITEM_TYPE item_type;
    ITEM* (*GetResult)(ITEM *item);
    int (*GetValue)(ITEM *item);

    //COMBO_TYPE combo_type;
    ITEM* left;
    ITEM* right;
} ADD_COMBO;

typedef struct sub_combo{
    ITEM_TYPE item_type;
    ITEM* (*GetResult)(ITEM *item);
    int (*GetValue)(ITEM *item);

    //COMBO_TYPE combo_type;
    ITEM* left;
    ITEM* right;
} SUB_COMBO;



#endif //TEST_TYPE_H
