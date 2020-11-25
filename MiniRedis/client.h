
#pragma once
#include "redisDB.h"
#include "Object.h"
class RedisClient {

    // �׽���������
    int fd;

    // ��ǰ����ʹ�õ����ݿ�
    RedisDb* db;

    // ��ǰ����ʹ�õ����ݿ�� id �����룩
    int dictid;

    // �ͻ��˵�����
    RedisObject* name;             /* As set by CLIENT SETNAME */

    // ��ѯ������
    sds querybuf;

    // ��ѯ���������ȷ�ֵ
    size_t querybuf_peak;   /* Recent (100ms or more) peak of querybuf size */

    // ��������
    int argc;

    // ������������
    robj** argv;

    // ��¼���ͻ���ִ�е�����
    struct redisCommand* cmd, * lastcmd;

    // ��������ͣ���������Ƕ�������
    int reqtype;

    // ʣ��δ��ȡ��������������
    int multibulklen;       /* number of multi bulk arguments left to read */

    // �������ݵĳ���
    long bulklen;           /* length of bulk argument in multi bulk request */

    // �ظ�����
    list* reply;
};
