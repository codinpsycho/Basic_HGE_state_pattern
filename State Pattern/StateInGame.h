#pragma once
#include "IState.h"

class StateInGame : public IState
{
public:
	StateInGame(void);
	~StateInGame(void);
	bool Update(float dt);
	bool Render();
	bool Init();
	bool Destroy();
};

