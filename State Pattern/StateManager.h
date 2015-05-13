#pragma once

#include <map>
#include <vector>

enum  eGameStates
{ 
	eIntro, 
	eMenu, 
	eOptions, 
	eInGame, 
	ePaused,

	eNumStates
};
enum  eWhatToDoWithCurrentState { ePause, eDestroy};

class IState;

class StateManager
{
	StateManager(void);
	static StateManager  *m_instance;
	std::map<eGameStates,IState*>  m_totalGameStates;
	std::vector<IState*> m_activeStates;

	void PlayState(eGameStates _state);         //This function call will actually set it as current state and Call its Init()  
	void DestroyState(eGameStates _state);      //It unloads all resources allocated in this state

public:

	static StateManager& Instance()
	{
		if(m_instance)	return *m_instance;

		m_instance = new StateManager();
	}

	bool Init();
	bool Render();
	bool Update(float dt);
	//State manipulation functions
	void AddState(eGameStates _id, IState *_state)           { m_totalGameStates[_id] = _state;   }  
	void SetState(eGameStates _state, eWhatToDoWithCurrentState what);
	~StateManager(void);
};


