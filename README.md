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
PairValue *HashGetKey(HashMap *array,void *key);
PairValue *HashGetValue(HashMap *array,void *value);
PairValue *HashGetEquals(HashMap *array,PairValue *pair);
PairValue *HashGetEqual(HashMap *array,void *key,void *value);
```

### Includes

```c
#include <stdlib.h>
```

## Compile Example

```
$ git clone https://github.com/BaseMax/HashMapC
$ cd HashMapC/
  ```
