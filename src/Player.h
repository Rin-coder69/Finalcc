#pragma once
#include <vector>
#include <array>
#include "raylib.h"
#include "resource_dir.h"	// utility header for SearchAndSetResourceDir

struct Player
{
	Vector2 position;
	int radius;
	Color color;
	bool isAlive;
	bool isSuper;
	int score;
	int hiScore;
	Texture2D spriteSheet;
};
