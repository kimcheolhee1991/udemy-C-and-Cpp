#include <stdio.h>
#include <string.h>

//  �w���̃f�[�^������\����
struct student {
	int id;         //  �w���ԍ�
	char name[256]; //  ���O
	int age;        //  �N��
};

void main() {
	struct student data;
	data.id = 1;    //  �ԍ���ݒ�
	strcpy(data.name, "�R�c���Y");   //  ���O��ݒ�
	data.age = 18;  //  �N���ݒ�
					//  �f�[�^�̓����\��
	printf("�w���ԍ�:%d ���O:%s �N��:%d\n", data.id, data.name, data.age);
}