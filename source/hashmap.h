/**
*
* @Name : HashMap.h
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-09
* @Released under : https://github.com/BaseMax/HashMapC/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/HashMapC
*
**/
#ifndef HASH_MAP
#define HASH_MAP
    #include <stdlib.h> //size_t, NULL

    typedef struct {
		void *key;
		void *value;
	} PairValue;
	typedef struct {
		PairValue** data;
		size_t length;
		size_t size;
	} HashMap;

    void HashInit(HashMap *array);
    void HashAdd(HashMap *array,PairValue *value);
    void HashAppend(HashMap *array,HashMap *append);
    void HashFreeIndex(HashMap *array,size_t index);
    void HashFree(HashMap *array);
    int HashDeleteIndex(HashMap *array,size_t index);
    void HashDelete(HashMap *array);
    PairValue *HashGetIndex(HashMap *array,size_t index);
    PairValue *HashGetWithKey(HashMap *array,void *key);
    void *HashGetKey(HashMap *array,void *value);
    PairValue *HashGetWithValue(HashMap *array,void *value);
    void *HashGetValue(HashMap *array,void *key);
    PairValue *HashGetEquals(HashMap *array,PairValue *pair);
    PairValue *HashGetEqual(HashMap *array,void *key,void *value);

#endif
