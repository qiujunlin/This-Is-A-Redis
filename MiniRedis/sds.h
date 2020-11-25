#pragma once
/*
 * 保存字符串对象的结构
 */
class String {
public:
    // buf 中已占用空间的长度
    int len;

    // buf 中剩余可用空间的长度
    int free;

    // 数据空间
    char buf[];
};