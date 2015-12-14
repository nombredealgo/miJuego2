#include "vida.h"

USING_NS_CC;

Sprite *vida::createVida(int vida,int posicionx)
{   
	 
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
	

	auto barravida = Sprite::create("hp.png");   // Create it
	barravida->setPosition(posicionx, 200);
	barravida->setScaleY(vida);
	
	return barravida;
	

	}





