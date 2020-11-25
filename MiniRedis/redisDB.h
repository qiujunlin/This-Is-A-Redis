#pragma once
#include "dict.h"
class RedisDb {

    // 数据库键空间，保存着数据库中的所有键值对
    Dict* dict;                 /* The keyspace for this DB */
    // 数据库号码
    int id;                     /* Database ID */
};