#pragma once
#include"IState.h"

class StateIntro : public IState
{
public:
	StateIntro(void);
	~StateIntro(void);
	bool Update(float dt);
	bool Render();
	bool Init();
	bool Destroy();
};

