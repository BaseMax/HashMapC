# HashMap C

A tiny library for using easily HashMap, arraylist in the C.

### Functions

```c
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
```

### Includes

```c
#include <stdlib.h>
```

## Compile Example

**Clone :**

```
$ git clone https://github.com/BaseMax/HashMapC
$ cd HashMapC/
```

**Build Example :**

```
$ gcc example/main.c source/hashmap.c -o example/main
$ example/main
```

```
$ gcc source/hashmap.c -o source/hashmap -c -O3
$ gcc example/main.c source/hashmap -o example/main
$ example/main
```
