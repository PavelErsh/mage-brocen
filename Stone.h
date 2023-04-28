#pragma once
#include "Map.h"
#include <SFML/Graphics.hpp>

using namespace sf;//������������� ������������ ��� sf 

class Stone {//����� ����� 

private://��������� ���� 
	float speedY;

	Vector2f position;//������� ����� 

	Sprite sprite;//������ �����

	Texture texture;//�������� �����

	void init();//��������� �������� ����� 
public:
	void update();
	void setSpeedY(float speed);

	Stone(Vector2f position);//����������� ������ 

	void setPosition(Vector2f position);// ������ ������� �����

	void setTextureRect(IntRect rect);//������ �������� �����

	Sprite getSprite();// �������� ������ �����
	
};