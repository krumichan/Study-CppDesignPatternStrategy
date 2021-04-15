#pragma once

#include "../_parent/MoveBehaviour.h"

/**
 * 移動ー飛行動作クラス
 */
class FlyBehaviour : public MoveBehaviour
{
public:
	/**
	 * 移動ー飛行動作
	 * @param entity 動作を修行するキャラクター
	 */
	void Execute(Entity*) override;
};
