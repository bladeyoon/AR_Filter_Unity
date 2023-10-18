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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// IBM.Cloud.SDK.Utilities.IBMException
struct IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5;
// IBM.Cloud.SDK.Widgetss.Widget
struct Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125;
// IBM.Cloud.SDK.Widgetss.Widget/Input[]
struct InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73;
// IBM.Cloud.SDK.Widgetss.Widget/Output[]
struct OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344;
// Newtonsoft.Json.Linq.JValue
struct JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF;
// RuntimeInspectorNamespace.Tooltip
struct Tooltip_t5D06A9F2A2F85A5654A6333B1BAEE26D9A32AA03;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs>
struct Action_1_t3B7AAA04B9F26EE9CE64979C15A9C2AD9E24F947;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Attribute[]
struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.Type,RuntimeInspectorNamespace.ExposedMethod[]>
struct Dictionary_2_t4B68F0434922B06B9189DEA62C435E1931CD7EE6;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]>
struct Dictionary_2_t5435C80A6BF5098D107EB9E9A26A8660917AC313;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t4539A1D24467B4BCB004FE3DFB4D15C90372E5E7;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_tF665B86C8201B9AD174301BB6134F7D58DAC22E1;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t133B7916368C2F565BDFF2674430B992DB49577F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t12D495D4AF335010DEC3E91C58474E59EE2E50D8;
// System.Collections.Generic.List`1<RuntimeInspectorNamespace.ExposedExtensionMethodHolder>
struct List_1_t202EE27528386EB6D48140DB50AA79A067FAB2BA;
// System.Collections.Generic.List`1<RuntimeInspectorNamespace.ExposedMethod>
struct List_1_t76DC7B03382C2A2D5CF6CE3A03F442FDDCA1CEDF;
// System.Collections.Generic.List`1<RuntimeInspectorNamespace.RuntimeInspectorCustomEditorAttribute>
struct List_1_tFA5DCB128985CC6637F726315A04BEA5C92903F6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t610995BF9B0DCC99DF41C7D0D54AA44EF8552AE9;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<System.Type>
struct List_1_tE9D3AD6B1DEE5D980D8D2F6C31987453E6E1C1E0;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.Generic.Stack`1<RuntimeInspectorNamespace.DraggedReferenceItem>
struct Stack_1_t67B4D96477D91AFD27B6C9C2B319C3537AD313E7;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25;
// System.DateTime[]
struct DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1;
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
// System.Dynamic.BindingRestrictions/TestBuilder/AndNode[]
struct AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>>
struct CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.Linq.Expressions.Expression
struct Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F;
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889;
// System.Runtime.CompilerServices.CallSite`1<System.Object>
struct CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A;
// System.Runtime.CompilerServices.RuleCache`1<System.Object>
struct RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t252EBD93E225063727450B6A8B4BE94F5F2E8427;
// System.Xml.Schema.BitSet
struct BitSet_t0E4C53EC600670A4B74C5671553596978880138C;
// System.Xml.Schema.SequenceNode
struct SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608;
// System.Xml.Schema.SequenceNode/SequenceConstructPosContext[]
struct SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588;
// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F;
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DC89F85B619068818F6FFC8B793A74773A52F83;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral3D54973F528B01019A58A52D34D518405A01B891;
IL2CPP_EXTERN_C String_t* _stringLiteral5332787A355F6C7E2C752D24323C8EB3E69C380D;
IL2CPP_EXTERN_C String_t* _stringLiteral568D9C648C5C5FCBF33EDE3C962A1F06CCB7CB1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8C4EB43E44C7CAE91B24474164F33B3D962841;
IL2CPP_EXTERN_C String_t* _stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D;
IL2CPP_EXTERN_C String_t* _stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m75827D24C8BE1A337003FE602B9D937A3F319EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCE080F6E34A3342AE2D90CF420EA68A54AB0F832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisRuntimeObject_TisRuntimeObject_mB9C93E68EC5280797F7720E7F2E5907955AA54B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD3599EBAC78179D62624381FBE67A4816345DBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m0FE68160AD7A8DC85CFDDC1052EF11E2409E8FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Widget_GetMembersByType_TisRuntimeObject_mFDEF9366D394D0BF84CC54E4603B44346E24EA06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m75827D24C8BE1A337003FE602B9D937A3F319EB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCE080F6E34A3342AE2D90CF420EA68A54AB0F832_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Value_TisRuntimeObject_TisRuntimeObject_mB9C93E68EC5280797F7720E7F2E5907955AA54B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD3599EBAC78179D62624381FBE67A4816345DBA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m0FE68160AD7A8DC85CFDDC1052EF11E2409E8FB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionUtils_GetAttributes_TisRuntimeObject_mDC1EA5E91EE6B0C6DBDDB7FEFC3C10967C665CAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeInspectorUtils_GetAttributes_TisRuntimeObject_mA8DAD2449019E251C904D7053864848A5641E84B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Widget_GetMembersByType_TisRuntimeObject_mFDEF9366D394D0BF84CC54E4603B44346E24EA06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m600FFEE7C10E2BCA12854812A6BB6DCE593F559D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC104EC1276093517C4A440400990549F0EC4A501_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m245C5C764ADA22BD15B1CEF3B7E1CE639178571E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7A70B3F4919A8A04503EB3E3DE04819827A7E754_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mA3A16654EDC8B202DDFE85E9A5E650280F33F9B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE9D821F3A3E87F07E271FD24A48D91E71D6C6450_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m06317C32C4B8B330DE077C38E7237CB1D06D9723_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m632671B61D12746E4747E6B63BC09181FC6FC368_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m5C56E17BBAD364CE7D1823BB139A5B906461184E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisRuntimeObject_m67ECFDBC21FF0D75413B1DF852889DB63775E168_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mBC42137FB14AC5442894124B54AC1A4B126D2D4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA555F893F59FD63E31250A0CB108D161724013BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m05A64728B6A400227DDDF482F7E0B1F30281E3BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m205C1CF96FEABB0EAFBC8AE70952C3A9FB50BFE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m88B7788C4BB3756EC0A966401F1D13D662A1615A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlListConverter_ToArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m904001409F4BCF396E5E8D0EB777561D72170836_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25;
struct DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1;
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
struct AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6;
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
struct SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;
struct TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.CSharp.RuntimeBinder.BinderHelper
struct  BinderHelper_t8AE8B534D7D7BCB8C34300486B365869813A9868  : public RuntimeObject
{
public:

public:
};

struct BinderHelper_t8AE8B534D7D7BCB8C34300486B365869813A9868_StaticFields
{
public:
	// System.Reflection.MethodInfo Microsoft.CSharp.RuntimeBinder.BinderHelper::s_DoubleIsNaN
	MethodInfo_t * ___s_DoubleIsNaN_0;
	// System.Reflection.MethodInfo Microsoft.CSharp.RuntimeBinder.BinderHelper::s_SingleIsNaN
	MethodInfo_t * ___s_SingleIsNaN_1;

public:
	inline static int32_t get_offset_of_s_DoubleIsNaN_0() { return static_cast<int32_t>(offsetof(BinderHelper_t8AE8B534D7D7BCB8C34300486B365869813A9868_StaticFields, ___s_DoubleIsNaN_0)); }
	inline MethodInfo_t * get_s_DoubleIsNaN_0() const { return ___s_DoubleIsNaN_0; }
	inline MethodInfo_t ** get_address_of_s_DoubleIsNaN_0() { return &___s_DoubleIsNaN_0; }
	inline void set_s_DoubleIsNaN_0(MethodInfo_t * value)
	{
		___s_DoubleIsNaN_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DoubleIsNaN_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SingleIsNaN_1() { return static_cast<int32_t>(offsetof(BinderHelper_t8AE8B534D7D7BCB8C34300486B365869813A9868_StaticFields, ___s_SingleIsNaN_1)); }
	inline MethodInfo_t * get_s_SingleIsNaN_1() const { return ___s_SingleIsNaN_1; }
	inline MethodInfo_t ** get_address_of_s_SingleIsNaN_1() { return &___s_SingleIsNaN_1; }
	inline void set_s_SingleIsNaN_1(MethodInfo_t * value)
	{
		___s_SingleIsNaN_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SingleIsNaN_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.Extensions
struct  Extensions_tEB3365B098821F2F5284FC73DCACC106323A89C8  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct  JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____parent_0)); }
	inline JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * get__parent_0() const { return ____parent_0; }
	inline JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____previous_1)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get__previous_1() const { return ____previous_1; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____next_2)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get__next_2() const { return ____next_2; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___StringTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___GuidTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___TimeSpanTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___UriTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___CharTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___DateTimeTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils
struct  ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C_StaticFields
{
public:
	// System.Type[] Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_0;

public:
	inline static int32_t get_offset_of_EmptyTypes_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C_StaticFields, ___EmptyTypes_0)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_0() const { return ___EmptyTypes_0; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_0() { return &___EmptyTypes_0; }
	inline void set_EmptyTypes_0(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_0), (void*)value);
	}
};


// RuntimeInspectorNamespace.RuntimeInspectorUtils
struct  RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6  : public RuntimeObject
{
public:

public:
};

struct RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MemberInfo[]> RuntimeInspectorNamespace.RuntimeInspectorUtils::typeToVariables
	Dictionary_2_t5435C80A6BF5098D107EB9E9A26A8660917AC313 * ___typeToVariables_0;
	// System.Collections.Generic.Dictionary`2<System.Type,RuntimeInspectorNamespace.ExposedMethod[]> RuntimeInspectorNamespace.RuntimeInspectorUtils::typeToExposedMethods
	Dictionary_2_t4B68F0434922B06B9189DEA62C435E1931CD7EE6 * ___typeToExposedMethods_1;
	// System.Collections.Generic.HashSet`1<System.Type> RuntimeInspectorNamespace.RuntimeInspectorUtils::commonSerializableTypes
	HashSet_1_t4539A1D24467B4BCB004FE3DFB4D15C90372E5E7 * ___commonSerializableTypes_2;
	// System.Collections.Generic.List`1<System.Reflection.MemberInfo> RuntimeInspectorNamespace.RuntimeInspectorUtils::validVariablesList
	List_1_t610995BF9B0DCC99DF41C7D0D54AA44EF8552AE9 * ___validVariablesList_3;
	// System.Collections.Generic.List`1<System.Type> RuntimeInspectorNamespace.RuntimeInspectorUtils::typesToSearchForVariablesList
	List_1_tE9D3AD6B1DEE5D980D8D2F6C31987453E6E1C1E0 * ___typesToSearchForVariablesList_4;
	// System.Collections.Generic.List`1<System.String> RuntimeInspectorNamespace.RuntimeInspectorUtils::propertyNamesInVariablesList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___propertyNamesInVariablesList_5;
	// System.Collections.Generic.List`1<RuntimeInspectorNamespace.ExposedMethod> RuntimeInspectorNamespace.RuntimeInspectorUtils::exposedMethodsList
	List_1_t76DC7B03382C2A2D5CF6CE3A03F442FDDCA1CEDF * ___exposedMethodsList_6;
	// System.Collections.Generic.List`1<RuntimeInspectorNamespace.ExposedExtensionMethodHolder> RuntimeInspectorNamespace.RuntimeInspectorUtils::exposedExtensionMethods
	List_1_t202EE27528386EB6D48140DB50AA79A067FAB2BA * ___exposedExtensionMethods_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> RuntimeInspectorNamespace.RuntimeInspectorUtils::customEditors
	Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A * ___customEditors_8;
	// System.Collections.Generic.List`1<RuntimeInspectorNamespace.RuntimeInspectorCustomEditorAttribute> RuntimeInspectorNamespace.RuntimeInspectorUtils::customEditorAttributes
	List_1_tFA5DCB128985CC6637F726315A04BEA5C92903F6 * ___customEditorAttributes_9;
	// System.Collections.Generic.HashSet`1<UnityEngine.Transform> RuntimeInspectorNamespace.RuntimeInspectorUtils::IgnoredTransformsInHierarchy
	HashSet_1_tF665B86C8201B9AD174301BB6134F7D58DAC22E1 * ___IgnoredTransformsInHierarchy_10;
	// UnityEngine.Canvas RuntimeInspectorNamespace.RuntimeInspectorUtils::popupCanvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___popupCanvas_11;
	// UnityEngine.Canvas RuntimeInspectorNamespace.RuntimeInspectorUtils::popupReferenceCanvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___popupReferenceCanvas_12;
	// RuntimeInspectorNamespace.Tooltip RuntimeInspectorNamespace.RuntimeInspectorUtils::tooltipPopup
	Tooltip_t5D06A9F2A2F85A5654A6333B1BAEE26D9A32AA03 * ___tooltipPopup_13;
	// System.Collections.Generic.Stack`1<RuntimeInspectorNamespace.DraggedReferenceItem> RuntimeInspectorNamespace.RuntimeInspectorUtils::draggedReferenceItemsPool
	Stack_1_t67B4D96477D91AFD27B6C9C2B319C3537AD313E7 * ___draggedReferenceItemsPool_14;
	// System.Globalization.NumberFormatInfo RuntimeInspectorNamespace.RuntimeInspectorUtils::numberFormat
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numberFormat_15;
	// System.Text.StringBuilder RuntimeInspectorNamespace.RuntimeInspectorUtils::stringBuilder
	StringBuilder_t * ___stringBuilder_16;

