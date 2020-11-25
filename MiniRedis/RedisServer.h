#pragma once
#include "redisDB.h"
class RedisServer {

    /* General */

    // 配置文件的绝对路径
    char* configfile;           /* Absolute config file path, or NULL */

    // serverCron() 每秒调用的次数
    int hz;                     /* serverCron() calls frequency in hertz */

    // 数据库
    RedisDb* db;

    // 命令表（受到 rename 配置选项的作用）
    dict* commands;             /* Command table */
    // 命令表（无 rename 配置选项的作用）
    dict* orig_commands;        /* Command table before command renaming. */
}