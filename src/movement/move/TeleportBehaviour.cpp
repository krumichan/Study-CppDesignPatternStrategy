#include "TeleportBehaviour.h"
#include <iostream>

/**
 * 移動ーテレポート動作
 * @param entity 動作を修行するキャラクター
 */
void TeleportBehaviour::Execute(Entity* entity)
{
	using namespace std;

	Ability* pAbility = entity->ability.get();
	auto moveSpeed = pAbility->moveSpeed;

	cout << "do teleport !!" << endl;
	cout << "speed : " << moveSpeed << endl;
}