public:
	inline static int32_t get_offset_of_typeToVariables_0() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___typeToVariables_0)); }
	inline Dictionary_2_t5435C80A6BF5098D107EB9E9A26A8660917AC313 * get_typeToVariables_0() const { return ___typeToVariables_0; }
	inline Dictionary_2_t5435C80A6BF5098D107EB9E9A26A8660917AC313 ** get_address_of_typeToVariables_0() { return &___typeToVariables_0; }
	inline void set_typeToVariables_0(Dictionary_2_t5435C80A6BF5098D107EB9E9A26A8660917AC313 * value)
	{
		___typeToVariables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeToVariables_0), (void*)value);
	}

	inline static int32_t get_offset_of_typeToExposedMethods_1() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___typeToExposedMethods_1)); }
	inline Dictionary_2_t4B68F0434922B06B9189DEA62C435E1931CD7EE6 * get_typeToExposedMethods_1() const { return ___typeToExposedMethods_1; }
	inline Dictionary_2_t4B68F0434922B06B9189DEA62C435E1931CD7EE6 ** get_address_of_typeToExposedMethods_1() { return &___typeToExposedMethods_1; }
	inline void set_typeToExposedMethods_1(Dictionary_2_t4B68F0434922B06B9189DEA62C435E1931CD7EE6 * value)
	{
		___typeToExposedMethods_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeToExposedMethods_1), (void*)value);
	}

	inline static int32_t get_offset_of_commonSerializableTypes_2() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___commonSerializableTypes_2)); }
	inline HashSet_1_t4539A1D24467B4BCB004FE3DFB4D15C90372E5E7 * get_commonSerializableTypes_2() const { return ___commonSerializableTypes_2; }
	inline HashSet_1_t4539A1D24467B4BCB004FE3DFB4D15C90372E5E7 ** get_address_of_commonSerializableTypes_2() { return &___commonSerializableTypes_2; }
	inline void set_commonSerializableTypes_2(HashSet_1_t4539A1D24467B4BCB004FE3DFB4D15C90372E5E7 * value)
	{
		___commonSerializableTypes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commonSerializableTypes_2), (void*)value);
	}

	inline static int32_t get_offset_of_validVariablesList_3() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___validVariablesList_3)); }
	inline List_1_t610995BF9B0DCC99DF41C7D0D54AA44EF8552AE9 * get_validVariablesList_3() const { return ___validVariablesList_3; }
	inline List_1_t610995BF9B0DCC99DF41C7D0D54AA44EF8552AE9 ** get_address_of_validVariablesList_3() { return &___validVariablesList_3; }
	inline void set_validVariablesList_3(List_1_t610995BF9B0DCC99DF41C7D0D54AA44EF8552AE9 * value)
	{
		___validVariablesList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___validVariablesList_3), (void*)value);
	}

	inline static int32_t get_offset_of_typesToSearchForVariablesList_4() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___typesToSearchForVariablesList_4)); }
	inline List_1_tE9D3AD6B1DEE5D980D8D2F6C31987453E6E1C1E0 * get_typesToSearchForVariablesList_4() const { return ___typesToSearchForVariablesList_4; }
	inline List_1_tE9D3AD6B1DEE5D980D8D2F6C31987453E6E1C1E0 ** get_address_of_typesToSearchForVariablesList_4() { return &___typesToSearchForVariablesList_4; }
	inline void set_typesToSearchForVariablesList_4(List_1_tE9D3AD6B1DEE5D980D8D2F6C31987453E6E1C1E0 * value)
	{
		___typesToSearchForVariablesList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typesToSearchForVariablesList_4), (void*)value);
	}

	inline static int32_t get_offset_of_propertyNamesInVariablesList_5() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___propertyNamesInVariablesList_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_propertyNamesInVariablesList_5() const { return ___propertyNamesInVariablesList_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_propertyNamesInVariablesList_5() { return &___propertyNamesInVariablesList_5; }
	inline void set_propertyNamesInVariablesList_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___propertyNamesInVariablesList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyNamesInVariablesList_5), (void*)value);
	}

	inline static int32_t get_offset_of_exposedMethodsList_6() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___exposedMethodsList_6)); }
	inline List_1_t76DC7B03382C2A2D5CF6CE3A03F442FDDCA1CEDF * get_exposedMethodsList_6() const { return ___exposedMethodsList_6; }
	inline List_1_t76DC7B03382C2A2D5CF6CE3A03F442FDDCA1CEDF ** get_address_of_exposedMethodsList_6() { return &___exposedMethodsList_6; }
	inline void set_exposedMethodsList_6(List_1_t76DC7B03382C2A2D5CF6CE3A03F442FDDCA1CEDF * value)
	{
		___exposedMethodsList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exposedMethodsList_6), (void*)value);
	}

	inline static int32_t get_offset_of_exposedExtensionMethods_7() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___exposedExtensionMethods_7)); }
	inline List_1_t202EE27528386EB6D48140DB50AA79A067FAB2BA * get_exposedExtensionMethods_7() const { return ___exposedExtensionMethods_7; }
	inline List_1_t202EE27528386EB6D48140DB50AA79A067FAB2BA ** get_address_of_exposedExtensionMethods_7() { return &___exposedExtensionMethods_7; }
	inline void set_exposedExtensionMethods_7(List_1_t202EE27528386EB6D48140DB50AA79A067FAB2BA * value)
	{
		___exposedExtensionMethods_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exposedExtensionMethods_7), (void*)value);
	}

	inline static int32_t get_offset_of_customEditors_8() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___customEditors_8)); }
	inline Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A * get_customEditors_8() const { return ___customEditors_8; }
	inline Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A ** get_address_of_customEditors_8() { return &___customEditors_8; }
	inline void set_customEditors_8(Dictionary_2_t8A9CF8D5841CD80050386F6DCD8209C6E5853F2A * value)
	{
		___customEditors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEditors_8), (void*)value);
	}

	inline static int32_t get_offset_of_customEditorAttributes_9() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___customEditorAttributes_9)); }
	inline List_1_tFA5DCB128985CC6637F726315A04BEA5C92903F6 * get_customEditorAttributes_9() const { return ___customEditorAttributes_9; }
	inline List_1_tFA5DCB128985CC6637F726315A04BEA5C92903F6 ** get_address_of_customEditorAttributes_9() { return &___customEditorAttributes_9; }
	inline void set_customEditorAttributes_9(List_1_tFA5DCB128985CC6637F726315A04BEA5C92903F6 * value)
	{
		___customEditorAttributes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEditorAttributes_9), (void*)value);
	}

	inline static int32_t get_offset_of_IgnoredTransformsInHierarchy_10() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___IgnoredTransformsInHierarchy_10)); }
	inline HashSet_1_tF665B86C8201B9AD174301BB6134F7D58DAC22E1 * get_IgnoredTransformsInHierarchy_10() const { return ___IgnoredTransformsInHierarchy_10; }
	inline HashSet_1_tF665B86C8201B9AD174301BB6134F7D58DAC22E1 ** get_address_of_IgnoredTransformsInHierarchy_10() { return &___IgnoredTransformsInHierarchy_10; }
	inline void set_IgnoredTransformsInHierarchy_10(HashSet_1_tF665B86C8201B9AD174301BB6134F7D58DAC22E1 * value)
	{
		___IgnoredTransformsInHierarchy_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IgnoredTransformsInHierarchy_10), (void*)value);
	}

	inline static int32_t get_offset_of_popupCanvas_11() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___popupCanvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_popupCanvas_11() const { return ___popupCanvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_popupCanvas_11() { return &___popupCanvas_11; }
	inline void set_popupCanvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___popupCanvas_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupCanvas_11), (void*)value);
	}

	inline static int32_t get_offset_of_popupReferenceCanvas_12() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___popupReferenceCanvas_12)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_popupReferenceCanvas_12() const { return ___popupReferenceCanvas_12; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_popupReferenceCanvas_12() { return &___popupReferenceCanvas_12; }
	inline void set_popupReferenceCanvas_12(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___popupReferenceCanvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupReferenceCanvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_tooltipPopup_13() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___tooltipPopup_13)); }
	inline Tooltip_t5D06A9F2A2F85A5654A6333B1BAEE26D9A32AA03 * get_tooltipPopup_13() const { return ___tooltipPopup_13; }
	inline Tooltip_t5D06A9F2A2F85A5654A6333B1BAEE26D9A32AA03 ** get_address_of_tooltipPopup_13() { return &___tooltipPopup_13; }
	inline void set_tooltipPopup_13(Tooltip_t5D06A9F2A2F85A5654A6333B1BAEE26D9A32AA03 * value)
	{
		___tooltipPopup_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltipPopup_13), (void*)value);
	}

	inline static int32_t get_offset_of_draggedReferenceItemsPool_14() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___draggedReferenceItemsPool_14)); }
	inline Stack_1_t67B4D96477D91AFD27B6C9C2B319C3537AD313E7 * get_draggedReferenceItemsPool_14() const { return ___draggedReferenceItemsPool_14; }
	inline Stack_1_t67B4D96477D91AFD27B6C9C2B319C3537AD313E7 ** get_address_of_draggedReferenceItemsPool_14() { return &___draggedReferenceItemsPool_14; }
	inline void set_draggedReferenceItemsPool_14(Stack_1_t67B4D96477D91AFD27B6C9C2B319C3537AD313E7 * value)
	{
		___draggedReferenceItemsPool_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___draggedReferenceItemsPool_14), (void*)value);
	}

	inline static int32_t get_offset_of_numberFormat_15() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___numberFormat_15)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numberFormat_15() const { return ___numberFormat_15; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numberFormat_15() { return &___numberFormat_15; }
	inline void set_numberFormat_15(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numberFormat_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberFormat_15), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuilder_16() { return static_cast<int32_t>(offsetof(RuntimeInspectorUtils_tCAE5CD830A22D05F7EB970475A38925C348915F6_StaticFields, ___stringBuilder_16)); }
	inline StringBuilder_t * get_stringBuilder_16() const { return ___stringBuilder_16; }
	inline StringBuilder_t ** get_address_of_stringBuilder_16() { return &___stringBuilder_16; }
	inline void set_stringBuilder_16(StringBuilder_t * value)
	{
		___stringBuilder_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuilder_16), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.EnumerableHelpers
struct  EnumerableHelpers_t91DA7E2949102CFE16D0A151F7C355F72753F1FD  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____items_1)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct  List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C, ____items_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.DateTime>
struct  List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874, ____items_1)); }
	inline DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* get__items_1() const { return ____items_1; }
	inline DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874_StaticFields, ____emptyArray_5)); }
	inline DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.DateTimeOffset>
struct  List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E, ____items_1)); }
	inline DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* get__items_1() const { return ____items_1; }
	inline DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E_StaticFields, ____emptyArray_5)); }
	inline DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Decimal>
struct  List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7, ____items_1)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get__items_1() const { return ____items_1; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7_StaticFields, ____emptyArray_5)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Double>
struct  List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C, ____items_1)); }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int16>
struct  List_1_t62097A596C137382F6178E74015FE4C0139FEAD2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t62097A596C137382F6178E74015FE4C0139FEAD2, ____items_1)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get__items_1() const { return ____items_1; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t62097A596C137382F6178E74015FE4C0139FEAD2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t62097A596C137382F6178E74015FE4C0139FEAD2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t62097A596C137382F6178E74015FE4C0139FEAD2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t62097A596C137382F6178E74015FE4C0139FEAD2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t62097A596C137382F6178E74015FE4C0139FEAD2_StaticFields, ____emptyArray_5)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int64>
struct  List_1_t68D346084523AB177A279E553FB0D5D4202BAF07  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t68D346084523AB177A279E553FB0D5D4202BAF07, ____items_1)); }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* get__items_1() const { return ____items_1; }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t68D346084523AB177A279E553FB0D5D4202BAF07, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t68D346084523AB177A279E553FB0D5D4202BAF07, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t68D346084523AB177A279E553FB0D5D4202BAF07, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t68D346084523AB177A279E553FB0D5D4202BAF07_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t68D346084523AB177A279E553FB0D5D4202BAF07_StaticFields, ____emptyArray_5)); }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.SByte>
struct  List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C, ____items_1)); }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* get__items_1() const { return ____items_1; }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C_StaticFields, ____emptyArray_5)); }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.TimeSpan>
struct  List_1_t590F472D274003865E31A7729023BEC683AB9551  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t590F472D274003865E31A7729023BEC683AB9551, ____items_1)); }
	inline TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* get__items_1() const { return ____items_1; }
	inline TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t590F472D274003865E31A7729023BEC683AB9551, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t590F472D274003865E31A7729023BEC683AB9551, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t590F472D274003865E31A7729023BEC683AB9551, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t590F472D274003865E31A7729023BEC683AB9551_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t590F472D274003865E31A7729023BEC683AB9551_StaticFields, ____emptyArray_5)); }
	inline TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt16>
struct  List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____items_1)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get__items_1() const { return ____items_1; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69_StaticFields, ____emptyArray_5)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____items_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt64>
struct  List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____items_1)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8_StaticFields, ____emptyArray_5)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Dynamic.Utils.CollectionExtensions
struct  CollectionExtensions_t04790A89E5724082B570A72C66DCBD3BA4458F41  : public RuntimeObject
{
public:

public:
};


// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Dynamic.BindingRestrictions_TestBuilder_AndNode>
struct  EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06_StaticFields, ___Value_0)); }
	inline AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* get_Value_0() const { return ___Value_0; }
	inline AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Linq.Expressions.Interpreter.LocalDefinition>
struct  EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields, ___Value_0)); }
	inline LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* get_Value_0() const { return ___Value_0; }
	inline LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Xml.Schema.SequenceNode_SequenceConstructPosContext>
struct  EmptyArray_1_t0BD4E669EA548E6E36CFA473EBF37D27E161F5C5  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t0BD4E669EA548E6E36CFA473EBF37D27E161F5C5_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t0BD4E669EA548E6E36CFA473EBF37D27E161F5C5_StaticFields, ___Value_0)); }
	inline SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0* get_Value_0() const { return ___Value_0; }
	inline SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  EmptyArray_1_tFAC80D47380CF944C985C3DA42C121DB6B215319  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tFAC80D47380CF944C985C3DA42C121DB6B215319_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tFAC80D47380CF944C985C3DA42C121DB6B215319_StaticFields, ___Value_0)); }
	inline TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E* get_Value_0() const { return ___Value_0; }
	inline TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*I1*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*I1*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorArgs_1), (void*)value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedArgs_2), (void*)value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazyData_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.CallSite
struct  CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.CallSiteBinder System.Runtime.CompilerServices.CallSite::_binder
	CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 * ____binder_1;
	// System.Boolean System.Runtime.CompilerServices.CallSite::_match
	bool ____match_2;

public:
	inline static int32_t get_offset_of__binder_1() { return static_cast<int32_t>(offsetof(CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E, ____binder_1)); }
	inline CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 * get__binder_1() const { return ____binder_1; }
	inline CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 ** get_address_of__binder_1() { return &____binder_1; }
	inline void set__binder_1(CallSiteBinder_t76CF754DF48E3820B386E9C71F8DA13FCDD1C889 * value)
	{
		____binder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____binder_1), (void*)value);
	}

	inline static int32_t get_offset_of__match_2() { return static_cast<int32_t>(offsetof(CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E, ____match_2)); }
	inline bool get__match_2() const { return ____match_2; }
	inline bool* get_address_of__match_2() { return &____match_2; }
	inline void set__match_2(bool value)
	{
		____match_2 = value;
	}
};

struct CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite::s_siteCtors
	CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE * ___s_siteCtors_0;

