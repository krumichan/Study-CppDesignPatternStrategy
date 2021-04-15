#pragma once

#include "../../template/AbstractBehaviour.h"

/**
 * 能力動作の基底クラス
 */
class AbilityBehaviour : public AbstractBehaviour
{
protected:
	/**
	 * コンストラクタ
	 */
	AbilityBehaviour();

public:
	/**
	 * デストラクタ
	 */
	~AbilityBehaviour();

public:
	/**
	 * 動作実行
	 * @param 動作対象キャラクター
	 */
	virtual void Execute(Entity*) override = 0;
};
