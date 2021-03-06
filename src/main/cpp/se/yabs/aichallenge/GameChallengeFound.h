/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_GAMECHALLENGEFOUND
#define SE_YABS_AICHALLENGE_GAMECHALLENGEFOUND

#include "se/yabs/aichallenge/GameSelection.h"
#include "se/yabs/aichallenge/Message.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

class GameChallengeFound : public Message /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	GameSelection m_game;
	std::string m_opponent;
	bool _m_game_isSet;
	bool _m_opponent_isSet;

public:
	GameChallengeFound();
	GameChallengeFound(const GameSelection& game,
			const std::string& opponent);
	virtual ~GameChallengeFound();

	const GameSelection& getGame() const;
	const std::string& getOpponent() const;

	GameSelection& getGameMutable();
	std::string& getOpponentMutable();

	GameChallengeFound& setGame(const GameSelection& game);
	GameChallengeFound& setOpponent(const std::string& opponent);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasGame() const;
	bool hasOpponent() const;

	GameChallengeFound& unsetGame();
	GameChallengeFound& unsetOpponent();

	bool operator==(const GameChallengeFound& other) const;
	bool operator!=(const GameChallengeFound& other) const;


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
public:
	template<typename ReaderType, typename ReadContextType>
	void _readField(const short fieldId, ReadContextType& context, ReaderType& reader) {
		switch (fieldId) {
		case _field_game_id:
			reader.readField(_field_game_metadata(), context, getGameMutable());
			break;
		case _field_opponent_id:
			reader.readField(_field_opponent_metadata(), context, getOpponentMutable());
			break;
		default:
			reader.handleUnknownField(fieldId, context);
			break;
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) const {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 2);
				visitor.visit(getGame(), _field_game_metadata());
				visitor.visit(getOpponent(), _field_opponent_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isGameSet(mgen::SHALLOW))
					visitor.visit(getGame(), _field_game_metadata());
				if (_isOpponentSet(mgen::SHALLOW))
					visitor.visit(getOpponent(), _field_opponent_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 2);
				visitor.visit(getGameMutable(), _field_game_metadata());
				visitor.visit(getOpponentMutable(), _field_opponent_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isGameSet(mgen::SHALLOW))
					visitor.visit(getGameMutable(), _field_game_metadata());
				if (_isOpponentSet(mgen::SHALLOW))
					visitor.visit(getOpponentMutable(), _field_opponent_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	const mgen::Field * _fieldById(const short id) const;
	const mgen::Field * _fieldByName(const std::string& name) const;
	const long long _typeId() const;
	const short _typeId16Bit() const;
	const std::string& _typeId16BitBase64() const;
	const std::string& _typeName() const;

	const std::vector<long long>& _typeIds() const;
	const std::vector<short>& _typeIds16Bit() const;
	const std::vector<std::string>& _typeIds16BitBase64() const;
	const std::string& _typeIds16BitBase64String() const;
	const std::vector<std::string>& _typeNames() const;

	const std::vector<mgen::Field>& _fieldMetadatas() const;

	bool _isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const;

	GameChallengeFound& _setGameSet(const bool state, const mgen::FieldSetDepth depth);
	GameChallengeFound& _setOpponentSet(const bool state, const mgen::FieldSetDepth depth);

	GameChallengeFound& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isGameSet(const mgen::FieldSetDepth depth) const;
	bool _isOpponentSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GameChallengeFound * _deepCopy() const;

	static mgen::MGenBase * _newInstance();

							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
	static const long long _type_id = 7479712952545752927LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 24590;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_game_metadata();
	static const mgen::Field& _field_opponent_metadata();

	static const short _field_game_id = 24849;
	static const short _field_opponent_id = 17849;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GameChallengeFound

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
