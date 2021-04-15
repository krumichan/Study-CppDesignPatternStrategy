#include "WalkBehaviour.h"
#include <iostream>

/**
 * 移動ー歩き動作
 * @param entity 動作を修行するキャラクター
 */
void WalkBehaviour::Execute(Entity* entity)
{
	using namespace std;

	Ability* pAbility = entity->ability.get();
	auto moveSpeed = pAbility->moveSpeed;

	cout << "do walk !!" << endl;
	cout << "speed : " << moveSpeed << endl;
}
