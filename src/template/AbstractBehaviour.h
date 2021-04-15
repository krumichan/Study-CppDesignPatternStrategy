#pragma once

#include "../entity/_parent/Entity.h"

/**
 * 全ての動作クラスの基底クラス
 */
class AbstractBehaviour
{
protected:
	/**
	 * コンストラクタ
	 */
	AbstractBehaviour();

	/**
	 * デストラクタ
	 */
	virtual ~AbstractBehaviour();

public:
	/**
	 * 動作実行
	 * @param 対象キャラクター
	 */
	virtual void Execute(Entity*) = 0;
};
