#include "ShieldBehaviour.h"
#include <iostream>

/**
 * 能力ーガード動作
 * @param entity 動作を修行するキャラクター
 */
void ShieldBehaviour::Execute(Entity* entity)
{
	using namespace std;

	Ability* pAbility = entity->ability.get();
	auto shield = pAbility->shield;

	cout << "do guard !!" << endl;
	cout << "shield : " << shield << endl;
}
