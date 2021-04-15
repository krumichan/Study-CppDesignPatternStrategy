#pragma once

#include "../information/Ability.h"
#include <memory>

/**
 * キャラクターの基底クラス
 */
class Entity
{
protected:
	/**
	 * コンストラクタ
	 */
	Entity();

public:
	/**
	 * 能力値
	 */
	std::unique_ptr<Ability> ability;
};
