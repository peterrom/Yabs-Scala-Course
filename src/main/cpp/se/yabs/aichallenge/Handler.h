/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_HANDLER
#define SE_YABS_AICHALLENGE_HANDLER

#include "ForwardDeclare.h"

namespace se {
namespace yabs {
namespace aichallenge {

class Handler  {
	public:

	Handler();
	virtual ~Handler();
	virtual void handleDiscard(mgen::MGenBase& o);
	virtual void handleUnknown(mgen::MGenBase& o);
	virtual void handle(se::yabs::aichallenge::Message& o);
	virtual void handle(se::yabs::aichallenge::GameMessage& o);
	virtual void handle(se::yabs::aichallenge::WelcomeMessage& o);
	virtual void handle(se::yabs::aichallenge::ErrorMessage& o);
	virtual void handle(se::yabs::aichallenge::Checkin& o);
	virtual void handle(se::yabs::aichallenge::PlayGame& o);
	virtual void handle(se::yabs::aichallenge::GameChallengeFound& o);
	virtual void handle(se::yabs::aichallenge::GamePlayed& o);
	virtual void handle(se::yabs::aichallenge::User& o);
	virtual void handle(se::yabs::aichallenge::UserDb& o);
	virtual void handle(se::yabs::aichallenge::battleship::Ship& o);
	virtual void handle(se::yabs::aichallenge::battleship::Segment& o);
	virtual void handle(se::yabs::aichallenge::battleship::Player& o);
	virtual void handle(se::yabs::aichallenge::battleship::GameState& o);
	virtual void handle(se::yabs::aichallenge::battleship::Vec2& o);
	virtual void handle(se::yabs::aichallenge::battleship::Shot& o);
	virtual void handle(se::yabs::aichallenge::battleship::BattleshipMessage& o);
	virtual void handle(se::yabs::aichallenge::battleship::RequestFromServer& o);
	virtual void handle(se::yabs::aichallenge::battleship::PlaceShipsRequest& o);
	virtual void handle(se::yabs::aichallenge::battleship::PlaceShips& o);
	virtual void handle(se::yabs::aichallenge::battleship::MakeShotRequest& o);
	virtual void handle(se::yabs::aichallenge::battleship::MakeShot& o);
	virtual void handle(se::yabs::aichallenge::battleship::ShotResult& o);
	virtual void handle(se::yabs::aichallenge::battleship::GameOver& o);

}; // End class Handler

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
