#include "stdafx.h"
#include "StateMenu.h"
#include "StateManager.h"

StateMenu::StateMenu(void)
{
}


StateMenu::~StateMenu(void)
{
}

bool StateMenu::Update(float dt)
{
	if(GetHGE()->Input_GetKeyState(VK_SPACE))
		StateManager::Instance().SetState(eOptions, ePause);
	return true;
}

bool StateMenu::Render()
{
	GetHGE()->Gfx_Clear(0x0000ff00);
	return true;
}

bool StateMenu::Init()
{
	return true;
}

bool StateMenu::Destroy()
{
	return true;
}