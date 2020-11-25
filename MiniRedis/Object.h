#include "sds.h"
class Object {
 public:
    // 类型
    unsigned type:4;
    // 编码暂时用不到
    //unsigned encoding:4;
    // 引用计数
    int refcount;
    // 指向实际值的指针
    void *ptr;

    static Object CreateString(const String& value);
    static Object CreateString(const String& value);
    static Object CreateString(long value);
    static Object CreateList();
    static Object CreateSet();
    static Object CreateSSet();
    static Object CreateHash();
};