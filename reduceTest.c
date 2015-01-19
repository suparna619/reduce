#include "../expr_assert.h"
#include "reduce.h"


int add_elements(int element1,int element2){
	return element1+element2;
}

void test_to_find_the_sum_of_elements_of_an_intiger_array(){
	int array[5] = {10,20,3,4,5};
	int *result_array;
	int (*p)(int,int);
	p = &add_elements;
}