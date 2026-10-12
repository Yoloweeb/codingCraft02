#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE12 Mai Andy - codingCraft02" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

#pragma endregion

#pragma region myVariables

float roadMarkX1 { g_WindowWidth / 3.f };
float roadMarkX2{ roadMarkX1 + 50.f };
float roadMarkX3{ roadMarkX2 + 50.f };
float roadMarkY{ g_WindowHeight * 3/4};
int moveValue{};
float carX{};
float carY{};
float carSpeed{};
float roadSpeed{};

#pragma endregion

#pragma region gameFunctions
void Start();
void Draw();
void Update(float elapsedSec);
void End();
#pragma endregion gameFunctions

#pragma region inputHandling
void OnKeyDownEvent(SDL_Keycode key);
void OnKeyUpEvent(SDL_Keycode key);
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e);
void OnMouseDownEvent(const SDL_MouseButtonEvent& e);
void OnMouseUpEvent(const SDL_MouseButtonEvent& e);
#pragma endregion inputHandling

#pragma region myFunctionDeclarations

void drawRoadMark(float brickX);
void drawRoad();
void drawBackground();
void drawCar();

#pragma endregion
