#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	drawBackground();
	drawRoad();
	drawCar();
	drawRoadMark(roadMarkX1);
	drawRoadMark(roadMarkX2);
	drawRoadMark(roadMarkX3);
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	moveValue = ( moveValue + 1  ) % 1600;
	roadMarkX1 = (750.f - (moveValue % 800));
	roadMarkX2 = (750.f - ((moveValue + 400) % 800));
	roadMarkX3 = (750.f - ((moveValue + 800) % 800));

}

// Delete textures and free other resources here.
void End()
{
}

#pragma endregion gameFunctions

#pragma region inputHandling

// Called once when a key is pressed.
void OnKeyDownEvent(SDL_Keycode key)
{
}

// Called once when a key is released.
void OnKeyUpEvent(SDL_Keycode key)
{
}

// Called whenever the mouse moves.
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
}

// Called once when a mouse button is pressed.
void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions

void drawRoadMark(float brickX) {
	SetColor(1.f, 1.f, 1.f, 1.f);
	FillRect(brickX, roadMarkY, 60.f, 15.f);
}

void drawRoad() {
	SetColor(0.f, 0.f, 0.f, 0.8f);
	FillRect(0.f, g_WindowHeight / 2.f, g_WindowWidth, g_WindowHeight);
	SetColor(1.f, 1.f, 1.f, 1.f);
	FillRect(0.f, g_WindowHeight * 7 / 12, g_WindowWidth, 10.f);
}

void drawBackground() {
	SetColor(0.f, 0.f, 1.f, 0.5f);
	FillRect(0.f, 0.f, g_WindowWidth, g_WindowHeight / 4.f);
	SetColor(0.f, 1.f, 0.f, 0.5f);
	FillRect(0.f, g_WindowHeight / 4.f, g_WindowWidth, g_WindowHeight / 4.f);
}

void drawCar() {
	//car window
	SetColor(0.f, 0.f, 0.9f, 0.5f);
	FillRect(g_WindowWidth * 5 / 12.f, g_WindowHeight * 4 / 12, g_WindowWidth / 6, g_WindowHeight / 8);
	FillTriangle(g_WindowWidth * 5 / 12.f, g_WindowHeight * 4 / 12, g_WindowWidth * 5 / 12.f, g_WindowHeight / 2, g_WindowWidth / 4.f, g_WindowHeight * 5 / 12);
	FillTriangle(g_WindowWidth * 7 / 12.f, g_WindowHeight * 4 / 12, g_WindowWidth * 7 / 12.f, g_WindowHeight / 2, g_WindowWidth * 2.f / 3.f, g_WindowHeight * 5 / 12);
	SetColor(0.f, 0.f, 0.f, 1.f);
	DrawRect(g_WindowWidth * 5 / 12.f, g_WindowHeight * 4 / 12, g_WindowWidth / 6, g_WindowHeight / 8 , 5);
	DrawTriangle(g_WindowWidth * 5 / 12.f, g_WindowHeight * 4 / 12, g_WindowWidth * 5 / 12.f, g_WindowHeight / 2, g_WindowWidth / 4.f, g_WindowHeight * 5 / 12, 5);
	DrawTriangle(g_WindowWidth * 7 / 12.f, g_WindowHeight * 4 / 12, g_WindowWidth * 7 / 12.f, g_WindowHeight / 2, g_WindowWidth * 2.f / 3.f, g_WindowHeight * 5 / 12, 5);
	//main car body
	SetColor(1.f, 0.f, 0.f, 1.f);
	FillRect(g_WindowWidth / 4.f, g_WindowHeight * 5 / 12, g_WindowWidth / 2, g_WindowHeight / 6);
	SetColor(0.f, 0.f, 0.f, 1.f);
	DrawRect(g_WindowWidth / 4.f, g_WindowHeight * 5 / 12, g_WindowWidth / 2, g_WindowHeight / 6, 5.f);
	FillEllipse(g_WindowWidth * 3 / 8.f, g_WindowHeight * 7 / 12, 40, 40);
	FillEllipse(g_WindowWidth * 5 / 8.f, g_WindowHeight * 7 / 12, 40, 40);
	SetColor(0.6f, 0.6f, 0.6f, 1.f);
	FillEllipse(g_WindowWidth * 3 / 8.f, g_WindowHeight * 7 / 12, 30, 30);
	FillEllipse(g_WindowWidth * 5 / 8.f, g_WindowHeight * 7 / 12, 30, 30);
	//car light
	SetColor(1.f, 1.f, 0.f, 1.f);
	FillRect(g_WindowWidth * 12.f / 17.f, g_WindowHeight / 2.f, 30, 10);


}



#pragma endregion