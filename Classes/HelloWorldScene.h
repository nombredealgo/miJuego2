#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "puffer.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
	 bool agachadoactivo;
	 bool patadactiva;
	 bool pu�oactivo;
	 bool patada2activa;
	 bool patadavolac;
     


	void loadchange(float dt);
	bool load;
	void nomuerto (float dt);
	int contador;
	int random;
	bool muerto;
	void update(float dt);
	Node* anoobis;
	Node* vidapuffer;
	
	int vidapuf;
	int vidaene;
	int hpanoobisY;
	int hpapufY;

   // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);   
	
private:
	
};

#endif // __HELLOWORLD_SCENE_H__
