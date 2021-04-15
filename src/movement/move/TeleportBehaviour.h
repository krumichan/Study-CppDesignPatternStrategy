#pragma once

#include "../_parent/MoveBehaviour.h"

/**
 * 移動ーテレポート動作クラス
 */
class TeleportBehaviour : public MoveBehaviour
{
public:
	/**
	 * 移動ーテレポート動作
	 * @param entity 動作を修行するキャラクター
	 */
	void Execute(Entity*) override;
};
