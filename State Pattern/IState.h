#pragma once
class IState
{
public:
  IState(void);
  virtual ~IState(void);

  virtual bool Update(float dt) = 0;
  virtual bool Render() = 0;
  virtual bool Init() = 0;
  virtual bool Destroy() = 0;
};

