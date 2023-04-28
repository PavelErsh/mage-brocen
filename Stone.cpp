#include "Stone.h"
#include "Map.h"
#include <list>
Stone::Stone(Vector2f position) {//����������� ������ 

	init();// ����� �������� ��������� ��������� 

	setPosition(position);//����� �������� ������� 
	setSpeedY(0.1);
	

}

void Stone::init() {// ��������� ��������� �����

	Image image;//������� ������ ����������� �����

	image.loadFromFile("images/stone.png");//��������� ����������� �����

	texture.loadFromImage(image);//��������� �������� ����� �� �����������

	sprite.setTexture(texture);//����� ������� ��������
	sprite.setScale(0.05, 0.05);

}

void Stone::setPosition(Vector2f position) {//������ ������� ������ 

	this->position = position;// ����� ������� ������

	sprite.setPosition(position.x, position.y);//������ ������� �������

}

void Stone::setTextureRect(IntRect rect) {//������ �������� 

	sprite.setTextureRect(rect); //����� ������� ��������

}


Sprite Stone::getSprite() { //�������� ������ ������ 

	return sprite;// �������� ������ ������

}
void Stone::setSpeedY(float speed) {
	speedY = speed;
}
void Stone::update() {
	sprite.move(0, speedY);
	position = sprite.getPosition();
	if (position.y > WINDOW_HEIGHT)
	{
		position.y = 0;
		setPosition(Vector2f(position.x, position.y));
	}
	
}