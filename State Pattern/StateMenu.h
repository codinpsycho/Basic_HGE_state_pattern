#pragma once
#include "IState.h"

class StateMenu : public IState
{
public:
	StateMenu(void);
	~StateMenu(void);
	bool Update(float dt);
	bool Render();
	bool Init();
	bool Destroy();
};

