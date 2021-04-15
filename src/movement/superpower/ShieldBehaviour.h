#pragma once

#include "../_parent/AbilityBehaviour.h"

/**
 * 能力ーガード動作クラス
 */
class ShieldBehaviour : public AbilityBehaviour
{
public:
	/**
	 * 能力ーガード動作
	 * @param entity 動作を修行するキャラクター
	 */
	void Execute(Entity*) override;
};
