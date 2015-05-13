#include "stdafx.h"
#include "StateManager.h"
#include "IState.h"
#include "StateIntro.h"
#include "StateMenu.h"
#include "StateInGame.h"
#include "StateOptions.h"
#include "StatePaused.h"

StateManager* StateManager::m_instance = NULL;
StateManager::StateManager(void)
{
}

StateManager::~StateManager(void)
{
}

bool StateManager::Init()
{
	AddState( eIntro, new StateIntro() );
	AddState( eMenu, new StateMenu() );
	AddState( eInGame, new StateInGame() );
	AddState( eOptions, new StateOptions() );
	AddState( ePaused, new StatePaused() );

	PlayState(eIntro);
	return true;
}

void StateManager::PlayState(eGameStates _state)
{  
	m_activeStates.push_back(m_totalGameStates[_state]);
	m_activeStates.back()->Init();
}

void StateManager::DestroyState(eGameStates _state)
{
	m_activeStates.back()->Destroy();
	m_activeStates.pop_back();
}

void StateManager::SetState(eGameStates _state, eWhatToDoWithCurrentState what)
{
	switch(what)
	{
	case eDestroy:
		DestroyState(_state);
		break;

	case ePause:
		//This simply means we play the new state, previous state will automatically be paused
		//Do nothing, its just for understanding
		break;
	}

	PlayState(_state);
}

bool StateManager::Update(float dt)
{  
	return m_activeStates.back()->Update(dt);
}

bool StateManager::Render()
{
	for(int i = 0, end = m_activeStates.size(); i < end; ++i)
		m_activeStates[i]->Render();

	return true;
}
