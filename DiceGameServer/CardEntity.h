#pragma once
#include <iostream>
using namespace std;

enum CardType{
	ATTACK = 1,
	MAGIC = 2,
};

enum CardProperty{
	BLOOD = 1,
	MARTIAL = 2,
	PHANTOM = 3,
	CAST = 4,
	HOLY = 5,
};

enum CardElement{
	WIND = 1,
	WATER = 2,
	FIRE = 3,
	EARTH = 4,
	THUNDER = 5,
	LIGHT = 6,
	DARKNESS = 7,
};

enum CardName{
	POISON = 1,
	WEAKEN = 2,
	SHIELD = 3,
	MISSILE = 4,
	HOLYLIGHT = 5,
	WINDSLASH = 6,
	WATERSLASH = 7,
	FIRESLASH = 8,
	EARTHSLASH = 9,
	THUNDERSLASH = 10,
	DARKSLASH = 11,
};

//������
class CardEntity
{
public:
    //����,��������ǰ���������Ϣ��һ��String
    CardEntity(string cardEntry);
	int getID() { return id; }   
    //��ȡ����/�������
	int getType() { return type; }
    //��ȡ��������
	int getElement() { return element; }
    //��ȡ���Ƽ���Ѫ��ӽ��ʥ�������
	int getProperty() { return property; }
    //��ȡ��������
	int getName() { return name; }
	//��ȡ���ƶ��м���Ϣ
	int getHasSpeciality() { return hasSpeciality; }
    //��ȡ���ƶ��м�
	int getSpeciality(int id) { return specialityList[id]; }
private:
    int id;
    int hasSpeciality;
    int type;
    int element;
    int property;
    int name;
    int specialityList[2];
};
