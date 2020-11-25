#pragma once
#include "redisDB.h"
class RedisServer {

    /* General */

    // �����ļ��ľ���·��
    char* configfile;           /* Absolute config file path, or NULL */

    // serverCron() ÿ����õĴ���
    int hz;                     /* serverCron() calls frequency in hertz */

    // ���ݿ�
    RedisDb* db;

    // ������ܵ� rename ����ѡ������ã�
    dict* commands;             /* Command table */
    // ������� rename ����ѡ������ã�
    dict* orig_commands;        /* Command table before command renaming. */
}