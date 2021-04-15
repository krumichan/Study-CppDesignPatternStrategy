#pragma once

#include "../../template/AbstractBehaviour.h"

/**
 * 移動動作の基底クラス
 */
class MoveBehaviour : public AbstractBehaviour
{
protected:
	/**
	 * コンストラクタ
	 */
	MoveBehaviour();

public:
	/**
	 * デストラクタ
	 */
	~MoveBehaviour();

public:
	/**
	 * 動作実行
	 * @param 対象キャラクター
	 */
	virtual void Execute(Entity*) override = 0;
};
