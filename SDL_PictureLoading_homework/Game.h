#pragma once

#include<SDL.h>
#include <SDL_image.h> 
#include <iostream>

class Game
{
public:
	Game();
	~Game();
	void init(const char* title, int width, int height, bool fullscreen);
	void handleEvents();
	void update(); //to make all game objects updateable 
	void render(); //to load a visualization 
	void clean(); //to free memory 

	bool running() { return isRunning; }

	static SDL_Renderer* renderer; // new: ������ �� �������� ������� �������� �� ����� �����;
private:
	bool isRunning = false;
	int cnt = 0;
	 SDL_Window* window; //new static added
	//SDL_Renderer* renderer; //no need because of  static SDL_Renderer* renderer;
};

