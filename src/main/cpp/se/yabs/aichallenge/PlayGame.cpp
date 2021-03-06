/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/PlayGame.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

PlayGame::PlayGame() : 
		m_game(GameSelection_UNKNOWN),
		_m_game_isSet(false) {
}

PlayGame::PlayGame(const GameSelection& game) : 
		m_game(game),
		_m_game_isSet(true) {
}

PlayGame::~PlayGame() {
}

const GameSelection& PlayGame::getGame() const {
	return m_game;
}

GameSelection& PlayGame::getGameMutable() {
	_m_game_isSet = true;
	return m_game;
}

PlayGame& PlayGame::setGame(const GameSelection& game) {
	m_game = game;
	_m_game_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool PlayGame::hasGame() const {
	return _isGameSet(mgen::SHALLOW);
}

PlayGame& PlayGame::unsetGame() {
	_setGameSet(false, mgen::SHALLOW);
	return *this;
}

bool PlayGame::operator==(const PlayGame& other) const {
	return true
		 && _isGameSet(mgen::SHALLOW) == other._isGameSet(mgen::SHALLOW)
		 && getGame() == other.getGame();
}

bool PlayGame::operator!=(const PlayGame& other) const {
	return !(*this == other);
}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
const mgen::Field * PlayGame::_fieldById(const short id) const {
	switch (id) {
	case _field_game_id:
		return &_field_game_metadata();
	default:
		return 0;
	}
}

const mgen::Field * PlayGame::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("game", &PlayGame::_field_game_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long PlayGame::_typeId() const {
	return _type_id;
}

const std::string& PlayGame::_typeName() const {
	return _type_name();
}

const short PlayGame::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& PlayGame::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& PlayGame::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& PlayGame::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& PlayGame::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& PlayGame::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& PlayGame::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& PlayGame::_fieldMetadatas() const {
	return _field_metadatas();
}

PlayGame& PlayGame::_setGameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_game = GameSelection_UNKNOWN;
	_m_game_isSet = state;
	return *this;
}

PlayGame& PlayGame::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setGameSet(state, depth);
	return *this;
}

int PlayGame::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isGameSet(depth) ? 1 : 0;
	return out;
}

bool PlayGame::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_game_id):
			return _isGameSet(depth);
		default:
			return false;
	}
}

bool PlayGame::_isGameSet(const mgen::FieldSetDepth depth) const {
	return _m_game_isSet;
}

bool PlayGame::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool PlayGame::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const PlayGame&>(other) == *this;
}

PlayGame * PlayGame::_deepCopy() const {
	return new PlayGame(*this);
}

mgen::MGenBase * PlayGame::_newInstance() {
	return new PlayGame;
}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
const std::string& PlayGame::_type_name() {
	static const std::string out("se.yabs.aichallenge.PlayGame");
	return out;
}

const std::vector<long long>& PlayGame::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 1984944623186213537LL;
	return out;
}

const std::vector<short>& PlayGame::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -20702;
	return out;
}

const std::vector<std::string>& PlayGame::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.PlayGame";
	return out;
}

const std::vector<std::string>& PlayGame::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "ryI";
	return out;
}

const std::string& PlayGame::_type_ids_16bit_base64_string() {
	static const std::string out("o6oryI");
	return out;
}

const std::string& PlayGame::_type_id_16bit_base64() {
	static const std::string out("ryI");
	return out;
}

const std::vector<mgen::Field>& PlayGame::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_game_metadata();
	return out;
}

const mgen::Field& PlayGame::_field_game_metadata() {
	static const mgen::Field out(24849, "game");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

