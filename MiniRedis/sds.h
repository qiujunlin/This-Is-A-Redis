#pragma once
/*
 * �����ַ�������Ľṹ
 */
class String {
public:
    // buf ����ռ�ÿռ�ĳ���
    int len;

    // buf ��ʣ����ÿռ�ĳ���
    int free;

    // ���ݿռ�
    char buf[];
};