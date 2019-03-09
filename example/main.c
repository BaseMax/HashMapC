/**
*
* @Name : Example.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-09
* @Released under : https://github.com/BaseMax/HashMapC/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/HashMapC
*
**/
#include <stdio.>
#include <stdlib.h>
#include <assert.h>

int main() {
	HashMap *array=malloc(sizeof(HashMap));
	HashInit(array);

	PairValue *value=malloc(sizeof(PairValue));
	value->key="name";
	value->value="test";
	HashAdd(array,value);
	// HashDeleteIndex(array,0);
	// PairValue *get=HashGetIndex(array,0);
	// PairValue *get=HashGetKey(array,"name");
	// PairValue *get=HashGetValue(array,"test");
	PairValue *values=malloc(sizeof(PairValue));
	values->key="name";
	values->value="test";
	// values->key="new";
	PairValue *get=HashGetEquals(array,values);
	printf("==>%s,%s\n",get->key,get->value);
	// printf("====>%s\n",array->data[0]->value);
	HashAdd(array,value);
	HashAdd(array,value);
	HashAdd(array,value);

	// printf("==>%d\n",array->length);
	// for(size_t index=0;index<array->length;index++)
	// {
	// 	// printf("==>%s\n",array->data[index]);
	// 	printf("==>%s : %s\n",array->data[index]->key,array->data[index]->value);
	// }

	return 0;
}
