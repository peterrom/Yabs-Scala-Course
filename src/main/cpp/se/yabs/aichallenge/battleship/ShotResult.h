/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_SHOTRESULT
#define SE_YABS_AICHALLENGE_BATTLESHIP_SHOTRESULT

#include "se/yabs/aichallenge/battleship/BattleshipMessage.h"
#include "se/yabs/aichallenge/battleship/Shot.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class ShotResult : public BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_shooterName;
	Shot m_shot;
	bool _m_shooterName_isSet;
	bool _m_shot_isSet;

public:
	ShotResult();
	ShotResult(const std::string& shooterName,
			const Shot& shot);
	virtual ~ShotResult();

	const std::string& getShooterName() const;
	const Shot& getShot() const;

	std::string& getShooterNameMutable();
	Shot& getShotMutable();

	ShotResult& setShooterName(const std::string& shooterName);
	ShotResult& setShot(const Shot& shot);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasShooterName() const;
	bool hasShot() const;

	ShotResult& unsetShooterName();
	ShotResult& unsetShot();

	bool operator==(const ShotResult& other) const;
	bool operator!=(const ShotResult& other) const;


							
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
		case _field_shooterName_id:
			reader.readField(_field_shooterName_metadata(), context, getShooterNameMutable());
			break;
		case _field_shot_id:
			reader.readField(_field_shot_metadata(), context, getShotMutable());
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
				visitor.visit(getShooterName(), _field_shooterName_metadata());
				visitor.visit(getShot(), _field_shot_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isShooterNameSet(mgen::SHALLOW))
					visitor.visit(getShooterName(), _field_shooterName_metadata());
				if (_isShotSet(mgen::SHALLOW))
					visitor.visit(getShot(), _field_shot_metadata());
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
				visitor.visit(getShooterNameMutable(), _field_shooterName_metadata());
				visitor.visit(getShotMutable(), _field_shot_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isShooterNameSet(mgen::SHALLOW))
					visitor.visit(getShooterNameMutable(), _field_shooterName_metadata());
				if (_isShotSet(mgen::SHALLOW))
					visitor.visit(getShotMutable(), _field_shot_metadata());
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

	ShotResult& _setShooterNameSet(const bool state, const mgen::FieldSetDepth depth);
	ShotResult& _setShotSet(const bool state, const mgen::FieldSetDepth depth);

	ShotResult& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isShooterNameSet(const mgen::FieldSetDepth depth) const;
	bool _isShotSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	ShotResult * _deepCopy() const;

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
		  
	static const long long _type_id = 1236274293076590984LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 20683;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_shooterName_metadata();
	static const mgen::Field& _field_shot_metadata();

	static const short _field_shooterName_id = 867;
	static const short _field_shot_id = 19108;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class ShotResult

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
