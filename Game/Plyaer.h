#pragma once
class Plyaer :public IGameObject
{
	public:
	Plyaer();
	~Plyaer();
	bool Start() override;
	void Update() override;
	void Render(RenderContext& rc) override;

	ModelRender m_modelRender;

};

