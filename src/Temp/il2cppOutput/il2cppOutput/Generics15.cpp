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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.String
struct String_t;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_tBBEF32426BE0DAA00ED44E62EFDF90DC38EFF4B6;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct TrackingSubsystem_2_tBB99F93D6653B71E3A2C1E2116F8599311DC72D6;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tE2F49A29D690020049C702A06ED3969AE2A39863;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object>
struct TrackingSubsystem_2_tAE9BB8C8235205F41DFEA520A6AD8877415FA95B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct TrackingSubsystem_2_t463AAAB107BF4F04078A98431C680E92C4B53148;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


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


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct  XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Destroyed
	bool ___m_Destroyed_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Destroyed_2() { return static_cast<int32_t>(offsetof(XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A, ___m_Destroyed_2)); }
	inline bool get_m_Destroyed_2() const { return ___m_Destroyed_2; }
	inline bool* get_address_of_m_Destroyed_2() { return &___m_Destroyed_2; }
	inline void set_m_Destroyed_2(bool value)
	{
		___m_Destroyed_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct  TrackingSubsystem_2_tBBEF32426BE0DAA00ED44E62EFDF90DC38EFF4B6  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct  TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct  TrackingSubsystem_2_tBB99F93D6653B71E3A2C1E2116F8599311DC72D6  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct  TrackingSubsystem_2_tE2F49A29D690020049C702A06ED3969AE2A39863  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object>
struct  TrackingSubsystem_2_tAE9BB8C8235205F41DFEA520A6AD8877415FA95B  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct  TrackingSubsystem_2_t463AAAB107BF4F04078A98431C680E92C4B53148  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mF1761D396F2FC0B6BA3AA3F0DCDF7577A946B13A_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mFE9A359ABAF0380102B339A75B8BC23F39042694_gshared (TrackingSubsystem_2_tBBEF32426BE0DAA00ED44E62EFDF90DC38EFF4B6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mD1B4842F29FB022CE1B973296BB4D7888A93835E_gshared (TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7625CF45A30E7BA1C410ADCDD6556266E9BDE509_gshared (TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mB17216C41B97F6316E4463418DA55CA2F56FB8AD_gshared (TrackingSubsystem_2_tBB99F93D6653B71E3A2C1E2116F8599311DC72D6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAD87406CF32419E9D04D5D4CF11171730564BAEE_gshared (TrackingSubsystem_2_tE2F49A29D690020049C702A06ED3969AE2A39863 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m90E4D38CB60953BC61F7EFCD9B846A9071C9DF4B_gshared (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7009123249648CD9809E3549375C56DB6B583772_gshared (TrackingSubsystem_2_tAE9BB8C8235205F41DFEA520A6AD8877415FA95B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7BED931B501BCE6534C3BC2DC0CA30C73E917F90_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mE7AF1FD3521B4B3FE7D13D6BA44F324F0C0AC745_gshared (TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mFD6F43BFD4E9884C5B789EA27DF50136997A057B_gshared (TrackingSubsystem_2_t463AAAB107BF4F04078A98431C680E92C4B53148 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m4E7ABF47E3AACB43C80EB42806B3579117AFF59F_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->get_m_Running_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_m1C3927954CD17660201ED1010789DEF485923F98_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// if (m_Destroyed)
		bool L_0 = (bool)__this->get_m_Destroyed_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Destroyed = true;
		__this->set_m_Destroyed_2((bool)1);
		// Stop();
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		// OnDestroyed();
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		VirtActionInvoker0::Invoke(13 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_m79AAFA344C82E9EA7A9B601C5CB86226D9662A21_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mFF7A9B03AD6DC511B2A48D501EA850102666040E_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mE4899E6701EB0E563C03F950450FDDAC4FF21BAF_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