public:
	inline static int32_t get_offset_of_s_siteCtors_0() { return static_cast<int32_t>(offsetof(CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E_StaticFields, ___s_siteCtors_0)); }
	inline CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE * get_s_siteCtors_0() const { return ___s_siteCtors_0; }
	inline CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE ** get_address_of_s_siteCtors_0() { return &___s_siteCtors_0; }
	inline void set_s_siteCtors_0(CacheDict_2_t53E47CA277D18C28DB76A96F131A833431A67EEE * value)
	{
		___s_siteCtors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_siteCtors_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.CallSiteOps
struct  CallSiteOps_tD92C41D19E4798EFE9D07F0C3910A0914EB231B8  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.RuleCache`1<System.Object>
struct  RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95  : public RuntimeObject
{
public:
	// T[] System.Runtime.CompilerServices.RuleCache`1::_rules
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____rules_0;
	// System.Object System.Runtime.CompilerServices.RuleCache`1::_cacheLock
	RuntimeObject * ____cacheLock_1;

public:
	inline static int32_t get_offset_of__rules_0() { return static_cast<int32_t>(offsetof(RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95, ____rules_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__rules_0() const { return ____rules_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__rules_0() { return &____rules_0; }
	inline void set__rules_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____rules_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rules_0), (void*)value);
	}

	inline static int32_t get_offset_of__cacheLock_1() { return static_cast<int32_t>(offsetof(RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95, ____cacheLock_1)); }
	inline RuntimeObject * get__cacheLock_1() const { return ____cacheLock_1; }
	inline RuntimeObject ** get_address_of__cacheLock_1() { return &____cacheLock_1; }
	inline void set__cacheLock_1(RuntimeObject * value)
	{
		____cacheLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cacheLock_1), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// System.Xml.Schema.XmlValueConverter
struct  XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
struct  NativeSliceUnsafeUtility_tB3605A4284F573BC35D116BDDA1914E2CDC5A062  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.NativeSliceExtensions
struct  NativeSliceExtensions_tD1D9582E4D51457C6738BB68CB4E5A2234EAA775  : public RuntimeObject
{
public:

public:
};


// Unity.Jobs.IJobExtensions
struct  IJobExtensions_t0D416BD0BAAE2577683C1379CC62F29964F4D752  : public RuntimeObject
{
public:

public:
};


// Unity.Jobs.IJobParallelForExtensions
struct  IJobParallelForExtensions_tE5A9098E3E7E5F5617857743A369E9BFF53A5479  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.NativeCopyUtility
struct  NativeCopyUtility_t829515E8900A8C56970A8DCA18252FF587DA40D1  : public RuntimeObject
{
public:

public:
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.ArrayBuilder`1<System.Object[]>
struct  ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF 
{
public:
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____array_0)); }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5DU5BU5D_t990A2F73EF96ED2F281C02027E303D465098835F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


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


// System.Dynamic.BindingRestrictions_TestBuilder_AndNode
struct  AndNode_tCC48979AF5896DA4A881EE49E182099994188916 
{
public:
	// System.Int32 System.Dynamic.BindingRestrictions_TestBuilder_AndNode::Depth
	int32_t ___Depth_0;
	// System.Linq.Expressions.Expression System.Dynamic.BindingRestrictions_TestBuilder_AndNode::Node
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___Node_1;

public:
	inline static int32_t get_offset_of_Depth_0() { return static_cast<int32_t>(offsetof(AndNode_tCC48979AF5896DA4A881EE49E182099994188916, ___Depth_0)); }
	inline int32_t get_Depth_0() const { return ___Depth_0; }
	inline int32_t* get_address_of_Depth_0() { return &___Depth_0; }
	inline void set_Depth_0(int32_t value)
	{
		___Depth_0 = value;
	}

	inline static int32_t get_offset_of_Node_1() { return static_cast<int32_t>(offsetof(AndNode_tCC48979AF5896DA4A881EE49E182099994188916, ___Node_1)); }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * get_Node_1() const { return ___Node_1; }
	inline Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F ** get_address_of_Node_1() { return &___Node_1; }
	inline void set_Node_1(Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * value)
	{
		___Node_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Node_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct AndNode_tCC48979AF5896DA4A881EE49E182099994188916_marshaled_pinvoke
{
	int32_t ___Depth_0;
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___Node_1;
};
// Native definition for COM marshalling of System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct AndNode_tCC48979AF5896DA4A881EE49E182099994188916_marshaled_com
{
	int32_t ___Depth_0;
	Expression_t13144FD397DCFCFABDC7D6B513CD5F32A1C2833F * ___Node_1;
};

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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Linq.Expressions.Interpreter.LocalDefinition
struct  LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D 
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.LocalDefinition::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Interpreter.LocalDefinition::<Parameter>k__BackingField
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D, ___U3CIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_0() const { return ___U3CIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_0() { return &___U3CIndexU3Ek__BackingField_0; }
	inline void set_U3CIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D, ___U3CParameterU3Ek__BackingField_1)); }
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * get_U3CParameterU3Ek__BackingField_1() const { return ___U3CParameterU3Ek__BackingField_1; }
	inline ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 ** get_address_of_U3CParameterU3Ek__BackingField_1() { return &___U3CParameterU3Ek__BackingField_1; }
	inline void set_U3CParameterU3Ek__BackingField_1(ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * value)
	{
		___U3CParameterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParameterU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Linq.Expressions.Interpreter.LocalDefinition
struct LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_marshaled_pinvoke
{
	int32_t ___U3CIndexU3Ek__BackingField_0;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Linq.Expressions.Interpreter.LocalDefinition
struct LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_marshaled_com
{
	int32_t ___U3CIndexU3Ek__BackingField_0;
	ParameterExpression_t616ADBE354C741C2F0ABA5856714FC0607DEC217 * ___U3CParameterU3Ek__BackingField_1;
};

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.CompilerServices.CallSite`1<System.Object>
struct  CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A  : public CallSite_t8C37A443D7EE5B74293859D3ADC1EBA65BC16A4E
{
public:
	// T System.Runtime.CompilerServices.CallSite`1::Target
	RuntimeObject * ___Target_3;
	// T[] System.Runtime.CompilerServices.CallSite`1::Rules
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Rules_4;

public:
	inline static int32_t get_offset_of_Target_3() { return static_cast<int32_t>(offsetof(CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A, ___Target_3)); }
	inline RuntimeObject * get_Target_3() const { return ___Target_3; }
	inline RuntimeObject ** get_address_of_Target_3() { return &___Target_3; }
	inline void set_Target_3(RuntimeObject * value)
	{
		___Target_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_3), (void*)value);
	}

	inline static int32_t get_offset_of_Rules_4() { return static_cast<int32_t>(offsetof(CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A, ___Rules_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Rules_4() const { return ___Rules_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Rules_4() { return &___Rules_4; }
	inline void set_Rules_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Rules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rules_4), (void*)value);
	}
};

struct CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A_StaticFields
{
public:
	// T System.Runtime.CompilerServices.CallSite`1::s_cachedUpdate
	RuntimeObject * ___s_cachedUpdate_5;
	// T modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite`1::s_cachedNoMatch
	RuntimeObject * ___s_cachedNoMatch_6;

public:
	inline static int32_t get_offset_of_s_cachedUpdate_5() { return static_cast<int32_t>(offsetof(CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A_StaticFields, ___s_cachedUpdate_5)); }
	inline RuntimeObject * get_s_cachedUpdate_5() const { return ___s_cachedUpdate_5; }
	inline RuntimeObject ** get_address_of_s_cachedUpdate_5() { return &___s_cachedUpdate_5; }
	inline void set_s_cachedUpdate_5(RuntimeObject * value)
	{
		___s_cachedUpdate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedUpdate_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedNoMatch_6() { return static_cast<int32_t>(offsetof(CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A_StaticFields, ___s_cachedNoMatch_6)); }
	inline RuntimeObject * get_s_cachedNoMatch_6() const { return ___s_cachedNoMatch_6; }
	inline RuntimeObject ** get_address_of_s_cachedNoMatch_6() { return &___s_cachedNoMatch_6; }
	inline void set_s_cachedNoMatch_6(RuntimeObject * value)
	{
		___s_cachedNoMatch_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedNoMatch_6), (void*)value);
	}
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Xml.Schema.SequenceNode_SequenceConstructPosContext
struct  SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1 
{
public:
	// System.Xml.Schema.SequenceNode System.Xml.Schema.SequenceNode_SequenceConstructPosContext::this_
	SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608 * ___this__0;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode_SequenceConstructPosContext::firstpos
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___firstpos_1;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode_SequenceConstructPosContext::lastpos
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___lastpos_2;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode_SequenceConstructPosContext::lastposLeft
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___lastposLeft_3;
	// System.Xml.Schema.BitSet System.Xml.Schema.SequenceNode_SequenceConstructPosContext::firstposRight
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___firstposRight_4;

public:
	inline static int32_t get_offset_of_this__0() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1, ___this__0)); }
	inline SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608 * get_this__0() const { return ___this__0; }
	inline SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608 ** get_address_of_this__0() { return &___this__0; }
	inline void set_this__0(SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608 * value)
	{
		___this__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___this__0), (void*)value);
	}

	inline static int32_t get_offset_of_firstpos_1() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1, ___firstpos_1)); }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C * get_firstpos_1() const { return ___firstpos_1; }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C ** get_address_of_firstpos_1() { return &___firstpos_1; }
	inline void set_firstpos_1(BitSet_t0E4C53EC600670A4B74C5671553596978880138C * value)
	{
		___firstpos_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstpos_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastpos_2() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1, ___lastpos_2)); }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C * get_lastpos_2() const { return ___lastpos_2; }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C ** get_address_of_lastpos_2() { return &___lastpos_2; }
	inline void set_lastpos_2(BitSet_t0E4C53EC600670A4B74C5671553596978880138C * value)
	{
		___lastpos_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastpos_2), (void*)value);
	}

	inline static int32_t get_offset_of_lastposLeft_3() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1, ___lastposLeft_3)); }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C * get_lastposLeft_3() const { return ___lastposLeft_3; }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C ** get_address_of_lastposLeft_3() { return &___lastposLeft_3; }
	inline void set_lastposLeft_3(BitSet_t0E4C53EC600670A4B74C5671553596978880138C * value)
	{
		___lastposLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastposLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_firstposRight_4() { return static_cast<int32_t>(offsetof(SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1, ___firstposRight_4)); }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C * get_firstposRight_4() const { return ___firstposRight_4; }
	inline BitSet_t0E4C53EC600670A4B74C5671553596978880138C ** get_address_of_firstposRight_4() { return &___firstposRight_4; }
	inline void set_firstposRight_4(BitSet_t0E4C53EC600670A4B74C5671553596978880138C * value)
	{
		___firstposRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstposRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshaled_pinvoke
{
	SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608 * ___this__0;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___firstpos_1;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___lastpos_2;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___lastposLeft_3;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___firstposRight_4;
};
// Native definition for COM marshalling of System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_marshaled_com
{
	SequenceNode_tAB18F790CB1B5BCD1D984EECC17C841B00881608 * ___this__0;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___firstpos_1;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___lastpos_2;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___lastposLeft_3;
	BitSet_t0E4C53EC600670A4B74C5671553596978880138C * ___firstposRight_4;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct  NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeSlice`1
#ifndef NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke_define
#define NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke_define
struct NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeSlice`1
#ifndef NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com_define
#define NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com_define
struct NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
#endif

// Unity.Collections.NativeSlice`1<System.UInt32>
struct  NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeSlice`1
#ifndef NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke_define
#define NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke_define
struct NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeSlice`1
#ifndef NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com_define
#define NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com_define
struct NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
#endif

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct  NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeSlice`1
#ifndef NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke_define
#define NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke_define
struct NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_pinvoke
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeSlice`1
#ifndef NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com_define
#define NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com_define
struct NativeSlice_1_tF64FC9231236E57AAA2B2145E332DB3492093A59_marshaled_com
{
	uint8_t* ___m_Buffer_0;
	int32_t ___m_Stride_1;
	int32_t ___m_Length_2;
};
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// Newtonsoft.Json.Linq.JTokenType
struct  JTokenType_t6E74963952426FE99DA37BAEFD84A99710412C9E 
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JTokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JTokenType_t6E74963952426FE99DA37BAEFD84A99710412C9E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.LargeArrayBuilder`1<System.Object>
struct  LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B 
{
public:
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;

public:
	inline static int32_t get_offset_of__maxCapacity_0() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____maxCapacity_0)); }
	inline int32_t get__maxCapacity_0() const { return ____maxCapacity_0; }
	inline int32_t* get_address_of__maxCapacity_0() { return &____maxCapacity_0; }
	inline void set__maxCapacity_0(int32_t value)
	{
		____maxCapacity_0 = value;
	}

	inline static int32_t get_offset_of__first_1() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____first_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__first_1() const { return ____first_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__first_1() { return &____first_1; }
	inline void set__first_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____first_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____first_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffers_2() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____buffers_2)); }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  get__buffers_2() const { return ____buffers_2; }
	inline ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF * get_address_of__buffers_2() { return &____buffers_2; }
	inline void set__buffers_2(ArrayBuilder_1_t1E6F2012183FAF071D71CDE9A25424FC01D95CEF  value)
	{
		____buffers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____buffers_2))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____current_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__current_3() const { return ____current_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

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
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
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
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

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


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

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


// System.Xml.Schema.XmlTypeCode
struct  XmlTypeCode_t9C4AD5729574C591993F2559021E198BED5252A2 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTypeCode_t9C4AD5729574C591993F2559021E198BED5252A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// Unity.Jobs.LowLevel.Unsafe.ScheduleMode
struct  ScheduleMode_t83F3C482EFD55A9D2FA6F84D626EF24DFACB2E37 
{
public:
	// System.Int32 Unity.Jobs.LowLevel.Unsafe.ScheduleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScheduleMode_t83F3C482EFD55A9D2FA6F84D626EF24DFACB2E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Mesh_InternalVertexChannelType
struct  InternalVertexChannelType_t6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D 
{
public:
	// System.Int32 UnityEngine.Mesh_InternalVertexChannelType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t6E7BF24C2E6B97B01F96625DBAF6A2CF402CFF9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct  VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t2D79DF64001C55DA72AC86CE8946098970E8194D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job
struct  ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 
{
public:
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job::rgbaImage
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  ___rgbaImage_0;
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job::argbImage
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  ___argbImage_1;

public:
	inline static int32_t get_offset_of_rgbaImage_0() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0, ___rgbaImage_0)); }
	inline NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  get_rgbaImage_0() const { return ___rgbaImage_0; }
	inline NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6 * get_address_of_rgbaImage_0() { return &___rgbaImage_0; }
	inline void set_rgbaImage_0(NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  value)
	{
		___rgbaImage_0 = value;
	}

	inline static int32_t get_offset_of_argbImage_1() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0, ___argbImage_1)); }
	inline NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  get_argbImage_1() const { return ___argbImage_1; }
	inline NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6 * get_address_of_argbImage_1() { return &___argbImage_1; }
	inline void set_argbImage_1(NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  value)
	{
		___argbImage_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job
struct ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0_marshaled_pinvoke
{
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  ___rgbaImage_0;
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  ___argbImage_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job
struct ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0_marshaled_com
{
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  ___rgbaImage_0;
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  ___argbImage_1;
};

// UnityEngine.XR.ARKit.ManagedReferenceImage
struct  ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789 
{
public:
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___size_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_size_2() const { return ___size_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct  XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Resolution_0)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct  XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_Position_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_3() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_Tracked_3)); }
	inline int32_t get_m_Tracked_3() const { return ___m_Tracked_3; }
	inline int32_t* get_address_of_m_Tracked_3() { return &___m_Tracked_3; }
	inline void set_m_Tracked_3(int32_t value)
	{
		___m_Tracked_3 = value;
	}
};


// IBM.Cloud.SDK.Utilities.IBMException
struct  IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5  : public Exception_t
{
public:

public:
};


// Newtonsoft.Json.Linq.JValue
struct  JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF  : public JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02
{
public:
	// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::_valueType
	int32_t ____valueType_13;
	// System.Object Newtonsoft.Json.Linq.JValue::_value
	RuntimeObject * ____value_14;

public:
	inline static int32_t get_offset_of__valueType_13() { return static_cast<int32_t>(offsetof(JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF, ____valueType_13)); }
	inline int32_t get__valueType_13() const { return ____valueType_13; }
	inline int32_t* get_address_of__valueType_13() { return &____valueType_13; }
	inline void set__valueType_13(int32_t value)
	{
		____valueType_13 = value;
	}

	inline static int32_t get_offset_of__value_14() { return static_cast<int32_t>(offsetof(JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF, ____value_14)); }
	inline RuntimeObject * get__value_14() const { return ____value_14; }
	inline RuntimeObject ** get_address_of__value_14() { return &____value_14; }
	inline void set__value_14(RuntimeObject * value)
	{
		____value_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_14), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Xml.Schema.XmlBaseConverter
struct  XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8  : public XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E
{
public:
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t * ___clrTypeDefault_2;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8, ___schemaType_0)); }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * get_schemaType_0() const { return ___schemaType_0; }
	inline XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 ** get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(XmlSchemaType_tE97B70BB8298B2D6FDDBCCB14EEE99EC4806BBA9 * value)
	{
		___schemaType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaType_0), (void*)value);
	}

	inline static int32_t get_offset_of_typeCode_1() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8, ___typeCode_1)); }
	inline int32_t get_typeCode_1() const { return ___typeCode_1; }
	inline int32_t* get_address_of_typeCode_1() { return &___typeCode_1; }
	inline void set_typeCode_1(int32_t value)
	{
		___typeCode_1 = value;
	}

	inline static int32_t get_offset_of_clrTypeDefault_2() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8, ___clrTypeDefault_2)); }
	inline Type_t * get_clrTypeDefault_2() const { return ___clrTypeDefault_2; }
	inline Type_t ** get_address_of_clrTypeDefault_2() { return &___clrTypeDefault_2; }
	inline void set_clrTypeDefault_2(Type_t * value)
	{
		___clrTypeDefault_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clrTypeDefault_2), (void*)value);
	}
};

struct XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields
{
public:
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t * ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t * ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t * ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t * ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t * ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t * ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t * ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t * ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t * ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t * ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t * ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t * ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t * ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t * ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t * ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t * ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t * ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t * ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t * ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t * ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t * ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t * ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t * ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t * ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t * ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t * ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t * ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t * ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t * ___XPathNavigatorType_31;

public:
	inline static int32_t get_offset_of_ICollectionType_3() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ICollectionType_3)); }
	inline Type_t * get_ICollectionType_3() const { return ___ICollectionType_3; }
	inline Type_t ** get_address_of_ICollectionType_3() { return &___ICollectionType_3; }
	inline void set_ICollectionType_3(Type_t * value)
	{
		___ICollectionType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ICollectionType_3), (void*)value);
	}

	inline static int32_t get_offset_of_IEnumerableType_4() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___IEnumerableType_4)); }
	inline Type_t * get_IEnumerableType_4() const { return ___IEnumerableType_4; }
	inline Type_t ** get_address_of_IEnumerableType_4() { return &___IEnumerableType_4; }
	inline void set_IEnumerableType_4(Type_t * value)
	{
		___IEnumerableType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IEnumerableType_4), (void*)value);
	}

	inline static int32_t get_offset_of_IListType_5() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___IListType_5)); }
	inline Type_t * get_IListType_5() const { return ___IListType_5; }
	inline Type_t ** get_address_of_IListType_5() { return &___IListType_5; }
	inline void set_IListType_5(Type_t * value)
	{
		___IListType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IListType_5), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectArrayType_6() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ObjectArrayType_6)); }
	inline Type_t * get_ObjectArrayType_6() const { return ___ObjectArrayType_6; }
	inline Type_t ** get_address_of_ObjectArrayType_6() { return &___ObjectArrayType_6; }
	inline void set_ObjectArrayType_6(Type_t * value)
	{
		___ObjectArrayType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectArrayType_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringArrayType_7() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___StringArrayType_7)); }
	inline Type_t * get_StringArrayType_7() const { return ___StringArrayType_7; }
	inline Type_t ** get_address_of_StringArrayType_7() { return &___StringArrayType_7; }
	inline void set_StringArrayType_7(Type_t * value)
	{
		___StringArrayType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringArrayType_7), (void*)value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueArrayType_8() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XmlAtomicValueArrayType_8)); }
	inline Type_t * get_XmlAtomicValueArrayType_8() const { return ___XmlAtomicValueArrayType_8; }
	inline Type_t ** get_address_of_XmlAtomicValueArrayType_8() { return &___XmlAtomicValueArrayType_8; }
	inline void set_XmlAtomicValueArrayType_8(Type_t * value)
	{
		___XmlAtomicValueArrayType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlAtomicValueArrayType_8), (void*)value);
	}

	inline static int32_t get_offset_of_DecimalType_9() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DecimalType_9)); }
	inline Type_t * get_DecimalType_9() const { return ___DecimalType_9; }
	inline Type_t ** get_address_of_DecimalType_9() { return &___DecimalType_9; }
	inline void set_DecimalType_9(Type_t * value)
	{
		___DecimalType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecimalType_9), (void*)value);
	}

	inline static int32_t get_offset_of_Int32Type_10() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___Int32Type_10)); }
	inline Type_t * get_Int32Type_10() const { return ___Int32Type_10; }
	inline Type_t ** get_address_of_Int32Type_10() { return &___Int32Type_10; }
	inline void set_Int32Type_10(Type_t * value)
	{
		___Int32Type_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int32Type_10), (void*)value);
	}

	inline static int32_t get_offset_of_Int64Type_11() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___Int64Type_11)); }
	inline Type_t * get_Int64Type_11() const { return ___Int64Type_11; }
	inline Type_t ** get_address_of_Int64Type_11() { return &___Int64Type_11; }
	inline void set_Int64Type_11(Type_t * value)
	{
		___Int64Type_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int64Type_11), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_12() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___StringType_12)); }
	inline Type_t * get_StringType_12() const { return ___StringType_12; }
	inline Type_t ** get_address_of_StringType_12() { return &___StringType_12; }
	inline void set_StringType_12(Type_t * value)
	{
		___StringType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_12), (void*)value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueType_13() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XmlAtomicValueType_13)); }
	inline Type_t * get_XmlAtomicValueType_13() const { return ___XmlAtomicValueType_13; }
	inline Type_t ** get_address_of_XmlAtomicValueType_13() { return &___XmlAtomicValueType_13; }
	inline void set_XmlAtomicValueType_13(Type_t * value)
	{
		___XmlAtomicValueType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlAtomicValueType_13), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_14() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ObjectType_14)); }
	inline Type_t * get_ObjectType_14() const { return ___ObjectType_14; }
	inline Type_t ** get_address_of_ObjectType_14() { return &___ObjectType_14; }
	inline void set_ObjectType_14(Type_t * value)
	{
		___ObjectType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_14), (void*)value);
	}

	inline static int32_t get_offset_of_ByteType_15() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ByteType_15)); }
	inline Type_t * get_ByteType_15() const { return ___ByteType_15; }
	inline Type_t ** get_address_of_ByteType_15() { return &___ByteType_15; }
	inline void set_ByteType_15(Type_t * value)
	{
		___ByteType_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteType_15), (void*)value);
	}

	inline static int32_t get_offset_of_Int16Type_16() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___Int16Type_16)); }
	inline Type_t * get_Int16Type_16() const { return ___Int16Type_16; }
	inline Type_t ** get_address_of_Int16Type_16() { return &___Int16Type_16; }
	inline void set_Int16Type_16(Type_t * value)
	{
		___Int16Type_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int16Type_16), (void*)value);
	}

	inline static int32_t get_offset_of_SByteType_17() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___SByteType_17)); }
	inline Type_t * get_SByteType_17() const { return ___SByteType_17; }
	inline Type_t ** get_address_of_SByteType_17() { return &___SByteType_17; }
	inline void set_SByteType_17(Type_t * value)
	{
		___SByteType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SByteType_17), (void*)value);
	}

	inline static int32_t get_offset_of_UInt16Type_18() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UInt16Type_18)); }
	inline Type_t * get_UInt16Type_18() const { return ___UInt16Type_18; }
	inline Type_t ** get_address_of_UInt16Type_18() { return &___UInt16Type_18; }
	inline void set_UInt16Type_18(Type_t * value)
	{
		___UInt16Type_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt16Type_18), (void*)value);
	}

	inline static int32_t get_offset_of_UInt32Type_19() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UInt32Type_19)); }
	inline Type_t * get_UInt32Type_19() const { return ___UInt32Type_19; }
	inline Type_t ** get_address_of_UInt32Type_19() { return &___UInt32Type_19; }
	inline void set_UInt32Type_19(Type_t * value)
	{
		___UInt32Type_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt32Type_19), (void*)value);
	}

	inline static int32_t get_offset_of_UInt64Type_20() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UInt64Type_20)); }
	inline Type_t * get_UInt64Type_20() const { return ___UInt64Type_20; }
	inline Type_t ** get_address_of_UInt64Type_20() { return &___UInt64Type_20; }
	inline void set_UInt64Type_20(Type_t * value)
	{
		___UInt64Type_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt64Type_20), (void*)value);
	}

	inline static int32_t get_offset_of_XPathItemType_21() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XPathItemType_21)); }
	inline Type_t * get_XPathItemType_21() const { return ___XPathItemType_21; }
	inline Type_t ** get_address_of_XPathItemType_21() { return &___XPathItemType_21; }
	inline void set_XPathItemType_21(Type_t * value)
	{
		___XPathItemType_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XPathItemType_21), (void*)value);
	}

	inline static int32_t get_offset_of_DoubleType_22() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DoubleType_22)); }
	inline Type_t * get_DoubleType_22() const { return ___DoubleType_22; }
	inline Type_t ** get_address_of_DoubleType_22() { return &___DoubleType_22; }
	inline void set_DoubleType_22(Type_t * value)
	{
		___DoubleType_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DoubleType_22), (void*)value);
	}

	inline static int32_t get_offset_of_SingleType_23() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___SingleType_23)); }
	inline Type_t * get_SingleType_23() const { return ___SingleType_23; }
	inline Type_t ** get_address_of_SingleType_23() { return &___SingleType_23; }
	inline void set_SingleType_23(Type_t * value)
	{
		___SingleType_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SingleType_23), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeType_24() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DateTimeType_24)); }
	inline Type_t * get_DateTimeType_24() const { return ___DateTimeType_24; }
	inline Type_t ** get_address_of_DateTimeType_24() { return &___DateTimeType_24; }
	inline void set_DateTimeType_24(Type_t * value)
	{
		___DateTimeType_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeType_24), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeOffsetType_25() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___DateTimeOffsetType_25)); }
	inline Type_t * get_DateTimeOffsetType_25() const { return ___DateTimeOffsetType_25; }
	inline Type_t ** get_address_of_DateTimeOffsetType_25() { return &___DateTimeOffsetType_25; }
	inline void set_DateTimeOffsetType_25(Type_t * value)
	{
		___DateTimeOffsetType_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeOffsetType_25), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanType_26() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___BooleanType_26)); }
	inline Type_t * get_BooleanType_26() const { return ___BooleanType_26; }
	inline Type_t ** get_address_of_BooleanType_26() { return &___BooleanType_26; }
	inline void set_BooleanType_26(Type_t * value)
	{
		___BooleanType_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanType_26), (void*)value);
	}

	inline static int32_t get_offset_of_ByteArrayType_27() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___ByteArrayType_27)); }
	inline Type_t * get_ByteArrayType_27() const { return ___ByteArrayType_27; }
	inline Type_t ** get_address_of_ByteArrayType_27() { return &___ByteArrayType_27; }
	inline void set_ByteArrayType_27(Type_t * value)
	{
		___ByteArrayType_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteArrayType_27), (void*)value);
	}

	inline static int32_t get_offset_of_XmlQualifiedNameType_28() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XmlQualifiedNameType_28)); }
	inline Type_t * get_XmlQualifiedNameType_28() const { return ___XmlQualifiedNameType_28; }
	inline Type_t ** get_address_of_XmlQualifiedNameType_28() { return &___XmlQualifiedNameType_28; }
	inline void set_XmlQualifiedNameType_28(Type_t * value)
	{
		___XmlQualifiedNameType_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlQualifiedNameType_28), (void*)value);
	}

	inline static int32_t get_offset_of_UriType_29() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___UriType_29)); }
	inline Type_t * get_UriType_29() const { return ___UriType_29; }
	inline Type_t ** get_address_of_UriType_29() { return &___UriType_29; }
	inline void set_UriType_29(Type_t * value)
	{
		___UriType_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriType_29), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanType_30() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___TimeSpanType_30)); }
	inline Type_t * get_TimeSpanType_30() const { return ___TimeSpanType_30; }
	inline Type_t ** get_address_of_TimeSpanType_30() { return &___TimeSpanType_30; }
	inline void set_TimeSpanType_30(Type_t * value)
	{
		___TimeSpanType_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanType_30), (void*)value);
	}

	inline static int32_t get_offset_of_XPathNavigatorType_31() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8_StaticFields, ___XPathNavigatorType_31)); }
	inline Type_t * get_XPathNavigatorType_31() const { return ___XPathNavigatorType_31; }
	inline Type_t ** get_address_of_XPathNavigatorType_31() { return &___XPathNavigatorType_31; }
	inline void set_XPathNavigatorType_31(Type_t * value)
	{
		___XPathNavigatorType_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XPathNavigatorType_31), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<System.UInt64>
struct  NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct  NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastInfo>
struct  NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int16>>
struct  NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int32>>
struct  NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct  NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct  NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct  NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters
struct  JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F 
{
public:
	// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::Dependency
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___Dependency_0;
	// System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::ScheduleMode
	int32_t ___ScheduleMode_1;
	// System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::ReflectionData
	intptr_t ___ReflectionData_2;
	// System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::JobDataPtr
	intptr_t ___JobDataPtr_3;

public:
	inline static int32_t get_offset_of_Dependency_0() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___Dependency_0)); }
	inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  get_Dependency_0() const { return ___Dependency_0; }
	inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 * get_address_of_Dependency_0() { return &___Dependency_0; }
	inline void set_Dependency_0(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  value)
	{
		___Dependency_0 = value;
	}

	inline static int32_t get_offset_of_ScheduleMode_1() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___ScheduleMode_1)); }
	inline int32_t get_ScheduleMode_1() const { return ___ScheduleMode_1; }
	inline int32_t* get_address_of_ScheduleMode_1() { return &___ScheduleMode_1; }
	inline void set_ScheduleMode_1(int32_t value)
	{
		___ScheduleMode_1 = value;
	}

	inline static int32_t get_offset_of_ReflectionData_2() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___ReflectionData_2)); }
	inline intptr_t get_ReflectionData_2() const { return ___ReflectionData_2; }
	inline intptr_t* get_address_of_ReflectionData_2() { return &___ReflectionData_2; }
	inline void set_ReflectionData_2(intptr_t value)
	{
		___ReflectionData_2 = value;
	}

	inline static int32_t get_offset_of_JobDataPtr_3() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___JobDataPtr_3)); }
	inline intptr_t get_JobDataPtr_3() const { return ___JobDataPtr_3; }
	inline intptr_t* get_address_of_JobDataPtr_3() { return &___JobDataPtr_3; }
	inline void set_JobDataPtr_3(intptr_t value)
	{
		___JobDataPtr_3 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob
struct  AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B 
{
public:
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::image
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::database
	intptr_t ___database_1;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::width
	int32_t ___width_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::height
	int32_t ___height_3;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::physicalWidth
	float ___physicalWidth_4;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::format
	int32_t ___format_5;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::managedReferenceImage
	ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  ___managedReferenceImage_6;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___image_0)); }
	inline NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  get_image_0() const { return ___image_0; }
	inline NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  value)
	{
		___image_0 = value;
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___database_1)); }
	inline intptr_t get_database_1() const { return ___database_1; }
	inline intptr_t* get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(intptr_t value)
	{
		___database_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_physicalWidth_4() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___physicalWidth_4)); }
	inline float get_physicalWidth_4() const { return ___physicalWidth_4; }
	inline float* get_address_of_physicalWidth_4() { return &___physicalWidth_4; }
	inline void set_physicalWidth_4(float value)
	{
		___physicalWidth_4 = value;
	}

	inline static int32_t get_offset_of_format_5() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___format_5)); }
	inline int32_t get_format_5() const { return ___format_5; }
	inline int32_t* get_address_of_format_5() { return &___format_5; }
	inline void set_format_5(int32_t value)
	{
		___format_5 = value;
	}

	inline static int32_t get_offset_of_managedReferenceImage_6() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___managedReferenceImage_6)); }
	inline ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  get_managedReferenceImage_6() const { return ___managedReferenceImage_6; }
	inline ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789 * get_address_of_managedReferenceImage_6() { return &___managedReferenceImage_6; }
	inline void set_managedReferenceImage_6(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  value)
	{
		___managedReferenceImage_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B_marshaled_pinvoke
{
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  ___image_0;
	intptr_t ___database_1;
	int32_t ___width_2;
	int32_t ___height_3;
	float ___physicalWidth_4;
	int32_t ___format_5;
	ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  ___managedReferenceImage_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B_marshaled_com
{
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  ___image_0;
	intptr_t ___database_1;
	int32_t ___width_2;
	int32_t ___height_3;
	float ___physicalWidth_4;
	int32_t ___format_5;
	ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  ___managedReferenceImage_6;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_2)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_4)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}
};

struct BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct  XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_LeftEyePose_4)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_RightEyePose_5)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7, ___m_FixationPoint_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_FixationPoint_6 = value;
	}
};

struct XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7_StaticFields, ___s_Default_7)); }
	inline XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct  XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct  XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Id_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct  XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  value)
	{
		___s_Default_5 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Schema.XmlListConverter
struct  XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2  : public XmlBaseConverter_t2E1FE7137987814D59918B27A1807DAE7E78CFD8
{
public:
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * ___atomicConverter_32;

public:
	inline static int32_t get_offset_of_atomicConverter_32() { return static_cast<int32_t>(offsetof(XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2, ___atomicConverter_32)); }
	inline XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * get_atomicConverter_32() const { return ___atomicConverter_32; }
	inline XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E ** get_address_of_atomicConverter_32() { return &___atomicConverter_32; }
	inline void set_atomicConverter_32(XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * value)
	{
		___atomicConverter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atomicConverter_32), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<System.Object>
struct  EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob
struct  PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800 
{
public:
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::points
	NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::infos
	NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  ___infos_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::hits
	NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  ___hits_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::count
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___count_3;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::cosineThreshold
	float ___cosineThreshold_4;
	// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob::trackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId_6;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___points_0)); }
	inline NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  get_points_0() const { return ___points_0; }
	inline NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_infos_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___infos_1)); }
	inline NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  get_infos_1() const { return ___infos_1; }
	inline NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F * get_address_of_infos_1() { return &___infos_1; }
	inline void set_infos_1(NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  value)
	{
		___infos_1 = value;
	}

	inline static int32_t get_offset_of_hits_2() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___hits_2)); }
	inline NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  get_hits_2() const { return ___hits_2; }
	inline NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 * get_address_of_hits_2() { return &___hits_2; }
	inline void set_hits_2(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  value)
	{
		___hits_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___count_3)); }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  get_count_3() const { return ___count_3; }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_cosineThreshold_4() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___cosineThreshold_4)); }
	inline float get_cosineThreshold_4() const { return ___cosineThreshold_4; }
	inline float* get_address_of_cosineThreshold_4() { return &___cosineThreshold_4; }
	inline void set_cosineThreshold_4(float value)
	{
		___cosineThreshold_4 = value;
	}

	inline static int32_t get_offset_of_pose_5() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___pose_5)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_pose_5() const { return ___pose_5; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_pose_5() { return &___pose_5; }
	inline void set_pose_5(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___pose_5 = value;
	}

	inline static int32_t get_offset_of_trackableId_6() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800, ___trackableId_6)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_trackableId_6() const { return ___trackableId_6; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_trackableId_6() { return &___trackableId_6; }
	inline void set_trackableId_6(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___trackableId_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob
struct PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800_marshaled_pinvoke
{
	NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  ___points_0;
	NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  ___infos_1;
	NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  ___hits_2;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___count_3;
	float ___cosineThreshold_4;
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose_5;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob
struct PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800_marshaled_com
{
	NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  ___points_0;
	NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  ___infos_1;
	NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  ___hits_2;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___count_3;
	float ___cosineThreshold_4;
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose_5;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId_6;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastJob
struct  PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C 
{
public:
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastJob::points
	NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastJob::infoOut
	NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  ___infoOut_1;
	// UnityEngine.Ray UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastJob::ray
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_2;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C, ___points_0)); }
	inline NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  get_points_0() const { return ___points_0; }
	inline NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_infoOut_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C, ___infoOut_1)); }
	inline NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  get_infoOut_1() const { return ___infoOut_1; }
	inline NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F * get_address_of_infoOut_1() { return &___infoOut_1; }
	inline void set_infoOut_1(NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  value)
	{
		___infoOut_1 = value;
	}

	inline static int32_t get_offset_of_ray_2() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C, ___ray_2)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_ray_2() const { return ___ray_2; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_ray_2() { return &___ray_2; }
	inline void set_ray_2(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___ray_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob
struct PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C_marshaled_pinvoke
{
	NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  ___points_0;
	NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  ___infoOut_1;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob
struct PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C_marshaled_com
{
	NativeSlice_1_t11EBDE608ABB6D874F3EADDD448BE8BA39A54E41  ___points_0;
	NativeArray_1_tA80DDB40F373EBFA9AA644D341B3D1362249A11F  ___infoOut_1;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_2;
};

// UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions_DeallocateJob
struct  DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions_DeallocateJob::data
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C, ___data_0)); }
	inline NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  get_data_0() const { return ___data_0; }
	inline NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  value)
	{
		___data_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob
struct DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C_marshaled_pinvoke
{
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___data_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob
struct DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C_marshaled_com
{
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___data_0;
};

// UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformIndicesJob
struct  TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int16>> UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformIndicesJob::triangleIndicesIn
	NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  ___triangleIndicesIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int32>> UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformIndicesJob::triangleIndicesOut
	NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  ___triangleIndicesOut_1;

public:
	inline static int32_t get_offset_of_triangleIndicesIn_0() { return static_cast<int32_t>(offsetof(TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81, ___triangleIndicesIn_0)); }
	inline NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  get_triangleIndicesIn_0() const { return ___triangleIndicesIn_0; }
	inline NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4 * get_address_of_triangleIndicesIn_0() { return &___triangleIndicesIn_0; }
	inline void set_triangleIndicesIn_0(NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  value)
	{
		___triangleIndicesIn_0 = value;
	}

	inline static int32_t get_offset_of_triangleIndicesOut_1() { return static_cast<int32_t>(offsetof(TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81, ___triangleIndicesOut_1)); }
	inline NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  get_triangleIndicesOut_1() const { return ___triangleIndicesOut_1; }
	inline NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757 * get_address_of_triangleIndicesOut_1() { return &___triangleIndicesOut_1; }
	inline void set_triangleIndicesOut_1(NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  value)
	{
		___triangleIndicesOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformIndicesJob
struct TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81_marshaled_pinvoke
{
	NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  ___triangleIndicesIn_0;
	NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  ___triangleIndicesOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformIndicesJob
struct TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81_marshaled_com
{
	NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  ___triangleIndicesIn_0;
	NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  ___triangleIndicesOut_1;
};

// UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformUVsJob
struct  TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformUVsJob::uvsIn
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___uvsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformUVsJob::uvsOut
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___uvsOut_1;

public:
	inline static int32_t get_offset_of_uvsIn_0() { return static_cast<int32_t>(offsetof(TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A, ___uvsIn_0)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_uvsIn_0() const { return ___uvsIn_0; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_uvsIn_0() { return &___uvsIn_0; }
	inline void set_uvsIn_0(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___uvsIn_0 = value;
	}

	inline static int32_t get_offset_of_uvsOut_1() { return static_cast<int32_t>(offsetof(TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A, ___uvsOut_1)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_uvsOut_1() const { return ___uvsOut_1; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_uvsOut_1() { return &___uvsOut_1; }
	inline void set_uvsOut_1(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___uvsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformUVsJob
struct TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A_marshaled_pinvoke
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___uvsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___uvsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformUVsJob
struct TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A_marshaled_com
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___uvsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___uvsOut_1;
};

// UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformVerticesJob
struct  TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformVerticesJob::verticesIn
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___verticesIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformVerticesJob::verticesOut
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___verticesOut_1;

public:
	inline static int32_t get_offset_of_verticesIn_0() { return static_cast<int32_t>(offsetof(TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D, ___verticesIn_0)); }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  get_verticesIn_0() const { return ___verticesIn_0; }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * get_address_of_verticesIn_0() { return &___verticesIn_0; }
	inline void set_verticesIn_0(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  value)
	{
		___verticesIn_0 = value;
	}

	inline static int32_t get_offset_of_verticesOut_1() { return static_cast<int32_t>(offsetof(TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D, ___verticesOut_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_verticesOut_1() const { return ___verticesOut_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_verticesOut_1() { return &___verticesOut_1; }
	inline void set_verticesOut_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___verticesOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformVerticesJob
struct TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D_marshaled_pinvoke
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___verticesIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___verticesOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformVerticesJob
struct TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D_marshaled_com
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___verticesIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___verticesOut_1;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1<System.Byte>
struct  DeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5 
{
public:
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1::array
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(DeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5, ___array_0)); }
	inline NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  get_array_0() const { return ___array_0; }
	inline NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 * get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  value)
	{
		___array_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob
struct  TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsIn
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsOut
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsIn_0)); }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsOut_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___positionsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_pinvoke
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_marshaled_com
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob::positions
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B, ___positions_0)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positions_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B_marshaled_pinvoke
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B_marshaled_com
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob
struct  TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872, ___positionsIn_0)); }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872, ___positionsOut_1)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positionsOut_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872_marshaled_pinvoke
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872_marshaled_com
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Scale_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Size_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct  XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84, ___m_Vertices_0)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84, ___m_Normals_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84, ___m_Indices_2)); }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84, ___m_UVs_3)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___m_UVs_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84_marshaled_pinvoke
{
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Vertices_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Normals_1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___m_Indices_2;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___m_UVs_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84_marshaled_com
{
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Vertices_0;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Normals_1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___m_Indices_2;
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___m_UVs_3;
};

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// IBM.Cloud.SDK.Widgetss.Widget
struct  Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget::_autoConnect
	bool ____autoConnect_4;
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget::_initialized
	bool ____initialized_5;
	// IBM.Cloud.SDK.Widgetss.Widget_Input[] IBM.Cloud.SDK.Widgetss.Widget::_inputs
	InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* ____inputs_6;
	// IBM.Cloud.SDK.Widgetss.Widget_Output[] IBM.Cloud.SDK.Widgetss.Widget::_outputs
	OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163* ____outputs_7;

public:
	inline static int32_t get_offset_of__autoConnect_4() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____autoConnect_4)); }
	inline bool get__autoConnect_4() const { return ____autoConnect_4; }
	inline bool* get_address_of__autoConnect_4() { return &____autoConnect_4; }
	inline void set__autoConnect_4(bool value)
	{
		____autoConnect_4 = value;
	}

	inline static int32_t get_offset_of__initialized_5() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____initialized_5)); }
	inline bool get__initialized_5() const { return ____initialized_5; }
	inline bool* get_address_of__initialized_5() { return &____initialized_5; }
	inline void set__initialized_5(bool value)
	{
		____initialized_5 = value;
	}

	inline static int32_t get_offset_of__inputs_6() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____inputs_6)); }
	inline InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* get__inputs_6() const { return ____inputs_6; }
	inline InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73** get_address_of__inputs_6() { return &____inputs_6; }
	inline void set__inputs_6(InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* value)
	{
		____inputs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputs_6), (void*)value);
	}

	inline static int32_t get_offset_of__outputs_7() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____outputs_7)); }
	inline OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163* get__outputs_7() const { return ____outputs_7; }
	inline OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163** get_address_of__outputs_7() { return &____outputs_7; }
	inline void set__outputs_7(OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163* value)
	{
		____outputs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outputs_7), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct  ARTrackable_2_tD82405FC40CC95A2EF48E280B48A1FCA87693B1E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_tD82405FC40CC95A2EF48E280B48A1FCA87693B1E, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_tD82405FC40CC95A2EF48E280B48A1FCA87693B1E, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_tD82405FC40CC95A2EF48E280B48A1FCA87693B1E, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARFace
struct  ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F  : public ARTrackable_2_tD82405FC40CC95A2EF48E280B48A1FCA87693B1E
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARFace::updated
	Action_1_t3B7AAA04B9F26EE9CE64979C15A9C2AD9E24F947 * ___updated_7;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<leftEye>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CleftEyeU3Ek__BackingField_8;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<rightEye>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CrightEyeU3Ek__BackingField_9;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<fixationPoint>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CfixationPointU3Ek__BackingField_10;
	// UnityEngine.XR.ARSubsystems.XRFaceMesh UnityEngine.XR.ARFoundation.ARFace::m_FaceMesh
	XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84  ___m_FaceMesh_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARFace::m_Updated
	bool ___m_Updated_12;

public:
	inline static int32_t get_offset_of_updated_7() { return static_cast<int32_t>(offsetof(ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F, ___updated_7)); }
	inline Action_1_t3B7AAA04B9F26EE9CE64979C15A9C2AD9E24F947 * get_updated_7() const { return ___updated_7; }
	inline Action_1_t3B7AAA04B9F26EE9CE64979C15A9C2AD9E24F947 ** get_address_of_updated_7() { return &___updated_7; }
	inline void set_updated_7(Action_1_t3B7AAA04B9F26EE9CE64979C15A9C2AD9E24F947 * value)
	{
		___updated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updated_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F, ___U3CleftEyeU3Ek__BackingField_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CleftEyeU3Ek__BackingField_8() const { return ___U3CleftEyeU3Ek__BackingField_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CleftEyeU3Ek__BackingField_8() { return &___U3CleftEyeU3Ek__BackingField_8; }
	inline void set_U3CleftEyeU3Ek__BackingField_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CleftEyeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F, ___U3CrightEyeU3Ek__BackingField_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CrightEyeU3Ek__BackingField_9() const { return ___U3CrightEyeU3Ek__BackingField_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CrightEyeU3Ek__BackingField_9() { return &___U3CrightEyeU3Ek__BackingField_9; }
	inline void set_U3CrightEyeU3Ek__BackingField_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CrightEyeU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfixationPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F, ___U3CfixationPointU3Ek__BackingField_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CfixationPointU3Ek__BackingField_10() const { return ___U3CfixationPointU3Ek__BackingField_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CfixationPointU3Ek__BackingField_10() { return &___U3CfixationPointU3Ek__BackingField_10; }
	inline void set_U3CfixationPointU3Ek__BackingField_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CfixationPointU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfixationPointU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_FaceMesh_11() { return static_cast<int32_t>(offsetof(ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F, ___m_FaceMesh_11)); }
	inline XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84  get_m_FaceMesh_11() const { return ___m_FaceMesh_11; }
	inline XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84 * get_address_of_m_FaceMesh_11() { return &___m_FaceMesh_11; }
	inline void set_m_FaceMesh_11(XRFaceMesh_t38421E2A79DE93B8DA04E111E8FC82DDBCC74B84  value)
	{
		___m_FaceMesh_11 = value;
	}

	inline static int32_t get_offset_of_m_Updated_12() { return static_cast<int32_t>(offsetof(ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F, ___m_Updated_12)); }
	inline bool get_m_Updated_12() const { return ___m_Updated_12; }
	inline bool* get_address_of_m_Updated_12() { return &___m_Updated_12; }
	inline void set_m_Updated_12(bool value)
	{
		___m_Updated_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * m_Items[1];

public:
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Dynamic.BindingRestrictions_TestBuilder_AndNode[]
struct AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndNode_tCC48979AF5896DA4A881EE49E182099994188916  m_Items[1];

public:
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndNode_tCC48979AF5896DA4A881EE49E182099994188916  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Node_1), (void*)NULL);
	}
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndNode_tCC48979AF5896DA4A881EE49E182099994188916 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndNode_tCC48979AF5896DA4A881EE49E182099994188916  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Node_1), (void*)NULL);
	}
};
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  m_Items[1];

public:
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CParameterU3Ek__BackingField_1), (void*)NULL);
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CParameterU3Ek__BackingField_1), (void*)NULL);
	}
};
// System.Xml.Schema.SequenceNode_SequenceConstructPosContext[]
struct SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1  m_Items[1];

public:
	inline SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___this__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___firstpos_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lastpos_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lastposLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___firstposRight_4), (void*)NULL);
		#endif
	}
	inline SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___this__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___firstpos_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lastpos_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lastposLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___firstposRight_4), (void*)NULL);
		#endif
	}
};
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  m_Items[1];

public:
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  m_Items[1];

public:
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  m_Items[1];

public:
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		m_Items[index] = value;
	}
};
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  m_Items[1];

public:
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  m_Items[1];

public:
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  m_Items[1];

public:
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool ___initialize0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* ___items0, const RuntimeMethod* method);
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mA472889E7DFAACBC4343A18769BACE51FE7506AE_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m15AF8B3D5979E51A84620AA0A8CED42273002873_gshared (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mFD4DC7455BD7C8AB42D2F33CF750E385346E86AB_gshared (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA098CB59650D6DED74A70C7782C46C3AED68AE3F_gshared (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m8C575FF6061B50689447B5394FCC9B8F37BC7C9F_gshared (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0D7A15991FA87BB074F471B4BDB80CAEA2FB6E3E_gshared (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB38D8E0BB4B642E12EC36B5A41CFB7AA577449FD_gshared (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mC76E0473955C7F8B798BDD14FDEF278BC308FF44_gshared (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3228D76868282EC646EA449150C7EF0A5D050CB7_gshared (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m59E0DFFA62A8BCC0DE1CC2A799CE7F7AB87AE060_gshared (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0B9A87F71EBBB6FB5D5FB11CF319FEB70F21306B_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m46F7137E045ADA406827926194A7262778078D52_gshared (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBF0E0832D0681DDB57363B0CF7997EE8E8D03765_gshared (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFA7EF7519F928271963C814BEB92D438BE73959C_gshared (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeSlice`1<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m17192BFDCF3035DBA1F2A54EBE6DF5715ABBAF0D_gshared (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * __this, NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeSlice`1<U> Unity.Collections.NativeSlice`1<System.Byte>::SliceConvert<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m82A7FE65846420B308D915674B66B7A0EA6F120C_gshared (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_m924E721654B7BDF09AA6E20C6E8D2BC4D4AF9DB7 (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Utilities.IBMException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IBMException__ctor_mD8489CEA53C770890575A669CE06BA970444FC2C (IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* ReflectionUtils_GetAttributes_m8603A7A9F45398BFF4646A2485DBC70EE13160E6 (RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method);
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* Attribute_GetCustomAttributes_m51F1A204FE1FB412E23B00056B127E5EE03041A8 (MemberInfo_t * ___element0, Type_t * ___type1, bool ___inherit2, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
inline void LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, bool ___initialize0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310_gshared)(__this, ___initialize0, method);
}
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5 (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5_gshared)(__this, ___items0, method);
}
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9 (int32_t ___channel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::get_canAccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___ch0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mBB4AC46FB4D51959D47D7BCE3B964F21E5AABDB9 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Linq.JValue::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline (JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_m19E55D73F8CE3723155A0F3EFD18ABDC3E04DA67 (Type_t * ___t0, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926 (RuntimeObject * ___value0, Type_t * ___conversionType1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_m7094E273684C1CE7BC4BE619758ABF5EF0DB96BE (RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mA472889E7DFAACBC4343A18769BACE51FE7506AE (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mA472889E7DFAACBC4343A18769BACE51FE7506AE_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m15AF8B3D5979E51A84620AA0A8CED42273002873 (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m15AF8B3D5979E51A84620AA0A8CED42273002873_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mFD4DC7455BD7C8AB42D2F33CF750E385346E86AB (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mFD4DC7455BD7C8AB42D2F33CF750E385346E86AB_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mA098CB59650D6DED74A70C7782C46C3AED68AE3F (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mA098CB59650D6DED74A70C7782C46C3AED68AE3F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m8C575FF6061B50689447B5394FCC9B8F37BC7C9F (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m8C575FF6061B50689447B5394FCC9B8F37BC7C9F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m0D7A15991FA87BB074F471B4BDB80CAEA2FB6E3E (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0D7A15991FA87BB074F471B4BDB80CAEA2FB6E3E_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB38D8E0BB4B642E12EC36B5A41CFB7AA577449FD (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB38D8E0BB4B642E12EC36B5A41CFB7AA577449FD_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mC76E0473955C7F8B798BDD14FDEF278BC308FF44 (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mC76E0473955C7F8B798BDD14FDEF278BC308FF44_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m3228D76868282EC646EA449150C7EF0A5D050CB7 (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3228D76868282EC646EA449150C7EF0A5D050CB7_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m59E0DFFA62A8BCC0DE1CC2A799CE7F7AB87AE060 (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m59E0DFFA62A8BCC0DE1CC2A799CE7F7AB87AE060_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m0B9A87F71EBBB6FB5D5FB11CF319FEB70F21306B (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0B9A87F71EBBB6FB5D5FB11CF319FEB70F21306B_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77 (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m46F7137E045ADA406827926194A7262778078D52 (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m46F7137E045ADA406827926194A7262778078D52_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mBF0E0832D0681DDB57363B0CF7997EE8E8D03765 (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mBF0E0832D0681DDB57363B0CF7997EE8E8D03765_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFA7EF7519F928271963C814BEB92D438BE73959C (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFA7EF7519F928271963C814BEB92D438BE73959C_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F (void* ___destination0, int32_t ___destinationStride1, void* ___source2, int32_t ___sourceStride3, int32_t ___elementSize4, int32_t ___count5, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeSlice`1<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>)
inline void NativeSlice_1__ctor_m17192BFDCF3035DBA1F2A54EBE6DF5715ABBAF0D (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * __this, NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD *, NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 , const RuntimeMethod*))NativeSlice_1__ctor_m17192BFDCF3035DBA1F2A54EBE6DF5715ABBAF0D_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeSlice`1<U> Unity.Collections.NativeSlice`1<System.Byte>::SliceConvert<System.UInt32>()
inline NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m82A7FE65846420B308D915674B66B7A0EA6F120C (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * __this, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  (*) (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD *, const RuntimeMethod*))NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m82A7FE65846420B308D915674B66B7A0EA6F120C_gshared)(__this, method);
}
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::.ctor(System.Void*,System.IntPtr,Unity.Jobs.JobHandle,Unity.Jobs.LowLevel.Unsafe.ScheduleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48 (JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F * __this, void* ___i_jobData0, intptr_t ___i_reflectionData1, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___i_dependency2, int32_t ___i_scheduleMode3, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility::Schedule(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3 (JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F * ___parameters0, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility::ScheduleParallelFor(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF (JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F * ___parameters0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// T[] IBM.Cloud.SDK.Widgetss.Widget::GetMembersByType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Widget_GetMembersByType_TisRuntimeObject_mFDEF9366D394D0BF84CC54E4603B44346E24EA06_gshared (Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Widget_GetMembersByType_TisRuntimeObject_mFDEF9366D394D0BF84CC54E4603B44346E24EA06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0;
		NullCheck((RuntimeObject *)__this);
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_2 = VirtFuncInvoker1< MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6*, int32_t >::Invoke(61 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, (Type_t *)L_1, (int32_t)((int32_t)1140));
		V_1 = (MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6*)L_2;
		V_2 = (int32_t)0;
		goto IL_0077;
	}

IL_001b:
	{
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MemberInfo_t * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = (FieldInfo_t *)((FieldInfo_t *)IsInst((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_7 = V_3;
		bool L_8 = FieldInfo_op_Equality_m924E721654B7BDF09AA6E20C6E8D2BC4D4AF9DB7((FieldInfo_t *)L_7, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		FieldInfo_t * L_11 = V_3;
		NullCheck((FieldInfo_t *)L_11);
		Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, (FieldInfo_t *)L_11);
		NullCheck((Type_t *)L_10);
		bool L_13 = VirtFuncInvoker1< bool, Type_t * >::Invoke(119 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_10, (Type_t *)L_12);
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		FieldInfo_t * L_14 = V_3;
		NullCheck((FieldInfo_t *)L_14);
		RuntimeObject * L_15 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, (FieldInfo_t *)L_14, (RuntimeObject *)__this);
		V_4 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->rgctx_data, 3))), IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		RuntimeObject * L_16 = V_4;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5 * L_17 = (IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5 *)il2cpp_codegen_object_new(IBMException_t6940F68EDC0A05DFCD8956A2B6EB964EB6EB89D5_il2cpp_TypeInfo_var);
		IBMException__ctor_mD8489CEA53C770890575A669CE06BA970444FC2C(L_17, (String_t*)_stringLiteral568D9C648C5C5FCBF33EDE3C962A1F06CCB7CB1D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, Widget_GetMembersByType_TisRuntimeObject_mFDEF9366D394D0BF84CC54E4603B44346E24EA06_RuntimeMethod_var);
	}

IL_006b:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = V_0;
		RuntimeObject * L_19 = V_4;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, (RuntimeObject *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0073:
	{
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		MemberInfoU5BU5D_t6A57DDAF4E5321D22FB4C021559637EB126BF6B6* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_23 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_23);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_24;
	}
}
// T[] Microsoft.CSharp.RuntimeBinder.BinderHelper::Cons<System.Object>(T,T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* BinderHelper_Cons_TisRuntimeObject_m0219E711F087D0C7B91EBC7C5B77A5A23CEA7714_gshared (RuntimeObject * ___sourceHead0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___sourceTail1, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___sourceTail1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000b;
	}

IL_0006:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___sourceTail1;
		NullCheck(L_1);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_000b:
	{
		if (!G_B3_0)
		{
			goto IL_002a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___sourceTail1;
		NullCheck(L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		RuntimeObject * L_5 = ___sourceHead0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___sourceTail1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_6);
		Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7((RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, (int32_t)1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = V_0;
		return L_8;
	}

IL_002a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_9;
		RuntimeObject * L_11 = ___sourceHead0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		return L_10;
	}
}
// T[] Microsoft.CSharp.RuntimeBinder.BinderHelper::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* BinderHelper_ToArray_TisRuntimeObject_m2E993DFD7462A6DA0666841A3845CBA4F522624F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___source0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_2;
	}

IL_000a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// T[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ReflectionUtils_GetAttributes_TisRuntimeObject_mDC1EA5E91EE6B0C6DBDDB7FEFC3C10967C665CAD_gshared (RuntimeObject * ___attributeProvider0, bool ___inherit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAttributes_TisRuntimeObject_mDC1EA5E91EE6B0C6DBDDB7FEFC3C10967C665CAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___attributeProvider0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		bool L_3 = ___inherit1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_4 = ReflectionUtils_GetAttributes_m8603A7A9F45398BFF4646A2485DBC70EE13160E6((RuntimeObject *)L_0, (Type_t *)L_2, (bool)L_3, /*hidden argument*/NULL);
		V_0 = (AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17*)L_4;
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_5 = V_0;
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_1;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_1;
		return L_7;
	}

IL_001e:
	{
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_8 = V_0;
		RuntimeObject* L_9 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_10;
	}
}
// T[] RuntimeInspectorNamespace.RuntimeInspectorUtils::GetAttributes<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* RuntimeInspectorUtils_GetAttributes_TisRuntimeObject_mA8DAD2449019E251C904D7053864848A5641E84B_gshared (MemberInfo_t * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeInspectorUtils_GetAttributes_TisRuntimeObject_mA8DAD2449019E251C904D7053864848A5641E84B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___variable0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		AttributeU5BU5D_t777BEFAB7857CFA5F0EE6C3EB1F8F7FF61F00A17* L_3 = Attribute_GetCustomAttributes_m51F1A204FE1FB412E23B00056B127E5EE03041A8((MemberInfo_t *)L_0, (Type_t *)L_2, (bool)1, /*hidden argument*/NULL);
		return ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T[] System.Array::Empty<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Dynamic.BindingRestrictions_TestBuilder_AndNode>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* Array_Empty_TisAndNode_tCC48979AF5896DA4A881EE49E182099994188916_m9E80D55E3C3FE96F28C0FCC4B9EE46EF83C9ADE9_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		AndNodeU5BU5D_tCDAE7878A5056262CF069AB9A8C3720BED503611* L_0 = ((EmptyArray_1_t491E776E9DF407C043186AA08D7F688CC85E1C06_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Linq.Expressions.Interpreter.LocalDefinition>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* Array_Empty_TisLocalDefinition_t6EB6DABA8D559626495A9D03AFEE82848A905C2D_m6518BAF23EACF07AC885D856B9EA60AFC802C351_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		LocalDefinitionU5BU5D_tE3170C0A3284313CAB9CA6A3B3F79027464F78F5* L_0 = ((EmptyArray_1_t06931CAD9F4797C75EF9E653BBAEA917192828B7_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Xml.Schema.SequenceNode_SequenceConstructPosContext>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0* Array_Empty_TisSequenceConstructPosContext_t72DF930B1BE2676BD225E8D9622C78EF2B0DFAC1_m976685C6527DADAD1495BE785DC3BC7AE2DEA994_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		SequenceConstructPosContextU5BU5D_t776F59D343D8376446E4707D9A415D1964D1B7F0* L_0 = ((EmptyArray_1_t0BD4E669EA548E6E36CFA473EBF37D27E161F5C5_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E* Array_Empty_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m68195AFCC784022BA743E6B01D3026C15EF13FEE_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		TrackableIdU5BU5D_t43525AC6688EDA53AF5753025C44F8DC1B33EF6E* L_0 = ((EmptyArray_1_tFAC80D47380CF944C985C3DA42C121DB6B215319_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* EnumerableHelpers_ToArray_TisRuntimeObject_m0C9E5CDDF9B4066E9FC751A904CF977FD78A14EB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		RuntimeObject* L_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_0 = (RuntimeObject*)L_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2);
		V_2 = (int32_t)L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (uint32_t)L_6);
		V_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		RuntimeObject* L_8 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_8, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_9, (int32_t)0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = V_3;
		return L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_mDC7E68FE169C2CCB5DBE14CAA070A7DF42FFC310((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m3B90FE2F12A4CA5255764B6559CC1B9CCC77A3B5((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), (RuntimeObject*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = LargeArrayBuilder_1_ToArray_m451F9ABC21D56D34FB76B2DE7E355A9413725B3E((LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(LargeArrayBuilder_1_tC9659C9765BA8524EF7A1E6C55A7571A490F519B *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_12;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::AddFirst<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_AddFirst_TisRuntimeObject_m2797D93EB867E7B53D1D9B1A7FFB8EFB3913A2E5_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		RuntimeObject * L_3 = ___item1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7((RuntimeArray *)(RuntimeArray *)L_4, (RuntimeArray *)(RuntimeArray *)L_5, (int32_t)1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_0;
		return L_6;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::AddLast<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_AddLast_TisRuntimeObject_mCFBB902E31705E7C9A07DEA1D82080198D8D7C87_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		Array_CopyTo_m455300D414FFB0EBFE53EA4E8BBD31532006EBB7((RuntimeArray *)(RuntimeArray *)L_2, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___array0;
		NullCheck(L_5);
		RuntimeObject * L_6 = ___item1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
		return L_7;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveFirst<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveFirst_TisRuntimeObject_m05278467A5F0AA59D6F8E6AC5FCC92EEFE2B5B70_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)1, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return L_5;
	}
}
// T[] System.Dynamic.Utils.CollectionExtensions::RemoveLast<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CollectionExtensions_RemoveLast_TisRuntimeObject_mB0B7A94B3575C8674282F02A28E49DC416FC147A_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1)));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___array0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		NullCheck(L_4);
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_3, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_0;
		return L_5;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)(CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)(CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Runtime.CompilerServices.CallSiteOps::GetCachedRules<System.Object>(System.Runtime.CompilerServices.RuleCache`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CallSiteOps_GetCachedRules_TisRuntimeObject_mABF3A636A667403E0DCE6B9BC966E692F77EE4A9_gshared (RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 * ___cache0, const RuntimeMethod* method)
{
	{
		RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 * L_0 = ___cache0;
		NullCheck((RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuleCache_1_tDD048DE084B8B75C031EEFD4B27EE52502DB9F95 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T[] System.Runtime.CompilerServices.CallSiteOps::GetRules<System.Object>(System.Runtime.CompilerServices.CallSite`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CallSiteOps_GetRules_TisRuntimeObject_m1FF6E26C3CA1B8372171D824CD4115CCC4924D15_gshared (CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A * ___site0, const RuntimeMethod* method)
{
	{
		CallSite_1_tA7C3A47DDEF1FE81B161CA6AAA40FACFE0BF180A * L_0 = ___site0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0->get_Rules_4();
		return L_1;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Boolean>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* XmlListConverter_ToArray_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m600FFEE7C10E2BCA12854812A6BB6DCE593F559D_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m600FFEE7C10E2BCA12854812A6BB6DCE593F559D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * V_1 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_4 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (bool)((*(bool*)((bool*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_21 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_25);
			((  void (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_25, (bool)((*(bool*)((bool*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * L_37 = V_1;
		NullCheck((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_37);
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_38 = ((  BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* (*) (List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* XmlListConverter_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC104EC1276093517C4A440400990549F0EC4A501_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC104EC1276093517C4A440400990549F0EC4A501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C * L_21 = (List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *)L_25);
			((  void (*) (List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *)L_25, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C * L_37 = V_1;
		NullCheck((List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *)L_37);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tEA5A02D780CD7A546BA5EACC7D49B647725B797C *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTime>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* XmlListConverter_ToArray_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7A70B3F4919A8A04503EB3E3DE04819827A7E754_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_m7A70B3F4919A8A04503EB3E3DE04819827A7E754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 * V_1 = NULL;
	DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* L_4 = (DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1*)(DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 * L_21 = (List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *)L_25);
			((  void (*) (List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *)L_25, (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 )((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 * L_37 = V_1;
		NullCheck((List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *)L_37);
		DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* L_38 = ((  DateTimeU5BU5D_tFEA62BD2EDF382C69C4B1F20ED98F3709EA271C1* (*) (List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t619EF2102E49F51FE18A6AF58F18AAC0B1D24874 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* XmlListConverter_ToArray_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m245C5C764ADA22BD15B1CEF3B7E1CE639178571E_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_m245C5C764ADA22BD15B1CEF3B7E1CE639178571E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E * V_1 = NULL;
	DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* L_4 = (DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25*)(DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )((*(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E * L_21 = (List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *)L_25);
			((  void (*) (List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *)L_25, (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 )((*(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E * L_37 = V_1;
		NullCheck((List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *)L_37);
		DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* L_38 = ((  DateTimeOffsetU5BU5D_tBE5BF156BB0B9FFFC5B216B0D02C0D44288FCA25* (*) (List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC14CFBBF5104864B38298398541BDDCBF4107C5E *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* XmlListConverter_ToArray_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mA3A16654EDC8B202DDFE85E9A5E650280F33F9B7_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDecimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_mA3A16654EDC8B202DDFE85E9A5E650280F33F9B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 * V_1 = NULL;
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* L_4 = (DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F*)(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 * L_21 = (List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *)L_25);
			((  void (*) (List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *)L_25, (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 )((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 * L_37 = V_1;
		NullCheck((List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *)L_37);
		DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* L_38 = ((  DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* (*) (List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t211A4FFEF32018DBD02D8B6E45234B65120FB2C7 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* XmlListConverter_ToArray_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE9D821F3A3E87F07E271FD24A48D91E71D6C6450_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mE9D821F3A3E87F07E271FD24A48D91E71D6C6450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * V_1 = NULL;
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_4 = (DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (double)((*(double*)((double*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * L_21 = (List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *)L_25);
			((  void (*) (List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *)L_25, (double)((*(double*)((double*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C * L_37 = V_1;
		NullCheck((List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *)L_37);
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_38 = ((  DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* (*) (List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t04E879C847712A9A4EDFA05DC4B8052C4487814C *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* XmlListConverter_ToArray_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m06317C32C4B8B330DE077C38E7237CB1D06D9723_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m06317C32C4B8B330DE077C38E7237CB1D06D9723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 * V_1 = NULL;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_4 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int16_t)((*(int16_t*)((int16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 * L_21 = (List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *)L_25);
			((  void (*) (List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *)L_25, (int16_t)((*(int16_t*)((int16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 * L_37 = V_1;
		NullCheck((List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *)L_37);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_38 = ((  Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* (*) (List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t62097A596C137382F6178E74015FE4C0139FEAD2 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* XmlListConverter_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m632671B61D12746E4747E6B63BC09181FC6FC368_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m632671B61D12746E4747E6B63BC09181FC6FC368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_21 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_25);
			((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_25, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_37 = V_1;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_37);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_38 = ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* XmlListConverter_ToArray_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m5C56E17BBAD364CE7D1823BB139A5B906461184E_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m5C56E17BBAD364CE7D1823BB139A5B906461184E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 * V_1 = NULL;
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_4 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 * L_21 = (List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *)L_25);
			((  void (*) (List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *)L_25, (int64_t)((*(int64_t*)((int64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 * L_37 = V_1;
		NullCheck((List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *)L_37);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_38 = ((  Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* (*) (List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t68D346084523AB177A279E553FB0D5D4202BAF07 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* XmlListConverter_ToArray_TisRuntimeObject_m67ECFDBC21FF0D75413B1DF852889DB63775E168_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisRuntimeObject_m67ECFDBC21FF0D75413B1DF852889DB63775E168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25);
			((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_25, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_37 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* XmlListConverter_ToArray_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mBC42137FB14AC5442894124B54AC1A4B126D2D4C_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_mBC42137FB14AC5442894124B54AC1A4B126D2D4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C * V_1 = NULL;
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_4 = (SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int8_t)((*(int8_t*)((int8_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C * L_21 = (List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *)L_25);
			((  void (*) (List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *)L_25, (int8_t)((*(int8_t*)((int8_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C * L_37 = V_1;
		NullCheck((List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *)L_37);
		SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* L_38 = ((  SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* (*) (List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC5716A1EA872FDC0AEDAB005C2A605C23DC8BF5C *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* XmlListConverter_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA555F893F59FD63E31250A0CB108D161724013BA_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA555F893F59FD63E31250A0CB108D161724013BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * V_1 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)((*(float*)((float*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_21 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_25);
			((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_25, (float)((*(float*)((float*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_37 = V_1;
		NullCheck((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_37);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_38 = ((  SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* XmlListConverter_ToArray_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m05A64728B6A400227DDDF482F7E0B1F30281E3BB_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m05A64728B6A400227DDDF482F7E0B1F30281E3BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t590F472D274003865E31A7729023BEC683AB9551 * V_1 = NULL;
	TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* L_4 = (TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5*)(TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )((*(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t590F472D274003865E31A7729023BEC683AB9551 * L_21 = (List_1_t590F472D274003865E31A7729023BEC683AB9551 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t590F472D274003865E31A7729023BEC683AB9551 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t590F472D274003865E31A7729023BEC683AB9551 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t590F472D274003865E31A7729023BEC683AB9551 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t590F472D274003865E31A7729023BEC683AB9551 *)L_25);
			((  void (*) (List_1_t590F472D274003865E31A7729023BEC683AB9551 *, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t590F472D274003865E31A7729023BEC683AB9551 *)L_25, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 )((*(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t590F472D274003865E31A7729023BEC683AB9551 * L_37 = V_1;
		NullCheck((List_1_t590F472D274003865E31A7729023BEC683AB9551 *)L_37);
		TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* L_38 = ((  TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* (*) (List_1_t590F472D274003865E31A7729023BEC683AB9551 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t590F472D274003865E31A7729023BEC683AB9551 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* XmlListConverter_ToArray_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m205C1CF96FEABB0EAFBC8AE70952C3A9FB50BFE0_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m205C1CF96FEABB0EAFBC8AE70952C3A9FB50BFE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * V_1 = NULL;
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_4 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * L_21 = (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_25);
			((  void (*) (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_25, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 * L_37 = V_1;
		NullCheck((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_37);
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_38 = ((  UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* (*) (List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC24850134CAAF1886083DE793A4D1AE57578DE69 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* XmlListConverter_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m88B7788C4BB3756EC0A966401F1D13D662A1615A_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m88B7788C4BB3756EC0A966401F1D13D662A1615A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * V_1 = NULL;
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_4 = (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_21 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_25);
			((  void (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_25, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 * L_37 = V_1;
		NullCheck((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_37);
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_38 = ((  UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* (*) (List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC0F072C9EF16A5A411FFACBB696CC7A1E4AD0752 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* XmlListConverter_ToArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m904001409F4BCF396E5E8D0EB777561D72170836_gshared (XmlListConverter_tC0C9B12C2CB4282697C8A738419B3595FB013DC2 * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlListConverter_ToArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m904001409F4BCF396E5E8D0EB777561D72170836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * V_1 = NULL;
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_4 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_7 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject * L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7);
		RuntimeObject * L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * L_21 = (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_21;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck((RuntimeObject*)L_23);
			RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * L_25 = V_1;
			XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E * L_26 = (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			NullCheck((XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26);
			RuntimeObject * L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_tC6BABF8791F0E88864F8707A10F63FBE9EA0D69E *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			NullCheck((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_25);
			((  void (*) (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_25, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck((RuntimeObject*)L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck((RuntimeObject*)L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * L_37 = V_1;
		NullCheck((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_37);
		UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* L_38 = ((  UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* (*) (List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m334E2B648F386B328A8E5A260B686242B9B1A825_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInParent_TisRuntimeObject_m56104E1DFC5F47D3DB51348DD3935EEE53DCB433_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_mD84415C6B32CB15A7EFAB8ECFB745D5325990AF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInParent_TisRuntimeObject_m80BC53BC6926863115F0039372F2CB123D4A44BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_mAB759217A3AD0831ABD9387163126D391459E1B8((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)1, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mA5F18E3462F04632978FDE240F85E28A870C2B2F_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_mB70F49316410928344D97591B36FEF0E8F7A9F21_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Mesh_GetAllocArrayFromChannel_TisColor32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_mBD28E289F6DA9261F8B48C346E498E4CE24131C9_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_8 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m5C40565F81077409CEBD6BB7B2C5ABC02A44F0A8_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_3 = ((  Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* Mesh_GetAllocArrayFromChannel_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m2F05741DD1B1A6FA9D8A822335B3AFF732E51535_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)((Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_8 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m2A198BF0F2DF179DF0C126C5A0BAFA1B75765F4E_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_GetAllocArrayFromChannel_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m6941226C08A606477C40149880CDB6D9D7142485_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_mBDD94A90E9F34CAC60C6B772992E35F66EF2D64D_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_mF943AF434BB9F54DBB3B3DE65F7B816E617A89C9((int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_3 = ((  Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* (*) (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh_InternalVertexChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* Mesh_GetAllocArrayFromChannel_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m3CF4E55B415536795AD1C1C3B620AE9546B674AF_gshared (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* V_0 = NULL;
	{
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_0 = Mesh_get_canAccess_m1E0020EA7961227FBC0D90D851A49BCF7EB1E194((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		bool L_2 = Mesh_HasChannel_mF94FB364044F2A0812AF6DDDC811318159D2D4AD((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m965F3844FBD29C866754948D036A6BC6ECF89334((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)((Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this);
		Mesh_PrintErrorCantAccessChannel_m2E8A25959739B006557A94F7E460E8BE0B3ABB19((Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_8 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0);
		V_0 = (Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66*)L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* L_9 = V_0;
		return L_9;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectsOfType_TisRuntimeObject_m0B70FC55F5C9919F875EDF6AAEE564A194492094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_2 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203((Type_t *)L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_3;
		goto IL_001b;
	}

IL_001b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Resources_ConvertObjects_TisRuntimeObject_m94711E44E9B970084C63588FDEBE3D295D14A0DA_gshared (ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_0 = ___rawObjects0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		goto IL_0041;
	}

IL_000e:
	{
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_1 = ___rawObjects0;
		NullCheck(L_1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2;
		V_2 = (int32_t)0;
		goto IL_0031;
	}

IL_001e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_1;
		int32_t L_4 = V_2;
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_5 = ___rawObjects0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_9 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_10 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_12;
		goto IL_0041;
	}

IL_0041:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = V_0;
		return L_13;
	}
}
// U Newtonsoft.Json.Linq.Extensions::Convert<System.Object,System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m75827D24C8BE1A337003FE602B9D937A3F319EB2_gshared (RuntimeObject * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m75827D24C8BE1A337003FE602B9D937A3F319EB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___token0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___token0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var) };
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject * L_11 = ___token0;
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0057:
	{
		RuntimeObject * L_12 = ___token0;
		V_1 = (JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)IsInst((RuntimeObject*)L_12, JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF_il2cpp_TypeInfo_var));
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_14 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		RuntimeObject * L_15 = ___token0;
		NullCheck((RuntimeObject *)L_15);
		Type_t * L_16 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_17, /*hidden argument*/NULL);
		String_t* L_19 = StringUtils_FormatWith_mBB4AC46FB4D51959D47D7BCE3B964F21E5AABDB9((String_t*)_stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85, (RuntimeObject*)L_14, (RuntimeObject *)L_16, (RuntimeObject *)L_18, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_20 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_20, (String_t*)L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, Extensions_Convert_TisRuntimeObject_TisRuntimeObject_m75827D24C8BE1A337003FE602B9D937A3F319EB2_RuntimeMethod_var);
	}

IL_0090:
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_21 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_21);
		RuntimeObject * L_22 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_21, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_23 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_23);
		RuntimeObject * L_24 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_23, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_25 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_25, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_26;
		Type_t * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C_il2cpp_TypeInfo_var);
		bool L_28 = ReflectionUtils_IsNullableType_m19E55D73F8CE3723155A0F3EFD18ABDC3E04DA67((Type_t *)L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_29 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_29);
		RuntimeObject * L_30 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t * L_32 = V_2;
		Type_t * L_33 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04((Type_t *)L_32, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_33;
	}

IL_00d5:
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_34 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_34);
		RuntimeObject * L_35 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_34, /*hidden argument*/NULL);
		Type_t * L_36 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_37 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_38 = Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926((RuntimeObject *)L_35, (Type_t *)L_36, (RuntimeObject*)L_37, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_38, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// U Newtonsoft.Json.Linq.Extensions::Convert<System.Object,System.Single>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCE080F6E34A3342AE2D90CF420EA68A54AB0F832_gshared (RuntimeObject * ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCE080F6E34A3342AE2D90CF420EA68A54AB0F832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___token0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___token0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (IComparable_tF58875555EC83AB78FA9E958C48803C6AF9FB5D9_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_5, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (IFormattable_t58E0883927AD7B9E881837942BD4FA2E7D8330C0_0_0_0_var) };
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_9, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject * L_11 = ___token0;
		return ((*(float*)((float*)UnBox(L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}

IL_0057:
	{
		RuntimeObject * L_12 = ___token0;
		V_1 = (JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)IsInst((RuntimeObject*)L_12, JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF_il2cpp_TypeInfo_var));
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_13 = V_1;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_14 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		RuntimeObject * L_15 = ___token0;
		NullCheck((RuntimeObject *)L_15);
		Type_t * L_16 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 3)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_17, /*hidden argument*/NULL);
		String_t* L_19 = StringUtils_FormatWith_mBB4AC46FB4D51959D47D7BCE3B964F21E5AABDB9((String_t*)_stringLiteral77A2203B805ABB1DC0E3DDD14745A6A53A4D4E85, (RuntimeObject*)L_14, (RuntimeObject *)L_16, (RuntimeObject *)L_18, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_20 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_20, (String_t*)L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, Extensions_Convert_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mCE080F6E34A3342AE2D90CF420EA68A54AB0F832_RuntimeMethod_var);
	}

IL_0090:
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_21 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_21);
		RuntimeObject * L_22 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_21, /*hidden argument*/NULL);
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_22, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))
		{
			goto IL_00a9;
		}
	}
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_23 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_23);
		RuntimeObject * L_24 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_23, /*hidden argument*/NULL);
		return ((*(float*)((float*)UnBox(L_24, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}

IL_00a9:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_25 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_25, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_26;
		Type_t * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t82A3691233682309E0C44776B06934B52C73126C_il2cpp_TypeInfo_var);
		bool L_28 = ReflectionUtils_IsNullableType_m19E55D73F8CE3723155A0F3EFD18ABDC3E04DA67((Type_t *)L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00d5;
		}
	}
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_29 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_29);
		RuntimeObject * L_30 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_31 = V_0;
		return L_31;
	}

IL_00ce:
	{
		Type_t * L_32 = V_2;
		Type_t * L_33 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04((Type_t *)L_32, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_33;
	}

IL_00d5:
	{
		JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * L_34 = V_1;
		NullCheck((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_34);
		RuntimeObject * L_35 = JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline((JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF *)L_34, /*hidden argument*/NULL);
		Type_t * L_36 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_37 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_38 = Convert_ChangeType_m4F879F3D17C11FA0B648C99C6D3C42DD33F40926((RuntimeObject *)L_35, (Type_t *)L_36, (RuntimeObject*)L_37, /*hidden argument*/NULL);
		return ((*(float*)((float*)UnBox(L_38, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
	}
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_TisRuntimeObject_mB9C93E68EC5280797F7720E7F2E5907955AA54B0_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Value_TisRuntimeObject_TisRuntimeObject_mB9C93E68EC5280797F7720E7F2E5907955AA54B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * G_B2_0 = NULL;
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m7094E273684C1CE7BC4BE619758ABF5EF0DB96BE((RuntimeObject *)L_0, (String_t*)_stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_2 = (JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *)((JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *)IsInst((RuntimeObject*)L_1, JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, (String_t*)_stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Extensions_Value_TisRuntimeObject_TisRuntimeObject_mB9C93E68EC5280797F7720E7F2E5907955AA54B0_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD3599EBAC78179D62624381FBE67A4816345DBA3_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD3599EBAC78179D62624381FBE67A4816345DBA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * G_B2_0 = NULL;
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m7094E273684C1CE7BC4BE619758ABF5EF0DB96BE((RuntimeObject *)L_0, (String_t*)_stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value0;
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_2 = (JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *)((JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *)IsInst((RuntimeObject*)L_1, JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, (String_t*)_stringLiteral775E7C06B57ED98E3A89F4BB71A6CF1B61F3305D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Extensions_Value_TisRuntimeObject_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD3599EBAC78179D62624381FBE67A4816345DBA3_RuntimeMethod_var);
	}

IL_001f:
	{
		float L_4 = ((  float (*) (JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 *)G_B2_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m07CFECD30599F82CEB7EDC366AB5F519A914C123_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.Single>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extensions_Value_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m4E1D69C321A8754C0468E64C32F844753E179E38_gshared (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		float L_1 = ((  float (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m9C7717808AE1EB4C93F9806606326B15A4FD0601_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_3 = V_1;
		V_0 = (NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 )L_3;
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_4 = V_0;
		V_2 = (NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  L_3 = V_1;
		V_0 = (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 )L_3;
		NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  L_4 = V_0;
		V_2 = (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_3 = V_1;
		V_0 = (NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 )L_3;
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_4 = V_0;
		V_2 = (NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector2>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mD088193E5ED52605EF9FB609F75AA9A6C7864122_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_3 = V_1;
		V_0 = (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 )L_3;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_4 = V_0;
		V_2 = (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m46D99BD9EF84B51362F99D0A6C23CC50A4071AFB_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_3 = V_1;
		V_0 = (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 )L_3;
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_4 = V_0;
		V_2 = (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_3 = V_1;
		V_0 = (NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 )L_3;
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_4 = V_0;
		V_2 = (NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int16>>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTriangle_1_tC066AFF8BE365A578C833999A25789386C9B5203_m486E07D819996DC368551B3EC66A0CA959AFAF8F_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  L_3 = V_1;
		V_0 = (NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4 )L_3;
		NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  L_4 = V_0;
		V_2 = (NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_t73445BD4D26C42F6E11E9A4ABBC0DD1730D6D4B4  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int32>>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTriangle_1_tDF14BEC26737F6F4C16E6F51C592312D33E044A1_mBCA79F1318081644836C3E2513FE4949D8AA7E93_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  L_3 = V_1;
		V_0 = (NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757 )L_3;
		NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  L_4 = V_0;
		V_2 = (NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_tE816FF46074200A477CA8215A57827A36EB70757  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m8D7EEF45CE20EB27369597A33879F42E459F2D59_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_3 = V_1;
		V_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_4 = V_0;
		V_2 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF_m2B19E96FBF3F147C17C2E9170583743C440161C5_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  L_3 = V_1;
		V_0 = (NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B )L_3;
		NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  L_4 = V_0;
		V_2 = (NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B )L_4;
		goto IL_002a;
	}

IL_002a:
	{
		NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		NullCheck((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this);
		UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28 * L_1 = Texture_CreateNonReadableException_m66E69BE853119A5A9FE2C27EA788B62BF7CFE34D((Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_GetRawTextureData_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mC380DAB84469B7DCF4ED7E280D1435C4D2C863DD_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_2;
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		intptr_t L_3 = Texture2D_GetWritableImageData_m68888C2D5A3E017101E4C8DE6538D5031034DAFF((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, (int32_t)0, /*hidden argument*/NULL);
		void* L_4 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_3, /*hidden argument*/NULL);
		NullCheck((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this);
		int64_t L_5 = Texture2D_GetRawImageDataSize_m1CA6CE6DF0120CD36211E07896448A4CD2DE7F10((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_7 = ((  NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_4, (int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_5/(int64_t)(((int64_t)((int64_t)L_6)))))))), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 )L_7;
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_8 = V_1;
		V_2 = (NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 )L_8;
		goto IL_003e;
	}

IL_003e:
	{
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_9 = V_2;
		return L_9;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARFoundation.ARFace::GetUndisposable<System.Int32>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ARFace_GetUndisposable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mCA2989E272203F7F41123C986BA5AED8E2430B5B_gshared (ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___disposable0, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = NativeArray_1_get_IsCreated_mA472889E7DFAACBC4343A18769BACE51FE7506AE((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(&___disposable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_1 = V_0;
		return L_1;
	}

IL_0013:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_2 = ___disposable0;
		void* L_3 = ((  void* (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(&___disposable0))->___m_Length_1);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = ((  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((void*)(void*)L_3, (int32_t)L_4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARFoundation.ARFace::GetUndisposable<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ARFace_GetUndisposable_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_m0092B0DACA9BFF30512E53147335F664DCF50EE3_gshared (ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F * __this, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___disposable0, const RuntimeMethod* method)
{
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = NativeArray_1_get_IsCreated_m15AF8B3D5979E51A84620AA0A8CED42273002873((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)(&___disposable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 ));
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_1 = V_0;
		return L_1;
	}

IL_0013:
	{
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_2 = ___disposable0;
		void* L_3 = ((  void* (*) (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)(&___disposable0))->___m_Length_1);
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_5 = ((  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((void*)(void*)L_3, (int32_t)L_4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARFoundation.ARFace::GetUndisposable<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ARFace_GetUndisposable_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mCD4F8D1D4949B8A7E596CB5737D90762F48AF628_gshared (ARFace_t6743D3C0C57B5B559B335F7EB6523211A4EA579F * __this, NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___disposable0, const RuntimeMethod* method)
{
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = NativeArray_1_get_IsCreated_mFD4DC7455BD7C8AB42D2F33CF750E385346E86AB((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)(&___disposable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 ));
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_1 = V_0;
		return L_1;
	}

IL_0013:
	{
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_2 = ___disposable0;
		void* L_3 = ((  void* (*) (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)(&___disposable0))->___m_Length_1);
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_5 = ((  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((void*)(void*)L_3, (int32_t)L_4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.BoundedPlane>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_mC05B9C454158047B9252E030EEA43BECE009234A_gshared (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mA098CB59650D6DED74A70C7782C46C3AED68AE3F((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_3 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_2;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_4 = ___value0;
		((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 , BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_3, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_CreateArrayFilledWithValue_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m0AAA11AFE7DA52FFF843EBC535BE13B96675200E_gshared (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m8C575FF6061B50689447B5394FCC9B8F37BC7C9F((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_3 = (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_2;
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_4 = ___value0;
		((  void (*) (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 , XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_3, (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_m4AE28BC21B99996B4F90B10CFFB00D61C93B81AD_gshared (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m0D7A15991FA87BB074F471B4BDB80CAEA2FB6E3E((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_3 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_2;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_4 = ___value0;
		((  void (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 , XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_3, (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRFace>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  NativeCopyUtility_CreateArrayFilledWithValue_TisXRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7_mD47A1FDB741A7EE40D83F8830790876EF0088448_gshared (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mB38D8E0BB4B642E12EC36B5A41CFB7AA577449FD((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_3 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_2;
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_4 = ___value0;
		((  void (*) (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 , XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_3, (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRHumanBody>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_m0BAEDA4D6CA886655DB8A83216010792555E4EA1_gshared (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mC76E0473955C7F8B798BDD14FDEF278BC308FF44((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_3 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_2;
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_4 = ___value0;
		((  void (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 , XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_3, (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m9D79B6C5C2A46C2418875D2CC879D41923C2254F_gshared (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m3228D76868282EC646EA449150C7EF0A5D050CB7((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_3 = (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_2;
		XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  L_4 = ___value0;
		((  void (*) (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 , XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_3, (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRParticipant>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_m49886971FD395F99F1B7E37A569F3EABA19DEC6D_gshared (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m59E0DFFA62A8BCC0DE1CC2A799CE7F7AB87AE060((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_3 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_2;
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_4 = ___value0;
		((  void (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 , XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_3, (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRPointCloud>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m71CCE0F4FC8382AF5555A1DAE7903428752F4CF9_gshared (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m0B9A87F71EBBB6FB5D5FB11CF319FEB70F21306B((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_3 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_2;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_4 = ___value0;
		((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 , XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_3, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  NativeCopyUtility_CreateArrayFilledWithValue_TisXRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_mCBC832478EA2CEB8547453F843CB996DA95EE52A_gshared (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m9668AE224D479B5FEAF30F1C0B700969E1EBCC77((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_3 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_2;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_4 = ___value0;
		((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_3, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_CreateArrayFilledWithValue_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mFF558C8660B6A5007909C422AB8EB1D7EAC6F224_gshared (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m46F7137E045ADA406827926194A7262778078D52((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_3 = (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_2;
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_4 = ___value0;
		((  void (*) (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 , XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_3, (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m60E1E5B0987B63661BC5FC1853AE086ECDE71772_gshared (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mBF0E0832D0681DDB57363B0CF7997EE8E8D03765((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_3 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_2;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_4 = ___value0;
		((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 , XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_3, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_m17936D7777E3EA496DDD9C64D357B287BBCE5F9E_gshared (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mFA7EF7519F928271963C814BEB92D438BE73959C((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_3 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_2;
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_4 = ___value0;
		((  void (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 , XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_3, (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.BoundedPlane>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  NativeCopyUtility_PtrToNativeArrayWithDefault_TisBoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_m09D8F9DA5BCC8B34AAF455963438281BF681F59B_gshared (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_3 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_4 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6_gshared (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_3 = ((  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  (*) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_4 = (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_m53EF7778410D1C51768EF617C4261E4427EFBB16_gshared (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_3 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_4 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRFace>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7_mE0C3336D021494C58712D2F3136E9624665231ED_gshared (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_3 = ((  NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  (*) (XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRFace_tF2B2E9B06813BA74F5DAFD527FD249DD1002B7C7 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5  L_4 = (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tAA72EF264612AEC585CFAA055B86F6B65CA4E2E5 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRHumanBody>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_mC28FF82A35F3FEBB1226399109A5F61926171BCC_gshared (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_3 = ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_4 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m29F2FF058EDC0DD47DFA460E009797D3DC631DE5_gshared (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_3 = ((  NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  (*) (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_4 = (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRParticipant>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_m98E9B36DD23DDC394E733D67E2FF392AB13206BA_gshared (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_3 = ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_4 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRPointCloud>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_mCBF6C514D929FFF67FC3BF31C399E1197675DD50_gshared (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_3 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_4 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_m3D67718FDB62DBED22F8F23233760593C2E73516_gshared (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_3 = ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_4 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6_gshared (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_3 = ((  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  (*) (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_4 = (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_mD76D0DCD025684ECC9D3073960BA05A508C0CF9A_gshared (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_3 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_4 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_m204333F5337B1E0ECFF13B1AF2F275F5AA01C2D3_gshared (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_3 = ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_4 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		return L_4;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m0FE68160AD7A8DC85CFDDC1052EF11E2409E8FB2_gshared (void* ___dataPointer0, int32_t ___stride1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m0FE68160AD7A8DC85CFDDC1052EF11E2409E8FB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___length2;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral5332787A355F6C7E2C752D24323C8EB3E69C380D, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_5, (String_t*)L_4, (String_t*)_stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m0FE68160AD7A8DC85CFDDC1052EF11E2409E8FB2_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_6 = ___stride1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___stride1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral5D8C4EB43E44C7CAE91B24474164F33B3D962841, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_11, (String_t*)L_10, (String_t*)_stringLiteral0DC89F85B619068818F6FFC8B793A74773A52F83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m0FE68160AD7A8DC85CFDDC1052EF11E2409E8FB2_RuntimeMethod_var);
	}

IL_0045:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD ));
		int32_t L_12 = ___stride1;
		(&V_1)->set_m_Stride_1(L_12);
		void* L_13 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((uint8_t*)L_13);
		int32_t L_14 = ___length2;
		(&V_1)->set_m_Length_2(L_14);
		NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  L_15 = V_1;
		V_0 = (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD )L_15;
		NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  L_16 = V_0;
		V_2 = (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD )L_16;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  L_17 = V_2;
		return L_17;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  NativeSliceExtensions_Slice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mD5B040E470AFAA5D8EE71DED961D904C2BF0D549_gshared (NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  ___thisArray0, const RuntimeMethod* method)
{
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671  L_0 = ___thisArray0;
		NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m17192BFDCF3035DBA1F2A54EBE6DF5715ABBAF0D((&L_1), (NativeArray_1_t1B1B9CB7041AAA270CFBFC08425AD3CF2127A671 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD )L_1;
		goto IL_000d;
	}

IL_000d:
	{
		NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD  L_2 = V_0;
		return L_2;
	}
}
// Unity.Collections.NativeSlice`1<U> Unity.Collections.NativeSlice`1<System.Byte>::SliceConvert<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m82A7FE65846420B308D915674B66B7A0EA6F120C_gshared (NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_0;
		uint8_t* L_1 = (uint8_t*)__this->get_m_Buffer_0();
		(&V_1)->set_m_Buffer_0((uint8_t*)L_1);
		int32_t L_2 = V_0;
		(&V_1)->set_m_Stride_1(L_2);
		int32_t L_3 = (int32_t)__this->get_m_Length_2();
		int32_t L_4 = (int32_t)__this->get_m_Stride_1();
		int32_t L_5 = V_0;
		(&V_1)->set_m_Length_2(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4))/(int32_t)L_5)));
		NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  L_6 = V_1;
		V_2 = (NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6 )L_6;
		goto IL_0039;
	}

IL_0039:
	{
		NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeSlice_1_t96EF4E256A79BA08F1F9F42CD83D8A8D5B4CA7D6  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m82A7FE65846420B308D915674B66B7A0EA6F120C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD * _thisAdjusted = reinterpret_cast<NativeSlice_1_t66667AD5ED1BF50BB52FE20A5340BDB32DA442FD *>(__this + 1);
	return NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m82A7FE65846420B308D915674B66B7A0EA6F120C(_thisAdjusted, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastCollectResultsJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisPointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800_m0286FF888581D28D21A20A00505CFFDF05490673_gshared (PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800 *)(PointCloudRaycastCollectResultsJob_t0898DECFBDC188E531D8165749BA923FAD97F800 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions_DeallocateJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisDeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C_m1C6B1D1315E1E683F652D87D157983FE69A588E5_gshared (DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C *)(DeallocateJob_t5CF23E1E3DFFAC4FD7D519CCB7359342BC3F607C *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisAddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B_m12CD1FBAE67BF46B4440804B77E1F15C406C97AD_gshared (AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B *)(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1<System.Byte>>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisDeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5_m479D1AD4838511A090459AEABE4BA95DF6C53257_gshared (DeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (DeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((DeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5 *)(DeallocateNativeArrayJob_1_t502E1C621973C81F0F82AA183E6AB79A5E0304F5 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B_m605C8197A937A1468D3F3F7FA0C969B2D8A9A04D_gshared (FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B *)(FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARFoundation.ARPointCloudManager_PointCloudRaycastJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisPointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C_m695C1B6C8BD23443099A67D27F217F4374192D6A_gshared (PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C *)(PointCloudRaycastJob_t8187276FD1BF0C2443AC32E527990C1975442A8C *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformIndicesJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81_m90B62FCA88E378A456530DE7DF38A02C343698B4_gshared (TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81 *)(TransformIndicesJob_t0343F44C820BAF8CDDD88CE9973ED6C7E041FD81 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformUVsJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A_mF7D2357E3CC35FDEF89D5B78FB38F0F7C42AAA32_gshared (TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A *)(TransformUVsJob_t6DE90A3353456307A60BDF9A28C6FD37ED0C003A *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_TransformVerticesJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D_mFC90932A44B9FF597E1F24765B1E657F1B9C287F_gshared (TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D *)(TransformVerticesJob_t9465EFCD14CC37F13A15C0055F4B76E027A6319D *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0_mFAF74810B9C313294BB9137BA168E21D5A616576_gshared (ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 *)(ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5_gshared (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *)(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872_mEAD6BFEF803CC2BCEABC18C5234C81724AC47EE4_gshared (TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 *)(TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0025;
	}

IL_0025:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0031:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14);
		int32_t L_15 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0028:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * JValue_get_Value_m0C6CF878BD85A739315416E1DF9977EF5C728644_inline (JValue_t69F069DA12BD51A8FEB36C2EDA5D258B7FE2C4BF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
