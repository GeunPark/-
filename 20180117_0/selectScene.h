#pragma once
#include "gameNode.h"
#include "button.h"

class selectScene : public gameNode
{
private:
	//�� �ٲܶ� ����� ��ư
	button* _btnSceneChange;

public:
	HRESULT init();
	void release();
	void update();
	void render();

	//�������� �Ǿ��־ static���� �����(�ݹ��Լ��� ���� �Լ�)
	static void cbSceneChange();


	selectScene();
	~selectScene();
};

