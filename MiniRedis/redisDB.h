#pragma once
#include "dict.h"
class RedisDb {

    // ���ݿ���ռ䣬���������ݿ��е����м�ֵ��
    Dict* dict;                 /* The keyspace for this DB */
    // ���ݿ����
    int id;                     /* Database ID */
};