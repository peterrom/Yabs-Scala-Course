/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/Checkin.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

Checkin::Checkin() : 
		_m_name_isSet(false) {
}

Checkin::Checkin(const std::string& name) : 
		m_name(name),
		_m_name_isSet(true) {
}

Checkin::~Checkin() {
}

const std::string& Checkin::getName() const {
	return m_name;
}

std::string& Checkin::getNameMutable() {
	_m_name_isSet = true;
	return m_name;
}

Checkin& Checkin::setName(const std::string& name) {
	m_name = name;
	_m_name_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Checkin::hasName() const {
	return _isNameSet(mgen::SHALLOW);
}

Checkin& Checkin::unsetName() {
	_setNameSet(false, mgen::SHALLOW);
	return *this;
}

bool Checkin::operator==(const Checkin& other) const {
	return true
		 && _isNameSet(mgen::SHALLOW) == other._isNameSet(mgen::SHALLOW)
		 && getName() == other.getName();
}

bool Checkin::operator!=(const Checkin& other) const {
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
		  
const mgen::Field * Checkin::_fieldById(const short id) const {
	switch (id) {
	case _field_name_id:
		return &_field_name_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Checkin::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("name", &Checkin::_field_name_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Checkin::_typeId() const {
	return _type_id;
}

const std::string& Checkin::_typeName() const {
	return _type_name();
}

const short Checkin::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Checkin::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Checkin::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Checkin::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Checkin::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Checkin::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Checkin::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Checkin::_fieldMetadatas() const {
	return _field_metadatas();
}

Checkin& Checkin::_setNameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_name = "";
	_m_name_isSet = state;
	return *this;
}

Checkin& Checkin::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setNameSet(state, depth);
	return *this;
}

int Checkin::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isNameSet(depth) ? 1 : 0;
	return out;
}

bool Checkin::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_name_id):
			return _isNameSet(depth);
		default:
			return false;
	}
}

bool Checkin::_isNameSet(const mgen::FieldSetDepth depth) const {
	return _m_name_isSet;
}

bool Checkin::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Checkin::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Checkin&>(other) == *this;
}

Checkin * Checkin::_deepCopy() const {
	return new Checkin(*this);
}

mgen::MGenBase * Checkin::_newInstance() {
	return new Checkin;
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
		  
const std::string& Checkin::_type_name() {
	static const std::string out("se.yabs.aichallenge.Checkin");
	return out;
}

const std::vector<long long>& Checkin::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 4589873252555491528LL;
	return out;
}

const std::vector<short>& Checkin::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << 22716;
	return out;
}

const std::vector<std::string>& Checkin::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.Checkin";
	return out;
}

const std::vector<std::string>& Checkin::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "WLw";
	return out;
}

const std::string& Checkin::_type_ids_16bit_base64_string() {
	static const std::string out("o6oWLw");
	return out;
}

const std::string& Checkin::_type_id_16bit_base64() {
	static const std::string out("WLw");
	return out;
}

const std::vector<mgen::Field>& Checkin::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_name_metadata();
	return out;
}

const mgen::Field& Checkin::_field_name_metadata() {
	static const mgen::Field out(-28058, "name");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

