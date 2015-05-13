#define SAFE_DELETE(ptr)	{ if(ptr) delete ptr; ptr = null; }
#include <hge.h>
#include<vector>
#include<map>
extern HGE *hge;
HGE* GetHGE();