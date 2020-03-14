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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<System.Object,System.Object>
struct Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>>
struct Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.VoidValueTypeParameter>
struct TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF;
// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E;
// System.Threading.Timer
struct Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553;
// System.Threading.TimerCallback
struct TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB;
// Windows.Foundation.IAsyncInfo
struct IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5;

extern RuntimeClass* Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var;
extern RuntimeClass* CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var;
extern RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
extern RuntimeClass* Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3159FE421B3221381B3C778DC1C3C26E4540BE37;
extern String_t* _stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B;
extern String_t* _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3;
extern String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
extern String_t* _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D;
extern String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
extern String_t* _stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19;
extern String_t* _stringLiteralDA95CC741B3DDD6710CEC3B8B24A4FB0609EB1C1;
extern String_t* _stringLiteralFBFD8740C5AE8DDF9BAFD2055D01B2FCA2854E47;
extern const RuntimeMethod* Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_mA94CADFE8C912F942BAEADC65E4B8E212F5A92E8_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_RuntimeMethod_var;
extern const RuntimeMethod* AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B_RuntimeMethod_var;
extern const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_RuntimeMethod_var;
extern const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_RuntimeMethod_var;
extern const uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E_MetadataUsageId;
extern const uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E_MetadataUsageId;
extern const uint32_t AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10_MetadataUsageId;
extern const uint32_t Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_MetadataUsageId;
extern const uint32_t Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_MetadataUsageId;
extern const uint32_t Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_MetadataUsageId;
extern const uint32_t Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_MetadataUsageId;
extern const uint32_t Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_MetadataUsageId;
extern const uint32_t Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_MetadataUsageId;
extern const uint32_t TaskToAsyncActionAdapter_GetResults_m507FE1CE48032133AA7ADA483475806B3D2C51F6_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B_MetadataUsageId;
extern const uint32_t WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_MetadataUsageId;
extern const uint32_t WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper;
struct IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef U3CMODULEU3E_TDDFD2BEF9E39DE01EC991F5AED0D048A17F81E22_H
#define U3CMODULEU3E_TDDFD2BEF9E39DE01EC991F5AED0D048A17F81E22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tDDFD2BEF9E39DE01EC991F5AED0D048A17F81E22 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TDDFD2BEF9E39DE01EC991F5AED0D048A17F81E22_H
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
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m0632776C609159F4E6D0D5F6DECCE64CC355B779(IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEF447B408CEF9BD7882E596CF87C4355CC17E71B(IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m192BCF4CC6EE9E2E66722E3D2BFBBAEE124D7AD7() = 0;
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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef RANDOM_T18A28484F67EFA289C256F508A5C71D9E6DEE09F_H
#define RANDOM_T18A28484F67EFA289C256F508A5C71D9E6DEE09F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T18A28484F67EFA289C256F508A5C71D9E6DEE09F_H
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
#ifndef ASYNCINFOIDGENERATOR_T55EA89C24441260F8C3BA5D14A724A154210BF0E_H
#define ASYNCINFOIDGENERATOR_T55EA89C24441260F8C3BA5D14A724A154210BF0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.AsyncInfoIdGenerator
struct  AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E  : public RuntimeObject
{
public:

public:
};

struct AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields
{
public:
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___s_idGenerator_0;

public:
	inline static int32_t get_offset_of_s_idGenerator_0() { return static_cast<int32_t>(offsetof(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields, ___s_idGenerator_0)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_s_idGenerator_0() const { return ___s_idGenerator_0; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_s_idGenerator_0() { return &___s_idGenerator_0; }
	inline void set_s_idGenerator_0(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___s_idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_idGenerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCINFOIDGENERATOR_T55EA89C24441260F8C3BA5D14A724A154210BF0E_H
#ifndef TASKCOMPLETIONSOURCE_1_T58B1B163F59487E469888F92C0D132BC81B574FF_H
#define TASKCOMPLETIONSOURCE_1_T58B1B163F59487E469888F92C0D132BC81B574FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct  TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF, ___m_task_0)); }
	inline Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T58B1B163F59487E469888F92C0D132BC81B574FF_H
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
#ifndef VOIDREFERENCETYPEPARAMETER_T255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E_H
#define VOIDREFERENCETYPEPARAMETER_T255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.VoidReferenceTypeParameter
struct  VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDREFERENCETYPEPARAMETER_T255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E_H
#ifndef WINDOWSRUNTIMESYSTEMEXTENSIONS_TD8301806431F3B8A2D37F2B637BA6BC69C3AFEA8_H
#define WINDOWSRUNTIMESYSTEMEXTENSIONS_TD8301806431F3B8A2D37F2B637BA6BC69C3AFEA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsRuntimeSystemExtensions
struct  WindowsRuntimeSystemExtensions_tD8301806431F3B8A2D37F2B637BA6BC69C3AFEA8  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMESYSTEMEXTENSIONS_TD8301806431F3B8A2D37F2B637BA6BC69C3AFEA8_H
#ifndef U3CU3EC_T7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_H
#define U3CU3EC_T7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsRuntimeSystemExtensions_<>c
struct  U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields
{
public:
	// System.WindowsRuntimeSystemExtensions_<>c System.WindowsRuntimeSystemExtensions_<>c::<>9
	U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions_<>c::<>9__0_0
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions_<>c::<>9__0_1
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_H
#ifndef TOKENIZERHELPER_T9D86A6D6BA313EFDFCFD740BDB8CD8F36CDD4539_H
#define TOKENIZERHELPER_T9D86A6D6BA313EFDFCFD740BDB8CD8F36CDD4539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TokenizerHelper
struct  TokenizerHelper_t9D86A6D6BA313EFDFCFD740BDB8CD8F36CDD4539  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZERHELPER_T9D86A6D6BA313EFDFCFD740BDB8CD8F36CDD4539_H
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
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
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
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#define CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_H
#ifndef SPARSELYPOPULATEDARRAYADDINFO_1_T0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE_H
#define SPARSELYPOPULATEDARRAYADDINFO_1_T0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPARSELYPOPULATEDARRAYADDINFO_1_T0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE_H
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
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef VOIDVALUETYPEPARAMETER_T4218889FC907F3892F775433493F080BD1A41CAA_H
#define VOIDVALUETYPEPARAMETER_T4218889FC907F3892F775433493F080BD1A41CAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.VoidValueTypeParameter
struct  VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDVALUETYPEPARAMETER_T4218889FC907F3892F775433493F080BD1A41CAA_H
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
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#define NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
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
#endif // NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#ifndef CANCELLATIONTOKENREGISTRATION_TCDB9825D1854DD0D7FF737C82B099FC468107BB2_H
#define CANCELLATIONTOKENREGISTRATION_TCDB9825D1854DD0D7FF737C82B099FC468107BB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_callbackInfo_0), value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  value)
	{
		___m_registrationInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_pinvoke
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_com
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};
#endif // CANCELLATIONTOKENREGISTRATION_TCDB9825D1854DD0D7FF737C82B099FC468107BB2_H
#ifndef CANCELLATIONTOKENSOURCE_TF480B7E74A032667AFBD31F0530D619FB43AD3FE_H
#define CANCELLATIONTOKENSOURCE_TF480B7E74A032667AFBD31F0530D619FB43AD3FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_kernelEvent_3)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_kernelEvent_3), value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_tF1A5F348104DB1ECF18799250B41740FCAA77813* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_registeredCallbacksLists_4), value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t4B36771A6344CFC66696BB16419C664E286DAF1B* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_linkingRegistrations_12), value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_executingCallback_14), value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE, ___m_timer_15)); }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t67FAB8E41573B4FA09CA56AE30725AF4297C2553 * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_timer_15), value);
	}
};

struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((&____staticSource_Set_0), value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((&____staticSource_NotCancelable_1), value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_LinkedTokenCancelDelegate_13), value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tC89F2FB1294A86F64DEB2C1F68024954018AA219 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_timerCallback_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELLATIONTOKENSOURCE_TF480B7E74A032667AFBD31F0530D619FB43AD3FE_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_28), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_33), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_29), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_31), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_32), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_34), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_35), value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_36), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_37), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_38), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_39), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef TASKCONTINUATIONOPTIONS_T749581ABDD24D74BD051F09EC4E3408C209121A2_H
#define TASKCONTINUATIONOPTIONS_T749581ABDD24D74BD051F09EC4E3408C209121A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t749581ABDD24D74BD051F09EC4E3408C209121A2, ___value___2)); }
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
#endif // TASKCONTINUATIONOPTIONS_T749581ABDD24D74BD051F09EC4E3408C209121A2_H
#ifndef TASKSCHEDULER_T966F2798F198FA90A0DA8EFC92BAC08297793114_H
#define TASKSCHEDULER_T966F2798F198FA90A0DA8EFC92BAC08297793114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t9E56EEB44502999EDAA6E212D522D7863829D95C * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTaskSchedulers_0), value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultTaskScheduler_1), value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_tF704D003AB4792AFE4B10D9127FF82EEC18615BC * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskException_4), value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((&____unobservedTaskExceptionLockObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKSCHEDULER_T966F2798F198FA90A0DA8EFC92BAC08297793114_H
#ifndef TASKTOASYNCINFOADAPTER_4_T6939D2A566A48D499669B8B0865212D2FB4A22BF_H
#define TASKTOASYNCINFOADAPTER_4_T6939D2A566A48D499669B8B0865212D2FB4A22BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct  TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((&____cancelTokenSource_0), value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((&____error_2), value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_4), value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____completedHandler_5)); }
	inline AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&____completedHandler_5), value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____progressHandler_6)); }
	inline VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E * get__progressHandler_6() const { return ____progressHandler_6; }
	inline VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(VoidReferenceTypeParameter_t255142D4EFCF5C11FA3FC962097F7D9B2D3B4F6E * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&____progressHandler_6), value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF, ____startingContext_7)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((&____startingContext_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKTOASYNCINFOADAPTER_4_T6939D2A566A48D499669B8B0865212D2FB4A22BF_H
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
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef NUMBERFORMATINFO_TFDF57037EBC5BC833D0A53EF0327B805994860A8_H
#define NUMBERFORMATINFO_TFDF57037EBC5BC833D0A53EF0327B805994860A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_TFDF57037EBC5BC833D0A53EF0327B805994860A8_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ASYNCINFOTOTASKBRIDGE_1_TFF70BDD04454A6EBC5FE97283B11BB664C836B27_H
#define ASYNCINFOTOTASKBRIDGE_1_TFF70BDD04454A6EBC5FE97283B11BB664C836B27_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct  AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27  : public TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ct
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ____ct_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ctr
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  ____ctr_2;
	// System.Boolean System.Threading.Tasks.AsyncInfoToTaskBridge`1::_completing
	bool ____completing_3;

public:
	inline static int32_t get_offset_of__ct_1() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27, ____ct_1)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get__ct_1() const { return ____ct_1; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of__ct_1() { return &____ct_1; }
	inline void set__ct_1(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		____ct_1 = value;
	}

	inline static int32_t get_offset_of__ctr_2() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27, ____ctr_2)); }
	inline CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  get__ctr_2() const { return ____ctr_2; }
	inline CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 * get_address_of__ctr_2() { return &____ctr_2; }
	inline void set__ctr_2(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  value)
	{
		____ctr_2 = value;
	}

	inline static int32_t get_offset_of__completing_3() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27, ____completing_3)); }
	inline bool get__completing_3() const { return ____completing_3; }
	inline bool* get_address_of__completing_3() { return &____completing_3; }
	inline void set__completing_3(bool value)
	{
		____completing_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCINFOTOTASKBRIDGE_1_TFF70BDD04454A6EBC5FE97283B11BB664C836B27_H
#ifndef TASKTOASYNCACTIONADAPTER_T1498B22A4F941563A016F194BD85FBFA44C4528C_H
#define TASKTOASYNCACTIONADAPTER_T1498B22A4F941563A016F194BD85FBFA44C4528C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskToAsyncActionAdapter
struct  TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C  : public TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKTOASYNCACTIONADAPTER_T1498B22A4F941563A016F194BD85FBFA44C4528C_H
#ifndef TASK_1_TC00A207FB8C25E4498366C42466B6F913AF48F5E_H
#define TASK_1_TC00A207FB8C25E4498366C42466B6F913AF48F5E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct  Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E, ___m_result_40)); }
	inline VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  get_m_result_40() const { return ___m_result_40; }
	inline VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t410DD5370290DF7924E2357F4FAF09116A3366E9 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tCF92B89EA717C53455F13CB9ADFF9F97988DC755 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_TC00A207FB8C25E4498366C42466B6F913AF48F5E_H
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_mFB9E7E5D042A091EEA5ADBBB479329CE1248351B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m3D1D43B45DDBE38620B5178B88307B0759171F7A(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m9A8D01260F4211B8E794B3FC73D212F3F8CAB584(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m71EA200C07A5E2B5A9BAE4BC2AB00EFF1D3AB5A8() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m197A13662E7E9A888B0E3FFAFDBA15410AA850E7() = 0;
};
#ifndef ACTION_1_T551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_H
#define ACTION_1_T551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Object>
struct  Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_H
#ifndef ACTION_2_TC5CBC473593FC52892A3A27575658B0C050584D8_H
#define ACTION_2_TC5CBC473593FC52892A3A27575658B0C050584D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct  Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_TC5CBC473593FC52892A3A27575658B0C050584D8_H
#ifndef ASYNCACTIONCOMPLETEDHANDLER_T1820A7A20AA2CF935463CD8EB21800005EFE488D_H
#define ASYNCACTIONCOMPLETEDHANDLER_T1820A7A20AA2CF935463CD8EB21800005EFE488D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncActionCompletedHandler
struct  AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCACTIONCOMPLETEDHANDLER_T1820A7A20AA2CF935463CD8EB21800005EFE488D_H
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
extern "C" IL2CPP_METHOD_ATTR VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  TaskToAsyncInfoAdapter_4_GetResultsInternal_mBF7D2CE18369609722053397E88496835BECAC8C_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared (Action_2_t0DB6FD6F515527EAB552B690A291778C6F00D48C * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
extern "C" IL2CPP_METHOD_ATTR bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1ED1A32AEDB768B25DB552FC59276375B5A1E7D0_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TaskToAsyncInfoAdapter_4_get_Task_mF37BC466DB6D1ABD538C7085BF6150C2A99A6952_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
extern "C" IL2CPP_METHOD_ATTR CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m1F8BAF325E6DF5F1C687FE2A165F36975CB37EA5_gshared (TaskToAsyncInfoAdapter_4_t7ED2445CF03BB4D275242341EA404EAA6634929F * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_gshared (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
extern "C" IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_gshared (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_gshared (TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF * __this, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * p0, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
extern "C" IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mD830160E95D6C589AD31EE9DC8D19BD4A8DCDC03 (int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Random__ctor_mDD202982FB7CEDE3F31824E919AD2BFA6D66BA27 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, int32_t p0, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
inline VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  VoidValueTypeParameter_t4218889FC907F3892F775433493F080BD1A41CAA  (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_GetResultsInternal_mBF7D2CE18369609722053397E88496835BECAC8C_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::Invoke(Windows.Foundation.IAsyncAction,Windows.Foundation.AsyncStatus)
extern "C" IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_m90ED997977A5C94AE5F5CB92A629FE2EDFA3D466 (AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * __this, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510 (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  CancellationToken_Register_mA4F60EC40A8B9EB0239341CE450F6BE2CEFA8931 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5 (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB83B0C1C61CED5B54803D334FFC7187881D32EFB_gshared)(__this, p0, p1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" IL2CPP_METHOD_ATTR CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
extern "C" IL2CPP_METHOD_ATTR TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87 (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_ContinueWith_m77623659683CA3E09520D79D60D8A04214E4CE5A (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * p0, RuntimeObject * p1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p2, int32_t p3, TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * p4, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
inline bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1ED1A32AEDB768B25DB552FC59276375B5A1E7D0_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053 (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Task_mF37BC466DB6D1ABD538C7085BF6150C2A99A6952_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19 (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
extern "C" IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_m485B6A386A628048A15D607330E91582012C59EF (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6 (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF * __this, const RuntimeMethod* method)
{
	return ((  CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * (*) (TaskToAsyncInfoAdapter_4_t6939D2A566A48D499669B8B0865212D2FB4A22BF *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m1F8BAF325E6DF5F1C687FE2A165F36975CB37EA5_gshared)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___source0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___sink1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___concatenationLifetime2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_get_CompletedTask_mBB0764E7FDE04E900FFBE5B1BE6B815193681E86 (const RuntimeMethod* method);
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C (Exception_t * ___e0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_FromException_m8D8A19D1CF4B424A3B48F49C7150496075038E54 (Exception_t * p0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C" IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CancellationToken__ctor_mEEC34A64046AD7A84BEA348A2F1AE72C9F483C7E (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * __this, bool p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_FromCanceled_m271AC674539E764A1F220D15E63EDB7D989841E5 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
inline void AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4 (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 *, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB , const RuntimeMethod*))AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_gshared)(__this, p0, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_m2C0D2BD025FC8CDC21086373277D42874552060D (AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
inline void AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4 (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 *, RuntimeObject*, const RuntimeMethod*))AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
inline Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90 (TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * (*) (TaskCompletionSource_1_t58B1B163F59487E469888F92C0D132BC81B574FF *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_gshared)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97 (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m33023D4CB46117A4C6A7C1ED0076918871A1E2DF (CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m12C09B73DC2913C85C776E611EF48DCA63405457 (CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_X()
extern "C" IL2CPP_METHOD_ATTR double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4 (RuntimeObject* p0, String_t* p1, RuntimeObject * p2, RuntimeObject * p3, RuntimeObject * p4, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
extern "C" IL2CPP_METHOD_ATTR bool Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point10, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Point::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_X()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect10, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Rect::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size10, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Size::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
extern "C" IL2CPP_METHOD_ATTR bool Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472 (double* __this, double p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String Windows.Foundation.Size::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A (RuntimeObject* p0, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E (NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
extern "C" IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = ((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = ((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)2147483647LL));
		V_2 = L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_RESET_LEAVE(0x2D);
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32U26)
extern "C" IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E (uint32_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator_EnsureInitializedThreadsafe_m8B7055212D6AAAD782FC163797AB67BE11D07C5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var);
		uint32_t L_4 = AsyncInfoIdGenerator_CreateNext_mD4F9BEA5E88D2BD92E0CF0B7112A612B3E06285E(/*hidden argument*/NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = (uint32_t*)L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8 = Interlocked_CompareExchange_mD830160E95D6C589AD31EE9DC8D19BD4A8DCDC03((int32_t*)(((uintptr_t)L_6)), L_7, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncInfoIdGenerator__cctor_m0160C31D854AFE61A802EB0ADB2E00E85AC90B10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_0 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mDD202982FB7CEDE3F31824E919AD2BFA6D66BA27(L_0, ((int32_t)19830118), /*hidden argument*/NULL);
		((AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t55EA89C24441260F8C3BA5D14A724A154210BF0E_il2cpp_TypeInfo_var))->set_s_idGenerator_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::GetResults()
extern "C" IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_GetResults_m507FE1CE48032133AA7ADA483475806B3D2C51F6 (TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskToAsyncActionAdapter_GetResults_m507FE1CE48032133AA7ADA483475806B3D2C51F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E(__this, /*hidden argument*/TaskToAsyncInfoAdapter_4_GetResultsInternal_mF43000DAD4E9558371BBAE8BA101B0AACA1CC91E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::OnCompleted(Windows.Foundation.AsyncActionCompletedHandler,Windows.Foundation.AsyncStatus)
extern "C" IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_OnCompleted_m6285538803AC8D0E9837F8C5C0295BDC925447B5 (TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * __this, AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * ___userCompletionHandler0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * L_0 = ___userCompletionHandler0;
		int32_t L_1 = ___asyncStatus1;
		NullCheck(L_0);
		AsyncActionCompletedHandler_Invoke_m90ED997977A5C94AE5F5CB92A629FE2EDFA3D466(L_0, __this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::Windows.Foundation.IAsyncAction.put_Completed(Windows.Foundation.AsyncActionCompletedHandler)
extern "C" IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_Windows_Foundation_IAsyncAction_put_Completed_m18D923DB9F07206F028620EA470EDBCDF65F1168 (TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * __this, AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * ___handler0, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * L_0 = ___handler0;
		VirtActionInvoker1< AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * >::Invoke(11 /* System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::set_Completed(TCompletedHandler) */, __this, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
extern "C" IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9 (CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___source0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___sink1, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___concatenationLifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B2_0 = NULL;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * G_B2_1 = NULL;
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * G_B1_0 = NULL;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * G_B1_1 = NULL;
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * G_B4_0 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * G_B4_1 = NULL;
	Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * G_B3_0 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_0 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_2 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_3 = (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 *)il2cpp_codegen_object_new(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0_il2cpp_TypeInfo_var);
		Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_RuntimeMethod_var);
		Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * L_4 = L_3;
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_5 = ___sink1;
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_6 = CancellationToken_Register_mA4F60EC40A8B9EB0239341CE450F6BE2CEFA8931((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = ___concatenationLifetime2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_8 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_10 = ((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_11 = (Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 *)il2cpp_codegen_object_new(Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8_il2cpp_TypeInfo_var);
		Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m58B3F295A5FFFD735D3E3C72214C7CF4476317E5_RuntimeMethod_var);
		Action_2_tC5CBC473593FC52892A3A27575658B0C050584D8 * L_12 = L_11;
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_13 = V_0;
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_14 = L_13;
		RuntimeObject * L_15 = Box(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_il2cpp_TypeInfo_var);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_16 = CancellationToken_get_None_m008D4CF5E11172703A6D781A3C30E6E537004F1D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114_il2cpp_TypeInfo_var);
		TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * L_17 = TaskScheduler_get_Default_mC3794A546EB0F4C6D0A11E72F8939EC364733C87(/*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Task_ContinueWith_m77623659683CA3E09520D79D60D8A04214E4CE5A(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D (RuntimeObject* ___source0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * V_0 = NULL;
	AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * V_1 = NULL;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  G_B16_0;
	memset(&G_B16_0, 0, sizeof(G_B16_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WindowsRuntimeSystemExtensions_AsTask_m72AC4CCE64FA5914EF4CC7826C969C80BC5CCC3D_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = ((TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C *)IsInstClass((RuntimeObject*)L_2, TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C_il2cpp_TypeInfo_var));
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B(L_4, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mC67FCE18ECC4CB0A3E87766A7EBD5AA5B155406B_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_6 = V_0;
		NullCheck(L_6);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_7 = TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053(L_6, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_Task_mC4F1D9CF70B7D90F5E5E5FC6B9A16895D6CE5053_RuntimeMethod_var);
		V_2 = L_7;
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = Task_get_IsCompleted_mA675F47CE1DBD1948BDC9215DCAE93F07FC32E19(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		bool L_10 = CancellationToken_get_CanBeCanceled_m485B6A386A628048A15D607330E91582012C59EF((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_11 = V_0;
		NullCheck(L_11);
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_12 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6(L_11, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_13 = ___cancellationToken1;
		TaskToAsyncActionAdapter_t1498B22A4F941563A016F194BD85FBFA44C4528C * L_14 = V_0;
		NullCheck(L_14);
		CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * L_15 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6(L_14, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mE43B201053633B912705D401B7DE5EA95B7823E6_RuntimeMethod_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_16 = V_2;
		WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_mE6D63868E79DE3EBCC91E8BC0BBF73D12E31E4D9(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_17 = V_2;
		return L_17;
	}

IL_004f:
	{
		RuntimeObject* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_21 = Task_get_CompletedTask_mBB0764E7FDE04E900FFBE5B1BE6B815193681E86(/*hidden argument*/NULL);
		return L_21;
	}

IL_0072:
	{
		RuntimeObject* L_22 = ___source0;
		NullCheck(L_22);
		Exception_t * L_23 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t9B58E0D0A013D06029CDEAE127A910A69D13FBB5_il2cpp_TypeInfo_var, L_22);
		Exception_t * L_24 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_25 = Task_FromException_m8D8A19D1CF4B424A3B48F49C7150496075038E54(L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_0083:
	{
		bool L_26 = CancellationToken_get_IsCancellationRequested_mCF3521778F20F7048B7121885794B9562324447D((CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_27;
		memset(&L_27, 0, sizeof(L_27));
		CancellationToken__ctor_mEEC34A64046AD7A84BEA348A2F1AE72C9F483C7E((&L_27), (bool)1, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		goto IL_0095;
	}

IL_0094:
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_28 = ___cancellationToken1;
		G_B16_0 = L_28;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_29 = Task_FromCanceled_m271AC674539E764A1F220D15E63EDB7D989841E5(G_B16_0, /*hidden argument*/NULL);
		return L_29;
	}

IL_009b:
	{
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_30 = ___cancellationToken1;
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_31 = (AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 *)il2cpp_codegen_object_new(AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27_il2cpp_TypeInfo_var);
		AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4(L_31, L_30, /*hidden argument*/AsyncInfoToTaskBridge_1__ctor_mF7CD592EF952F225806871F14672CE77BDDAB0C4_RuntimeMethod_var);
		V_1 = L_31;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_32 = ___source0;
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_33 = V_1;
		AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * L_34 = (AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D *)il2cpp_codegen_object_new(AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_il2cpp_TypeInfo_var);
		AsyncActionCompletedHandler__ctor_m2C0D2BD025FC8CDC21086373277D42874552060D(L_34, L_33, (intptr_t)((intptr_t)AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_mA94CADFE8C912F942BAEADC65E4B8E212F5A92E8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< AsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncAction::put_Completed(Windows.Foundation.AsyncActionCompletedHandler) */, IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB_il2cpp_TypeInfo_var, L_32, L_34);
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_35 = V_1;
		RuntimeObject* L_36 = ___source0;
		NullCheck(L_35);
		AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4(L_35, L_36, /*hidden argument*/AsyncInfoToTaskBridge_1_RegisterForCancellation_m15301858DFDD9573474DCCD4C3ED3F7B7E112CB4_RuntimeMethod_var);
		goto IL_00c0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bd;
		throw e;
	}

CATCH_00bd:
	{ // begin catch(System.Object)
		goto IL_00c0;
	} // end catch (depth: 1)

IL_00c0:
	{
		AsyncInfoToTaskBridge_1_tFF70BDD04454A6EBC5FE97283B11BB664C836B27 * L_37 = V_1;
		NullCheck(L_37);
		Task_1_tC00A207FB8C25E4498366C42466B6F913AF48F5E * L_38 = TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90(L_37, /*hidden argument*/TaskCompletionSource_1_get_Task_m1B3F59275853FCC22B8C1E010D77B79865170D90_RuntimeMethod_var);
		return L_38;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
extern "C" IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mF39F00CA42F45D3F2EB5B8DB5B450C55A206113C (Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m253A27693DA3D1A9A90FD949D4D58340D592FA5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * L_0 = (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E *)il2cpp_codegen_object_new(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CDEDC568031CE2B651AA8B8FAB2D9ACF35F3D97 (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions_<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD2C070F430A2E1950C85E28ED328545E22E50AFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m33023D4CB46117A4C6A7C1ED0076918871A1E2DF(((CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions_<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC (U3CU3Ec_t7BF0CCB601E6508A9E0072ACC4827D1FFCEAE77E * __this, Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF440B6D95BB892E1298E16F45195EC36D4AF82DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)((CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)UnBox(L_0, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m12C09B73DC2913C85C776E611EF48DCA63405457((CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Point::get_X()
extern "C" IL2CPP_METHOD_ATTR double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Point::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_ToString_mDFB209B8CA094AF8FB88FB144DBA13F9ABB49E8E(_thisAdjusted, method);
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_System_IFormattable_ToString_m791F8FC114C9E607E22E1377E7EF3ACD0395CA57(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1 = TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		String_t* L_11 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_13);
		double L_15 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_16);
		double L_18 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4(L_2, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
extern "C"  String_t* Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_ConvertToString_m6E52855EA4919577AD9678EB50CA60A433F49803(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
extern "C" IL2CPP_METHOD_ATTR bool Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point10, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  ___point21, const RuntimeMethod* method)
{
	{
		double L_0 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point10), /*hidden argument*/NULL);
		double L_1 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point10), /*hidden argument*/NULL);
		double L_3 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)(&___point21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  L_1 = (*(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Point_op_Equality_m64C4E8C491AFAA01B7450CE74EC8144B6C3BA562(L_1, ((*(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)UnBox(L_2, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_Equals_m3BA55D50EECD9ACD235E1CF9F34373C325973DB6(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580 (Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Point_get_X_m7B3855A972F9BE4EFC665018A0FFCDE7653F5279((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Point_get_Y_m7C07355EC984C2A5DCDED2D04D6FF242300F607A((Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern "C"  int32_t Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * _thisAdjusted = reinterpret_cast<Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC *>(__this + 1);
	return Point_GetHashCode_m7348B1D410207B79808F2CA147AE04AF43BE7580(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Y()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Rect::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_3();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
extern "C"  bool Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_ToString_mAB211C47A6FF959D76D086C68C743F928C07D68F(_thisAdjusted, method);
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_System_IFormattable_ToString_m92BAA1305B83C3E5526E257B9C69A767FED3923C(_thisAdjusted, ___format0, ___provider1, method);
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0 = Rect_get_IsEmpty_m80BA92D11A0A2C89E0CF8601A233778A1C0C77FF((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralDA95CC741B3DDD6710CEC3B8B24A4FB0609EB1C1;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2 = TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABD95F778374F343EA482BA4F8022A44D38AE71D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral72C0524EEA13FCC14BCAF12A82609443F543B1C3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral47EDB6769D0051A56CF33DC6C3F3C719DC5ACE2B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD0776B8B068AB55CF5329D31787927B4AEC05D19);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A);
		String_t* L_18 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_17, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_20;
		float L_25 = __this->get__x_0();
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_24;
		float L_29 = __this->get__y_1();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_28;
		float L_33 = __this->get__width_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_32;
		float L_37 = __this->get__height_3();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_39);
		String_t* L_40 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_3, L_18, L_36, /*hidden argument*/NULL);
		return L_40;
	}
}
extern "C"  String_t* Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_ConvertToString_mDD63C220964456CF26A0D2B0F129110F19FEE9B7(_thisAdjusted, ___format0, ___provider1, method);
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
extern "C" IL2CPP_METHOD_ATTR bool Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect10, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  ___rect21, const RuntimeMethod* method)
{
	{
		double L_0 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_1 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_3 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_5 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect10), /*hidden argument*/NULL);
		double L_7 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)(&___rect21), /*hidden argument*/NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735 (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  L_1 = (*(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Rect_op_Equality_mE78AF9FB74353DF0F65879F0DC6719F598F736AA(L_1, ((*(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)UnBox(L_2, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_Equals_m8F195999C4E1C9356E3234E2E9A762DC2F6E3735(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB (Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = Rect_get_X_m35D247CE131BD7E88E8F37477AF8B97514B2EB18((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_2 = Rect_get_Y_m50133BDDAB0AA130D87E2C679FA9DD3F20B2EE16((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_4 = Rect_get_Width_mB3768453F8598F1255098EA9454A03A3B0C2C682((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_6 = Rect_get_Height_m02E5221D781AADCD2F72A09FEA6EC37DF5EA9B1C((Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
extern "C"  int32_t Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * _thisAdjusted = reinterpret_cast<Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 *>(__this + 1);
	return Rect_GetHashCode_m09432FD8E6C636CD000BCD0D9A8F1E30763314CB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_0();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9(_thisAdjusted, method);
}
// System.Double Windows.Foundation.Size::get_Height()
extern "C" IL2CPP_METHOD_ATTR double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_1();
		return (((double)((double)L_0)));
	}
}
extern "C"  double Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
extern "C"  bool Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  L_1 = (*(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3 = Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8(L_1, ((*(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)UnBox(L_2, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_Equals_mCE363B6FB51F2B28CE43FABB1D6A0CEE7722658C(_thisAdjusted, ___o0, method);
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		double L_3 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Double_GetHashCode_m583A40025EE6D79EA606D34C38ACFEE231003292((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
extern "C"  int32_t Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_GetHashCode_m339BA7D00D8DA638CBCC4727071D15E1AC84FA7B(_thisAdjusted, method);
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
extern "C" IL2CPP_METHOD_ATTR bool Size_Equals_m8A6B538AECA7518E75D2CB60DABF77ABE88ABFD8 (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size10, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  ___size21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = Size_get_Width_m82026F4BBE98C2740685F27ADF96699DD099B0B9((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		bool L_4 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_5;
		double L_6 = Size_get_Height_mA4D91514E5FC4462B43529168335A1862E412EEA((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)(&___size21), /*hidden argument*/NULL);
		bool L_7 = Double_Equals_m07123CFF3B06183E095BF281110526F9B8953472((double*)(&V_0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA (Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Size_get_IsEmpty_m0E62EF83B12C6B9858290ECB5C494ED2F7486438((Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral3159FE421B3221381B3C778DC1C3C26E4540BE37;
	}

IL_000e:
	{
		float L_1 = __this->get__width_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->get__height_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralFBFD8740C5AE8DDF9BAFD2055D01B2FCA2854E47, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
extern "C"  String_t* Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * _thisAdjusted = reinterpret_cast<Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 *>(__this + 1);
	return Size_ToString_m7AD2DBD2743AAB5FE6BF01022D45475C1A8636AA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_mD31F075C6AF217DB2DC926736D06D6F19B44AD2C (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m1A9F946D267B5C2FC5982D34AF97D9AEB9C24A6E(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
