#include "stdafx.h"
#include "StatePaused.h"


StatePaused::StatePaused(void)
{
}


StatePaused::~StatePaused(void)
{
}

bool StatePaused::Update(float dt)
{
	return true;
}

bool StatePaused::Render()
{
	return true;
}

bool StatePaused::Init()
{
	return true;
}

bool StatePaused::Destroy()
{
	return true;
}
