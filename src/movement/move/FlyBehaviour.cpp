#include "FlyBehaviour.h"
#include <iostream>

/**
 * 移動ー飛行動作
 * @param entity 動作を修行するキャラクター
 */
void FlyBehaviour::Execute(Entity* entity)
{
	using namespace std;

	Ability* pAbility = entity->ability.get();
	auto moveSpeed = pAbility->moveSpeed;

	cout << "do fly !!" << endl;
	cout << "speed : " << moveSpeed << endl;
}
