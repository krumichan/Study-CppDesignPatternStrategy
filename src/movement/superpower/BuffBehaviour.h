#pragma once

#include "../_parent/AbilityBehaviour.h"

/**
 * 能力ーバフ動作クラス
 */
class BuffBehaviour : public AbilityBehaviour
{
public:
	/**
	 * 能力ーバフ動作
	 * @param entity 動作を修行するキャラクター
	 */
	void Execute(Entity*) override;
};
