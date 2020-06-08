#include <stdlib.h>
#include "money.h"

START_TEST(test_money_create) {    
  Money *m;
  extern Money *money_create(int, char*);

  m = money_create(5, "USD");
  ck_assert_int_eq(money_amount(m), 5);       
  ck_assert_str_eq(money_currency(m), "USD"); 
  money_free(m);
} END_TEST
