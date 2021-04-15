#pragma once

#include "../_parent/MoveBehaviour.h"

/**
 * 移動ー歩き動作クラス
 */
class WalkBehaviour : public MoveBehaviour
{
public:
	/**
	 * 移動ー歩き動作
	 * @param entity 動作を修行するキャラクター
	 */
	void Execute(Entity*) override;
};
