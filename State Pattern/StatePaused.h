#pragma once
#include "istate.h"
class StatePaused :
	public IState
{
public:
	StatePaused(void);
	~StatePaused(void);
	bool Update(float dt);
	bool Render();
	bool Init();
	bool Destroy();
};

