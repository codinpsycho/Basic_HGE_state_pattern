#include "stdafx.h"
#include "StateIntro.h"
#include "StateManager.h"

StateIntro::StateIntro(void)
{
}


StateIntro::~StateIntro(void)
{
}

bool StateIntro::Update(float dt)
{
	if(GetHGE()->Input_GetKeyState(VK_ESCAPE))
		StateManager::Instance().SetState(eMenu, eDestroy);
	return true;
}

bool StateIntro::Render()
{
	GetHGE()->Gfx_Clear(0x00ff0000);
	return true;
}

bool StateIntro::Init()
{
	return true;
}

bool StateIntro::Destroy()
{
	return true;
}
