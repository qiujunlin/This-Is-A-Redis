#include "sds.h"
class Object {
 public:
    // ����
    unsigned type:4;
    // ������ʱ�ò���
    //unsigned encoding:4;
    // ���ü���
    int refcount;
    // ָ��ʵ��ֵ��ָ��
    void *ptr;

    static Object CreateString(const String& value);
    static Object CreateString(const String& value);
    static Object CreateString(long value);
    static Object CreateList();
    static Object CreateSet();
    static Object CreateSSet();
    static Object CreateHash();
};