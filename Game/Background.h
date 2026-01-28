#pragma once
class Background:public IGameObject
{
public:
	Background();
	~Background();
	bool Start();
	void Update();

	ModelRender m_modelRender;

};

