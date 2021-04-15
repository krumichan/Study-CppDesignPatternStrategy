#pragma once

#include "../_parent/AbilityBehaviour.h"

/**
 * 能力ー攻撃動作クラス
 */
class AttackBehaviour : public AbilityBehaviour
{
public:
	/**
	 * 能力ー攻撃動作
	 * @param entity 動作を修行するキャラクター
	 */
	void Execute(Entity*) override;
};
