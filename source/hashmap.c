/**
*
* @Name : HashMap.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-09
* @Released under : https://github.com/BaseMax/HashMapC/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/HashMapC
*
**/
#include "hashmap.h"

void HashInit(HashMap *array) {
	array->length=0;
	array->size=5;
	array->data=malloc(sizeof(PairValue*) * array->size);
}
void HashAdd(HashMap *array,PairValue *value) {
	array->data[array->length]=value;
	array->length++;
	if(array->length == array->size) {
		array->size+=5;
		array->data=realloc(array->data,sizeof(PairValue) * array->size);
	}
}
void HashAppend(HashMap *array,HashMap *append) {
	for(size_t index=0;index<=append->length;index++) {
		HashAdd(array,append->data[index]);
	}
}
void HashFreeIndex(HashMap *array,size_t index) {
	if(index <= array->length) {
		free(array->data[index]->key);
		free(array->data[index]->value);
		free(array->data[index]);
	}
}
void HashFree(HashMap *array) {
	for(size_t index=0;index<array->length;index++) {
		// HashFreeIndex(array,index);
		free(array->data[index]->key);
		free(array->data[index]->value);
		free(array->data[index]);
	}
}
int HashDeleteIndex(HashMap *array,size_t index) {
	if(index <= array->length) {
		array->data[index]=NULL;
		return 1;
	}
	return 0;
}
void HashDelete(HashMap *array) {
	for(size_t index=0;index<array->length;index++) {
		array->data[index]=NULL;
	}
	array->length=0;
}
PairValue *HashGetIndex(HashMap *array,size_t index) {
	if(index <= array->length) {
		return array->data[index];
	}
	return NULL;
}
PairValue *HashGetKey(HashMap *array,void *key) {
	for(size_t index=0;index<array->length;index++) {
		PairValue *item=array->data[index];
		if(item != NULL && item->key == key) {
			return item;
		}
	}
	return NULL;
}
PairValue *HashGetValue(HashMap *array,void *value) {
	for(size_t index=0;index<array->length;index++) {
		PairValue *item=array->data[index];
		if(item != NULL && item->value == value) {
			return item;
		}
	}
	return NULL;
}
PairValue *HashGetEquals(HashMap *array,PairValue *pair) {
	for(size_t index=0;index<array->length;index++) {
		PairValue *item=array->data[index];
		if(item != NULL &&
			(
				item->key == pair->key &&
				item->value == pair->value
			)
		) {
			return item;
		}
	}
	return NULL;
}
PairValue *HashGetEqual(HashMap *array,void *key,void *value) {
	for(size_t index=0;index<array->length;index++) {
		PairValue *item=array->data[index];
		if(item != NULL &&
			(
				item->key == key &&
				item->value == value
			)
		) {
			return item;
		}
	}
	return NULL;
}
