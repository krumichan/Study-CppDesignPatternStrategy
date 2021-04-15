#include "entity/Person.h"
#include "movement/move/WalkBehaviour.h"
#include "movement/move/FlyBehaviour.h"
#include "movement/superpower/AttackBehaviour.h"
#include "movement/superpower/ShieldBehaviour.h"
#include <memory>

int main(void)
{
	using namespace std;

	Person person;

	unique_ptr<MoveBehaviour> walking = make_unique<WalkBehaviour>();
	unique_ptr<MoveBehaviour> flying = make_unique<FlyBehaviour>();

	unique_ptr<AbilityBehaviour> attacking = make_unique<AttackBehaviour>();
	unique_ptr<AbilityBehaviour> guarding = make_unique<ShieldBehaviour>();

	person.SetAbilityBehaviour(move(attacking));
	person.SetMoveBehaviour(move(walking));

	person.PerformAbility();
	person.PerformMove();

	person.SetAbilityBehaviour(move(guarding));
	person.SetMoveBehaviour(move(flying));

	person.PerformAbility();
	person.PerformMove();

	return 0;
}
