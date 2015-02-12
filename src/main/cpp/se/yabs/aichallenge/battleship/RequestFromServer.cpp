/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/RequestFromServer.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

RequestFromServer::RequestFromServer() {
}

RequestFromServer::~RequestFromServer() {
}

/* custom_methods_begin *//* custom_methods_end */

bool RequestFromServer::operator==(const RequestFromServer& other) const {
	return true;
}

bool RequestFromServer::operator!=(const RequestFromServer& other) const {
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
		  
const mgen::Field * RequestFromServer::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * RequestFromServer::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RequestFromServer::_typeId() const {
	return _type_id;
}

const std::string& RequestFromServer::_typeName() const {
	return _type_name();
}

const short RequestFromServer::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RequestFromServer::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RequestFromServer::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RequestFromServer::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RequestFromServer::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RequestFromServer::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RequestFromServer::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RequestFromServer::_fieldMetadatas() const {
	return _field_metadatas();
}

RequestFromServer& RequestFromServer::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int RequestFromServer::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool RequestFromServer::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool RequestFromServer::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RequestFromServer::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RequestFromServer&>(other) == *this;
}

RequestFromServer * RequestFromServer::_deepCopy() const {
	return new RequestFromServer(*this);
}

mgen::MGenBase * RequestFromServer::_newInstance() {
	return new RequestFromServer;
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
		  
const std::string& RequestFromServer::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.RequestFromServer");
	return out;
}

const std::vector<long long>& RequestFromServer::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2246573734118294447LL << 2567022198048374295LL << 4376863526841852150LL;
	return out;
}

const std::vector<short>& RequestFromServer::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -25529 << 29355 << -1088;
	return out;
}

const std::vector<std::string>& RequestFromServer::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameMessage" << "se.yabs.aichallenge.battleship.BattleshipMessage" << "se.yabs.aichallenge.battleship.RequestFromServer";
	return out;
}

const std::vector<std::string>& RequestFromServer::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "nEc" << "cqs" << "+8A";
	return out;
}

const std::string& RequestFromServer::_type_ids_16bit_base64_string() {
	static const std::string out("o6onEccqs+8A");
	return out;
}

const std::string& RequestFromServer::_type_id_16bit_base64() {
	static const std::string out("+8A");
	return out;
}

const std::vector<mgen::Field>& RequestFromServer::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

