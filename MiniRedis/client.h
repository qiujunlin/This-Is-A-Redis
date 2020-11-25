
#pragma once
#include "redisDB.h"
#include "Object.h"
class RedisClient {

    // 套接字描述符
    int fd;

    // 当前正在使用的数据库
    RedisDb* db;

    // 当前正在使用的数据库的 id （号码）
    int dictid;

    // 客户端的名字
    RedisObject* name;             /* As set by CLIENT SETNAME */

    // 查询缓冲区
    sds querybuf;

    // 查询缓冲区长度峰值
    size_t querybuf_peak;   /* Recent (100ms or more) peak of querybuf size */

    // 参数数量
    int argc;

    // 参数对象数组
    robj** argv;

    // 记录被客户端执行的命令
    struct redisCommand* cmd, * lastcmd;

    // 请求的类型：内联命令还是多条命令
    int reqtype;

    // 剩余未读取的命令内容数量
    int multibulklen;       /* number of multi bulk arguments left to read */

    // 命令内容的长度
    long bulklen;           /* length of bulk argument in multi bulk request */

    // 回复链表
    list* reply;
};
