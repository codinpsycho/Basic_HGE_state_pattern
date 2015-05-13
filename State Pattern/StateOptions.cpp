#include "stdafx.h"
#include "StateOptions.h"
#include "StateManager.h"

StateOptions::StateOptions(void)
{
}


StateOptions::~StateOptions(void)
{
}

bool StateOptions::Update(float dt)
{
	if(GetHGE()->Input_GetKeyState(VK_ESCAPE))
		StateManager::Instance().SetState(eMenu,eDestroy);
	return true;
}

bool StateOptions::Render()
{
	GetHGE()->Gfx_Clear(0x000000ff);
	return true;
}

bool StateOptions::Init()
{
	return true;
}

bool StateOptions::Destroy()
{
	return true;
}
