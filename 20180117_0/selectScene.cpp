#include "stdafx.h"
#include "selectScene.h"


selectScene::selectScene()
{
}


selectScene::~selectScene()
{

}

HRESULT selectScene::init()
{
	_btnSceneChange = new button;
	//��ư �ʱ�ȭ(��ư�̹��� Ű��, X, Y��ǥ, ������X, Y ��ǥ, �ݹ������ �Լ��̸�)
	_btnSceneChange->init("��ư", WINSIZEX / 2, WINSIZEY - 100,
		PointMake(0, 1), PointMake(0, 0), cbSceneChange);


	return S_OK;
}

void selectScene::release()
{

}

void selectScene::update() 
{
	_btnSceneChange->update();
}

void selectScene::render() 
{
	TextOut(getMemDC(), WINSIZEX / 2, 100, "����Ʈ ���̿�!", strlen("����Ʈ ���̿�!"));
	_btnSceneChange->render();
}

void selectScene::cbSceneChange()
{
	SCENEMANAGER->changeScene("��Ÿ��");
}