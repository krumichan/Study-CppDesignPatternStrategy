#include "Entity.h"
#include <memory>

/**
 * コンストラクタ
 */
Entity::Entity()
{
	using namespace std;

	this->ability = make_unique<Ability>();
}
