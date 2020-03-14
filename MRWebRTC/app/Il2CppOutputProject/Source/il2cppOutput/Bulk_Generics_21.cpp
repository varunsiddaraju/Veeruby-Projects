#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;

struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.IReference`1<System.String>
struct NOVTABLE IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt16>
struct NOVTABLE IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A(uint16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt32>
struct NOVTABLE IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt64>
struct NOVTABLE IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76(uint64_t* comReturnValue) = 0;
};
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef DATETIME_T9D0F9E236B6200FF6413DD837230D25E285E7795_H
#define DATETIME_T9D0F9E236B6200FF6413DD837230D25E285E7795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T9D0F9E236B6200FF6413DD837230D25E285E7795_H
#ifndef FOUNDATIONCONTRACT_TA5129870FD2EAAE9518C2EA28B32757D4FD977E9_H
#define FOUNDATIONCONTRACT_TA5129870FD2EAAE9518C2EA28B32757D4FD977E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.FoundationContract
struct  FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUNDATIONCONTRACT_TA5129870FD2EAAE9518C2EA28B32757D4FD977E9_H
#ifndef HRESULT_TD2916D1ECD3A4E474B4A639B8D27E510FF8421DB_H
#define HRESULT_TD2916D1ECD3A4E474B4A639B8D27E510FF8421DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.HResult
struct  HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HRESULT_TD2916D1ECD3A4E474B4A639B8D27E510FF8421DB_H
#ifndef POINT_TEC1815EC53B414E5281C817051DA4F985DB9C8C1_H
#define POINT_TEC1815EC53B414E5281C817051DA4F985DB9C8C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_TEC1815EC53B414E5281C817051DA4F985DB9C8C1_H
#ifndef POINT_T7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_H
#define POINT_T7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_H
#ifndef RECT_TC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA_H
#define RECT_TC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_TC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA_H
#ifndef RECT_TD277A11EF3F3CC633796B8FF0BC4822826E72BB0_H
#define RECT_TD277A11EF3F3CC633796B8FF0BC4822826E72BB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_TD277A11EF3F3CC633796B8FF0BC4822826E72BB0_H
#ifndef SIZE_T4766FF009097CE547F699B69250246058DA664D9_H
#define SIZE_T4766FF009097CE547F699B69250246058DA664D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t4766FF009097CE547F699B69250246058DA664D9 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T4766FF009097CE547F699B69250246058DA664D9_H
#ifndef SIZE_TBE9F75FCA10276DC3998237A8906733B64FB75A2_H
#define SIZE_TBE9F75FCA10276DC3998237A8906733B64FB75A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_TBE9F75FCA10276DC3998237A8906733B64FB75A2_H
#ifndef TIMESPAN_TD18885B289077804D4E82931E68E84181C072755_H
#define TIMESPAN_TD18885B289077804D4E82931E68E84181C072755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TimeSpan
struct  TimeSpan_tD18885B289077804D4E82931E68E84181C072755 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_tD18885B289077804D4E82931E68E84181C072755, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TD18885B289077804D4E82931E68E84181C072755_H
#ifndef UNIVERSALAPICONTRACT_T2909295C70CE09107C85CD360BE6888A4D1078D9_H
#define UNIVERSALAPICONTRACT_T2909295C70CE09107C85CD360BE6888A4D1078D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T2909295C70CE09107C85CD360BE6888A4D1078D9_H
#ifndef ATTRIBUTETARGETS_T7CC0DE6D2B11C951E525EE69AD02313792932741_H
#define ATTRIBUTETARGETS_T7CC0DE6D2B11C951E525EE69AD02313792932741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t7CC0DE6D2B11C951E525EE69AD02313792932741 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t7CC0DE6D2B11C951E525EE69AD02313792932741, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T7CC0DE6D2B11C951E525EE69AD02313792932741_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef ASYNCSTATUS_TBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E_H
#define ASYNCSTATUS_TBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_tBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_tBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATUS_TBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E_H
// Windows.Foundation.IReference`1<Windows.Foundation.DateTime>
struct NOVTABLE IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A(FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1(HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(Size_t4766FF009097CE547F699B69250246058DA664D9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * comReturnValue) = 0;
};
#ifndef MARSHALINGTYPE_T9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6_H
#define MARSHALINGTYPE_T9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_t9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALINGTYPE_T9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6_H
#ifndef THREADINGMODEL_TE658033D954DB5DFFE88703D1FA993679892B9DE_H
#define THREADINGMODEL_TE658033D954DB5DFFE88703D1FA993679892B9DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingModel
struct  ThreadingModel_tE658033D954DB5DFFE88703D1FA993679892B9DE 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_tE658033D954DB5DFFE88703D1FA993679892B9DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGMODEL_TE658033D954DB5DFFE88703D1FA993679892B9DE_H
#ifndef PROPERTYTYPE_T57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C_H
#define PROPERTYTYPE_T57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.PropertyType
struct  PropertyType_t57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTYPE_T57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C_H
#ifndef MEDIACAPTURESHARINGMODE_T709FC278CCF274E8D4E431EC0EFB5286C718278F_H
#define MEDIACAPTURESHARINGMODE_T709FC278CCF274E8D4E431EC0EFB5286C718278F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCaptureSharingMode
struct  MediaCaptureSharingMode_t709FC278CCF274E8D4E431EC0EFB5286C718278F 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCaptureSharingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCaptureSharingMode_t709FC278CCF274E8D4E431EC0EFB5286C718278F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTURESHARINGMODE_T709FC278CCF274E8D4E431EC0EFB5286C718278F_H
#ifndef PHOTOCAPTURESOURCE_TFA616333C7CFE9656434062D902F70451CAC3901_H
#define PHOTOCAPTURESOURCE_TFA616333C7CFE9656434062D902F70451CAC3901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.PhotoCaptureSource
struct  PhotoCaptureSource_tFA616333C7CFE9656434062D902F70451CAC3901 
{
public:
	// System.Int32 Windows.Media.Capture.PhotoCaptureSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotoCaptureSource_tFA616333C7CFE9656434062D902F70451CAC3901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTOCAPTURESOURCE_TFA616333C7CFE9656434062D902F70451CAC3901_H
#ifndef STREAMINGCAPTUREMODE_T41FE4545C5AB219D828E6395A9D2C103289C0F76_H
#define STREAMINGCAPTUREMODE_T41FE4545C5AB219D828E6395A9D2C103289C0F76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.StreamingCaptureMode
struct  StreamingCaptureMode_t41FE4545C5AB219D828E6395A9D2C103289C0F76 
{
public:
	// System.Int32 Windows.Media.Capture.StreamingCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingCaptureMode_t41FE4545C5AB219D828E6395A9D2C103289C0F76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCAPTUREMODE_T41FE4545C5AB219D828E6395A9D2C103289C0F76_H
#ifndef PROCESSORARCHITECTURE_TB2FD2B39512FC83D73993C06EFC2E0274517A42F_H
#define PROCESSORARCHITECTURE_TB2FD2B39512FC83D73993C06EFC2E0274517A42F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.System.ProcessorArchitecture
struct  ProcessorArchitecture_tB2FD2B39512FC83D73993C06EFC2E0274517A42F 
{
public:
	// System.Int32 Windows.System.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_tB2FD2B39512FC83D73993C06EFC2E0274517A42F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_TB2FD2B39512FC83D73993C06EFC2E0274517A42F_H
#ifndef TYPEKIND_TFC0FD272ED78E70CA1173A99B89D31193D93239C_H
#define TYPEKIND_TFC0FD272ED78E70CA1173A99B89D31193D93239C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEKIND_TFC0FD272ED78E70CA1173A99B89D31193D93239C_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>
struct NOVTABLE IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_tAED774804E022955C705DD94598B4447B0142C06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCaptureSharingMode>
struct NOVTABLE IReference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mECE787DCDE45B5BA1DC35BA3403F7B9CAE478050(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.PhotoCaptureSource>
struct NOVTABLE IReference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEE0DE0C32EE6C8EF51706683FFAD3899398CA033(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>
struct NOVTABLE IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.System.ProcessorArchitecture>
struct NOVTABLE IReference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1D372DED38CF28D92BB0DF029FBD668320F3BB3D(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(int32_t* comReturnValue) = 0;
};
#ifndef ATTRIBUTETARGETS_TA7256AD263010BF992D3949CE57A314716980FA7_H
#define ATTRIBUTETARGETS_TA7256AD263010BF992D3949CE57A314716980FA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeTargets
struct  AttributeTargets_tA7256AD263010BF992D3949CE57A314716980FA7 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_tA7256AD263010BF992D3949CE57A314716980FA7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_TA7256AD263010BF992D3949CE57A314716980FA7_H
#ifndef TYPENAME_T17AF60463A5503D900B87745B0BF9C96F0F82EEC_H
#define TYPENAME_T17AF60463A5503D900B87745B0BF9C96F0F82EEC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T17AF60463A5503D900B87745B0BF9C96F0F82EEC_H
// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime* comReturnValue) = 0;
};

extern "C" void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);
extern "C" void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled);
extern "C" void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);


#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.String>::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563* ____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563::IID, reinterpret_cast<void**>(&____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563->IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844(&returnValue);
	____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA* ____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA::IID, reinterpret_cast<void**>(&____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  returnValue = {};
	hr = ____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA->IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD(&returnValue);
	____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Type>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Type_t * IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97* ____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97::IID, reinterpret_cast<void**>(&____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppWindowsRuntimeTypeName returnValue = Il2CppWindowsRuntimeTypeName();
	hr = ____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97->IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C(&returnValue);
	____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Type_t * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_type_from_native(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_delete_native_type(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint16_t IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB* ____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB::IID, reinterpret_cast<void**>(&____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB->IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A(&returnValue);
	____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00* ____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00::IID, reinterpret_cast<void**>(&____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00->IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302(&returnValue);
	____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint64_t IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371* ____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371::IID, reinterpret_cast<void**>(&____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371->IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76(&returnValue);
	____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614* ____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614::IID, reinterpret_cast<void**>(&____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614->IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304(&returnValue);
	____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.DateTime>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4* ____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4::IID, reinterpret_cast<void**>(&____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  returnValue = {};
	hr = ____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4->IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A(&returnValue);
	____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E* ____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E::IID, reinterpret_cast<void**>(&____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  returnValue = {};
	hr = ____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E->IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A(&returnValue);
	____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.HResult>::get_Value()
extern "C" IL2CPP_METHOD_ATTR HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E* ____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E::IID, reinterpret_cast<void**>(&____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  returnValue = {};
	hr = ____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E->IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1(&returnValue);
	____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256* ____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256::IID, reinterpret_cast<void**>(&____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256->IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929(&returnValue);
	____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tAED774804E022955C705DD94598B4447B0142C06* ____ireference_1_tAED774804E022955C705DD94598B4447B0142C06 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tAED774804E022955C705DD94598B4447B0142C06::IID, reinterpret_cast<void**>(&____ireference_1_tAED774804E022955C705DD94598B4447B0142C06));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tAED774804E022955C705DD94598B4447B0142C06->IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6(&returnValue);
	____ireference_1_tAED774804E022955C705DD94598B4447B0142C06->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD* ____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD::IID, reinterpret_cast<void**>(&____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD->IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B(&returnValue);
	____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696* ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696::IID, reinterpret_cast<void**>(&____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  returnValue = {};
	hr = ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696->IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(&returnValue);
	____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121* ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121::IID, reinterpret_cast<void**>(&____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  returnValue = {};
	hr = ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121->IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(&returnValue);
	____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1* ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1::IID, reinterpret_cast<void**>(&____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1->IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(&returnValue);
	____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34* ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34::IID, reinterpret_cast<void**>(&____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  returnValue = {};
	hr = ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34->IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(&returnValue);
	____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9* ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9::IID, reinterpret_cast<void**>(&____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  returnValue = {};
	hr = ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9->IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(&returnValue);
	____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_t4766FF009097CE547F699B69250246058DA664D9  IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5* ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5::IID, reinterpret_cast<void**>(&____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t4766FF009097CE547F699B69250246058DA664D9  returnValue = {};
	hr = ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5->IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(&returnValue);
	____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60* ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60::IID, reinterpret_cast<void**>(&____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  returnValue = {};
	hr = ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60->IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(&returnValue);
	____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_tD18885B289077804D4E82931E68E84181C072755  IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921* ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921::IID, reinterpret_cast<void**>(&____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_tD18885B289077804D4E82931E68E84181C072755  returnValue = {};
	hr = ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921->IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(&returnValue);
	____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32* ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32::IID, reinterpret_cast<void**>(&____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  returnValue = {};
	hr = ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32->IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(&returnValue);
	____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCaptureSharingMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mECE787DCDE45B5BA1DC35BA3403F7B9CAE478050 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F* ____ireference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F::IID, reinterpret_cast<void**>(&____ireference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F->IReference_1_get_Value_mECE787DCDE45B5BA1DC35BA3403F7B9CAE478050(&returnValue);
	____ireference_1_tF911C29D4CAB7A9D6A20980744460BA861A6046F->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.PhotoCaptureSource>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mEE0DE0C32EE6C8EF51706683FFAD3899398CA033 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6* ____ireference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6::IID, reinterpret_cast<void**>(&____ireference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6->IReference_1_get_Value_mEE0DE0C32EE6C8EF51706683FFAD3899398CA033(&returnValue);
	____ireference_1_t5A973ED1747431FFDAF6F2EB05125312673843E6->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4* ____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4::IID, reinterpret_cast<void**>(&____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4->IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1(&returnValue);
	____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.System.ProcessorArchitecture>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1D372DED38CF28D92BB0DF029FBD668320F3BB3D (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F* ____ireference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F::IID, reinterpret_cast<void**>(&____ireference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F->IReference_1_get_Value_m1D372DED38CF28D92BB0DF029FBD668320F3BB3D(&returnValue);
	____ireference_1_t9A5AAD7CCEE5E362DE9B9908EC85B1C33913DD3F->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882* ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882::IID, reinterpret_cast<void**>(&____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882->IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(&returnValue);
	____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD* ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD::IID, reinterpret_cast<void**>(&____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime returnValue = {};
	hr = ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD->IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(&returnValue);
	____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
