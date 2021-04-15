#pragma once

#include "../movement/_parent/AbilityBehaviour.h"
#include "../movement/_parent/MoveBehaviour.h"
#include "_parent/Entity.h"

/**
 * 人クラス
 */
class Person : public Entity
{
public:
	/**
	 * コンストラクタ
	 */
	Person();

protected:
	/**
	 * 能力
	 */
	std::unique_ptr<AbilityBehaviour> abilityBehaviour;

	/**
	 * 移動方法
	 */
	std::unique_ptr<MoveBehaviour> moveBehaviour;

public:
	/**
	 * 能力をセットする
	 * @param 能力
	 */
	void SetAbilityBehaviour(std::unique_ptr<AbilityBehaviour>);

	/**
	 * 移動をセットする
	 * @param 移動
	 */
	void SetMoveBehaviour(std::unique_ptr<MoveBehaviour>);

public:
	/**
	 * 能力動作
	 */
	void PerformAbility();

	/**
	 * 移動動作
	 */
	void PerformMove();
};
