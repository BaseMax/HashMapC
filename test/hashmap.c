/**
*
* @Name : HashMapTest.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-09
* @Released under : https://github.com/BaseMax/HashMapC/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/HashMapC
*
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../source/hashmap.h"

int main() {
	HashMap *array=malloc(sizeof(HashMap));
	HashInit(array);
	assert(array->length == 0);
	PairValue *value=malloc(sizeof(PairValue));
	value->key="name";
	value->value="test";
	HashAdd(array,value);
	assert(array->length == 1);
	PairValue *get=HashGetIndex(array,0);
	assert(strcmp(get->value,"test") == 0);
	HashAdd(array,value);
	assert(array->length == 2);
	HashDeleteIndex(array,0);
	assert(array->data[0] == NULL);
	assert(array->data[1] != NULL);
	assert(array->data[3] == NULL);
	return 0;
}
