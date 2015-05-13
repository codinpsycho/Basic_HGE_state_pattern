#pragma once
#include "istate.h"
#include "IState.h"

class StateOptions :public IState
{
public:
	StateOptions(void);
	~StateOptions(void);
	bool Update(float dt);
	bool Render();
	bool Init();
	bool Destroy();
};

