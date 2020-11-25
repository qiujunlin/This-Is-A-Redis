#pragma once
#ifndef __Dict_H
#define __Dict_H
#include <string>
using namespace std;
//��ϣ��Ľ��ʹ��DictEntry�ṹ����ʾ
//ÿ��DictEntry�ṹ��������һ��key-value
class DictEntry {
	//��
	char* key;
	//ֵ
	char* value;
	//ָ���¸���ϣ���㣬�γ��������������ͻ
	struct DictEntry* next;
};

//����һ�����ڲ����ض����ͼ�ֵ�Եĺ���
typedef struct DictType {
	//�����ϣֵ�ĺ���
	unsigned int (*hashFunction)(char* key, int ssize);
	//���Ƽ��ĺ���
	char* (*keyDup)(char* key);
	//����ֵ�ĺ���
	char* (*valDup)(char* obj);
	//�Աȼ��ĺ���
	int (*keyCompare)(char* key1, char* key2);
	//���ټ��ĺ���
	void (*keyDestructor)(char* key);
	//����ֵ�ĺ���
	void (*valDestructor)(char* obj);
} DictType;

//��ϣ��
class Dictht {
	//��ϣ������
	DictEntry** table;
	//��ϣ���С
	int size;
	//�ù�ϣ�����н�������
	int used;
};

//�ֵ�
//��ʵ�ֵ���Ƕ���ͨ�Ĺ�ϣ������һ���װ
//������һЩ����
class  Dict {
	//�����ض�����
	DictType* type;
	//��ϣ��
	Dictht* ht;
};

//����һ���µ��ֵ�
//��Ҫ�����ϣ��Ĵ�С
Dict* DictCreate(DictType* type, int hashSize);
//����keyѰ������hashTable�ж�Ӧ�Ľ��
DictEntry* lookup(Dict* d, char* key);
//�������ļ�ֵ����ӵ��ֵ�����
//�������ļ�ֵ����ӵ��ֵ����棬������Ѿ��������ֵ䣬
//��ô����ֵȡ��ԭ�е�ֵ
bool DictInsert(Dict* d, char* key, char* val);
//���ظ����ļ���ֵ
char* DictFetchValue(Dict* d, char* key);
//���ֵ���ɾ������������Ӧ�ļ�ֵ��
void DictDelete(Dict* d, char* key);
//�ͷŸ����ֵ䣬�Լ��ֵ��а��������м�ֵ��
void DictRelease(Dict* d);

#endif