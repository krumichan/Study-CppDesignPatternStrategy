#include "AttackBehaviour.h"
#include <iostream>

/**
 * 能力ー攻撃動作
 * @param entity 動作を修行するキャラクター
 */
void AttackBehaviour::Execute(Entity* entity)
{
	using namespace std;

	Ability* pAbility = entity->ability.get();
	auto damage = pAbility->damage;

	cout << "do attack!!" << endl;
	cout << "damage : " << damage << endl;
}
