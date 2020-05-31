#include "test.h"
#include "../../sort_linked_list.h"
#include "../../sort_array.h"

#ifndef __ASSERTIONS_H_
#define __ASSERTIONS_H_

void assert_int_equal(int, int, Test_ptr);
void assert_int_array_equal(Int_ptr, Int_ptr, int, Test_ptr);
void assert_linked_list_equal(LinkedList_ptr, LinkedList_ptr, Matcher, Test_ptr);

#endif
