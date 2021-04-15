#include "Person.h"
#include <iostream>

using namespace std;

/**
 * コンストラクタ
 */
Person::Person() : Entity()
{
	Ability* pAbility = this->ability.get();
	pAbility->damage = 100;
	pAbility->shield = 100;
	pAbility->moveSpeed = 10;
}

/**
 * 能力動作
 */
void Person::PerformAbility()
{
	AbstractBehaviour* behaviour = this->abilityBehaviour.get();
	behaviour->Execute(this);
}

/**
 * 移動動作
 */
void Person::PerformMove()
{
	AbstractBehaviour* behaviour = this->moveBehaviour.get();
	behaviour->Execute(this);
}

/**
 * 能力をセットする
 * @param 能力
 */
void Person::SetAbilityBehaviour(std::unique_ptr<AbilityBehaviour> _ability)
{
	cout << "能力変更" << endl;

	this->abilityBehaviour.reset();
	this->abilityBehaviour = std::move(_ability);
}

/**
 * 移動をセットする
 * @param 移動
 */
void Person::SetMoveBehaviour(std::unique_ptr<MoveBehaviour> _moving)
{
	cout << "移動方法変更" << endl;

	this->moveBehaviour.reset();
	this->moveBehaviour = std::move(_moving);
}
