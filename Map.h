#pragma once
#include <SFML/Graphics.hpp>

#include "Mage.h"
#include "Stone.h"

#include "Scroll.h"//���������� ������������ ���� ������ 

using namespace sf;

const int WINDOW_WIDTH = 1260;

const int WINDOW_HEIGHT = 720;

const int WIDTH_MAP = 21;//������ ����� ������

const int HEIGHT_MAP = 12;//������ ����� ������ 


class Map {
public:

	Map();

	void draw(RenderWindow& window);

	Mage* getPlayer();

	void update();

private:
	sf::String TileMap[HEIGHT_MAP] = {

		"wwwwwwwwwwwwwwwwwwwww",

		"wffffffbffffffffsfffw",

		"wfsffffsfffffffbffffw",

		"wffffbfffffffsffffffw",

		"wfsfffffffbfffffffffw",

		"wfffbfffffffffffffffw",

		"wffffffffffffffsffffw",

		"wfffffffffffffffffffw",

		"wffsfffsffffffffffffw",

		"wffffffffbffffffbfffw",

		"wfffbsfffffffsffffffw",

		"wwwwwwwwwwwwwwwwwwwww",

	};

	Mage* mage;// ��������� �� ������ ���� 

	Scroll* scroll;// ��������� �� ������ ������ 

	Image mapImage;

	Texture mapTexture;

	Sprite mapSprite;
	Stone* stone[10];
	void init();
};