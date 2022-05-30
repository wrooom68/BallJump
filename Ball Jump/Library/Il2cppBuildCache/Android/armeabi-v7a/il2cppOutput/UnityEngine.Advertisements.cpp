#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner
struct AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F;
// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60;
// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B;
// UnityEngine.Advertisements.Platform.Android.AndroidPlatform
struct AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1;
// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5;
// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Advertisements.Banner
struct Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58;
// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF;
// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Advertisements.IBanner
struct IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Advertisements.INativeBanner
struct INativeBanner_t51370625A59ECE3196215B6451AD9AD256FDE3B2;
// UnityEngine.Advertisements.INativePlatform
struct INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56;
// UnityEngine.Advertisements.Platform.IPlatform
struct IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tE9C2A544036FA5F498E00D6CBB9F0D796D3768DD;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t6E361A93F6ADA7824837CF593156A857D24840EA;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager
struct IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E;
// UnityEngine.Advertisements.MetaData
struct MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Advertisements.Platform.Platform
struct Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeBanner_t51370625A59ECE3196215B6451AD9AD256FDE3B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsInitializationListener_tE9C2A544036FA5F498E00D6CBB9F0D796D3768DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsLoadListener_t6E361A93F6ADA7824837CF593156A857D24840EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265;
IL2CPP_EXTERN_C String_t* _stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E;
IL2CPP_EXTERN_C String_t* _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79;
IL2CPP_EXTERN_C String_t* _stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
IL2CPP_EXTERN_C String_t* _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192;
IL2CPP_EXTERN_C String_t* _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58;
IL2CPP_EXTERN_C String_t* _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320;
IL2CPP_EXTERN_C String_t* _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714;
IL2CPP_EXTERN_C String_t* _stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC;
IL2CPP_EXTERN_C String_t* _stringLiteralB040439619EE49D63AB73416AB10D1423D032871;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3CHideU3Eb__13_0_mF08F0E243267283EC77A6E2C1C5DBB1371977B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3CHideU3Eb__13_1_mBB2249C3128F3BA4009C030784061C2DF82E3B7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m87450FA1A8D93EF62F30E145E3351591719D97F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_m6AD75F271DD87AB160A59A40D608C41A0C1DD050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m009728258B6EAD0E5E2A539EBD1FC31D20B9C8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997_m2E55B6F631EEEEC3FDD07BC66F4EC7458B23AF18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605_mF0BE44648510EB5915750342B03F40879BA5815C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF_mFDA4015F533DF8C9A4528E548B3F5DEF2A470E69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9_mA8706ED34BCA3DBAFBE25F934DE20CDE0F2326A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E_m9C99C1BF76955971F4BC8427472801E10F40E3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m9997E337788E7CFCAD7A0D0794215DFF67B48F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m3418E544DAB2F27A7EE11B1AFD57786C1693E739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m0EB7CEA88F033FC1DF2301D8E3B529D317710F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_m2999170E20FCFF05D7CA9D17CED727B073067DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_mFEFC573E1F36E3CCC1C14A8D5380E7FB18DFFB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_mE00CDE1E6D9FEC707C93EA5FAEA3A410E5EDE773_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4FE5B16D4EB72E032A7F26C112A7BF8501C41704 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// UnityEngine.Advertisements.Advertisement
struct Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899  : public RuntimeObject
{
public:

public:
};

struct Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_0;

public:
	inline static int32_t get_offset_of_s_Platform_0() { return static_cast<int32_t>(offsetof(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields, ___s_Platform_0)); }
	inline RuntimeObject* get_s_Platform_0() const { return ___s_Platform_0; }
	inline RuntimeObject** get_address_of_s_Platform_0() { return &___s_Platform_0; }
	inline void set_s_Platform_0(RuntimeObject* value)
	{
		___s_Platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidPlatform
struct AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_Platform
	RuntimeObject* ___m_Platform_0;
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_CurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_CurrentActivity_1;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_UnityAds
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_UnityAds_2;

public:
	inline static int32_t get_offset_of_m_Platform_0() { return static_cast<int32_t>(offsetof(AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1, ___m_Platform_0)); }
	inline RuntimeObject* get_m_Platform_0() const { return ___m_Platform_0; }
	inline RuntimeObject** get_address_of_m_Platform_0() { return &___m_Platform_0; }
	inline void set_m_Platform_0(RuntimeObject* value)
	{
		___m_Platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActivity_1() { return static_cast<int32_t>(offsetof(AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1, ___m_CurrentActivity_1)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_CurrentActivity_1() const { return ___m_CurrentActivity_1; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_CurrentActivity_1() { return &___m_CurrentActivity_1; }
	inline void set_m_CurrentActivity_1(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_CurrentActivity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActivity_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnityAds_2() { return static_cast<int32_t>(offsetof(AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1, ___m_UnityAds_2)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_UnityAds_2() const { return ___m_UnityAds_2; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_UnityAds_2() { return &___m_UnityAds_2; }
	inline void set_m_UnityAds_2(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_UnityAds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnityAds_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Advertisements.Banner
struct Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Advertisements.Banner::<ShowAfterLoad>k__BackingField
	bool ___U3CShowAfterLoadU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativeBanner UnityEngine.Advertisements.Banner::m_NativeBanner
	RuntimeObject* ___m_NativeBanner_2;

public:
	inline static int32_t get_offset_of_U3CUnityLifecycleManagerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58, ___U3CUnityLifecycleManagerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUnityLifecycleManagerU3Ek__BackingField_0() const { return ___U3CUnityLifecycleManagerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUnityLifecycleManagerU3Ek__BackingField_0() { return &___U3CUnityLifecycleManagerU3Ek__BackingField_0; }
	inline void set_U3CUnityLifecycleManagerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUnityLifecycleManagerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityLifecycleManagerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShowAfterLoadU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58, ___U3CShowAfterLoadU3Ek__BackingField_1)); }
	inline bool get_U3CShowAfterLoadU3Ek__BackingField_1() const { return ___U3CShowAfterLoadU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CShowAfterLoadU3Ek__BackingField_1() { return &___U3CShowAfterLoadU3Ek__BackingField_1; }
	inline void set_U3CShowAfterLoadU3Ek__BackingField_1(bool value)
	{
		___U3CShowAfterLoadU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeBanner_2() { return static_cast<int32_t>(offsetof(Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58, ___m_NativeBanner_2)); }
	inline RuntimeObject* get_m_NativeBanner_2() const { return ___m_NativeBanner_2; }
	inline RuntimeObject** get_address_of_m_NativeBanner_2() { return &___m_NativeBanner_2; }
	inline void set_m_NativeBanner_2(RuntimeObject* value)
	{
		___m_NativeBanner_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NativeBanner_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerView>k__BackingField
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___U3CbannerViewU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerPlacementId>k__BackingField
	String_t* ___U3CbannerPlacementIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CbannerViewU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF, ___U3CbannerViewU3Ek__BackingField_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_U3CbannerViewU3Ek__BackingField_0() const { return ___U3CbannerViewU3Ek__BackingField_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_U3CbannerViewU3Ek__BackingField_0() { return &___U3CbannerViewU3Ek__BackingField_0; }
	inline void set_U3CbannerViewU3Ek__BackingField_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___U3CbannerViewU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbannerViewU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbannerPlacementIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF, ___U3CbannerPlacementIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CbannerPlacementIdU3Ek__BackingField_1() const { return ___U3CbannerPlacementIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CbannerPlacementIdU3Ek__BackingField_1() { return &___U3CbannerPlacementIdU3Ek__BackingField_1; }
	inline void set_U3CbannerPlacementIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CbannerPlacementIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbannerPlacementIdU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * ___U3CerrorCallbackU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CloadCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F, ___U3CloadCallbackU3Ek__BackingField_0)); }
	inline LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * get_U3CloadCallbackU3Ek__BackingField_0() const { return ___U3CloadCallbackU3Ek__BackingField_0; }
	inline LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 ** get_address_of_U3CloadCallbackU3Ek__BackingField_0() { return &___U3CloadCallbackU3Ek__BackingField_0; }
	inline void set_U3CloadCallbackU3Ek__BackingField_0(LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * value)
	{
		___U3CloadCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CerrorCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F, ___U3CerrorCallbackU3Ek__BackingField_1)); }
	inline ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * get_U3CerrorCallbackU3Ek__BackingField_1() const { return ___U3CerrorCallbackU3Ek__BackingField_1; }
	inline ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 ** get_address_of_U3CerrorCallbackU3Ek__BackingField_1() { return &___U3CerrorCallbackU3Ek__BackingField_1; }
	inline void set_U3CerrorCallbackU3Ek__BackingField_1(ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * value)
	{
		___U3CerrorCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorCallbackU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * ___U3CclickCallbackU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CshowCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF, ___U3CshowCallbackU3Ek__BackingField_0)); }
	inline BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * get_U3CshowCallbackU3Ek__BackingField_0() const { return ___U3CshowCallbackU3Ek__BackingField_0; }
	inline BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 ** get_address_of_U3CshowCallbackU3Ek__BackingField_0() { return &___U3CshowCallbackU3Ek__BackingField_0; }
	inline void set_U3CshowCallbackU3Ek__BackingField_0(BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * value)
	{
		___U3CshowCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshowCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChideCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF, ___U3ChideCallbackU3Ek__BackingField_1)); }
	inline BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * get_U3ChideCallbackU3Ek__BackingField_1() const { return ___U3ChideCallbackU3Ek__BackingField_1; }
	inline BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 ** get_address_of_U3ChideCallbackU3Ek__BackingField_1() { return &___U3ChideCallbackU3Ek__BackingField_1; }
	inline void set_U3ChideCallbackU3Ek__BackingField_1(BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * value)
	{
		___U3ChideCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChideCallbackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclickCallbackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF, ___U3CclickCallbackU3Ek__BackingField_2)); }
	inline BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * get_U3CclickCallbackU3Ek__BackingField_2() const { return ___U3CclickCallbackU3Ek__BackingField_2; }
	inline BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 ** get_address_of_U3CclickCallbackU3Ek__BackingField_2() { return &___U3CclickCallbackU3Ek__BackingField_2; }
	inline void set_U3CclickCallbackU3Ek__BackingField_2(BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * value)
	{
		___U3CclickCallbackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclickCallbackU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.EnumUtilities
struct EnumUtilities_t0C91297CE9359E5B3DD8228782F7C85BF9DB8A38  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.MetaData
struct MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_MetaData_0() { return static_cast<int32_t>(offsetof(MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0, ___m_MetaData_0)); }
	inline RuntimeObject* get_m_MetaData_0() const { return ___m_MetaData_0; }
	inline RuntimeObject** get_address_of_m_MetaData_0() { return &___m_MetaData_0; }
	inline void set_m_MetaData_0(RuntimeObject* value)
	{
		___m_MetaData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MetaData_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0, ___U3CcategoryU3Ek__BackingField_1)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_1() const { return ___U3CcategoryU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_1() { return &___U3CcategoryU3Ek__BackingField_1; }
	inline void set_U3CcategoryU3Ek__BackingField_1(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcategoryU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Platform
struct Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::<Banner>k__BackingField
	RuntimeObject* ___U3CBannerU3Ek__BackingField_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::<NativePlatform>k__BackingField
	RuntimeObject* ___U3CNativePlatformU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Advertisements.Platform.Platform::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBannerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33, ___U3CBannerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CBannerU3Ek__BackingField_0() const { return ___U3CBannerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CBannerU3Ek__BackingField_0() { return &___U3CBannerU3Ek__BackingField_0; }
	inline void set_U3CBannerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CBannerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBannerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnityLifecycleManagerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33, ___U3CUnityLifecycleManagerU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CUnityLifecycleManagerU3Ek__BackingField_1() const { return ___U3CUnityLifecycleManagerU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CUnityLifecycleManagerU3Ek__BackingField_1() { return &___U3CUnityLifecycleManagerU3Ek__BackingField_1; }
	inline void set_U3CUnityLifecycleManagerU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CUnityLifecycleManagerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityLifecycleManagerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNativePlatformU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33, ___U3CNativePlatformU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CNativePlatformU3Ek__BackingField_2() const { return ___U3CNativePlatformU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CNativePlatformU3Ek__BackingField_2() { return &___U3CNativePlatformU3Ek__BackingField_2; }
	inline void set_U3CNativePlatformU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CNativePlatformU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNativePlatformU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsShowingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33, ___U3CIsShowingU3Ek__BackingField_3)); }
	inline bool get_U3CIsShowingU3Ek__BackingField_3() const { return ___U3CIsShowingU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsShowingU3Ek__BackingField_3() { return &___U3CIsShowingU3Ek__BackingField_3; }
	inline void set_U3CIsShowingU3Ek__BackingField_3(bool value)
	{
		___U3CIsShowingU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C  : public RuntimeObject
{
public:
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C, ___U3CgamerSidU3Ek__BackingField_0)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_0() const { return ___U3CgamerSidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_0() { return &___U3CgamerSidU3Ek__BackingField_0; }
	inline void set_U3CgamerSidU3Ek__BackingField_0(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgamerSidU3Ek__BackingField_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.Advertisements.Utilities.CoroutineExecutor UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_CoroutineExecutor
	CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * ___m_CoroutineExecutor_1;
	// UnityEngine.Advertisements.Utilities.ApplicationQuit UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_ApplicationQuit
	ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * ___m_ApplicationQuit_2;
	// System.Boolean UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_Disposed
	bool ___m_Disposed_3;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CoroutineExecutor_1() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632, ___m_CoroutineExecutor_1)); }
	inline CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * get_m_CoroutineExecutor_1() const { return ___m_CoroutineExecutor_1; }
	inline CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 ** get_address_of_m_CoroutineExecutor_1() { return &___m_CoroutineExecutor_1; }
	inline void set_m_CoroutineExecutor_1(CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * value)
	{
		___m_CoroutineExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineExecutor_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ApplicationQuit_2() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632, ___m_ApplicationQuit_2)); }
	inline ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * get_m_ApplicationQuit_2() const { return ___m_ApplicationQuit_2; }
	inline ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E ** get_address_of_m_ApplicationQuit_2() { return &___m_ApplicationQuit_2; }
	inline void set_m_ApplicationQuit_2(ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * value)
	{
		___m_ApplicationQuit_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplicationQuit_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_3() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632, ___m_Disposed_3)); }
	inline bool get_m_Disposed_3() const { return ___m_Disposed_3; }
	inline bool* get_address_of_m_Disposed_3() { return &___m_Disposed_3; }
	inline void set_m_Disposed_3(bool value)
	{
		___m_Disposed_3 = value;
	}
};


// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::loadOptions
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * ___loadOptions_0;

public:
	inline static int32_t get_offset_of_loadOptions_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352, ___loadOptions_0)); }
	inline BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * get_loadOptions_0() const { return ___loadOptions_0; }
	inline BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F ** get_address_of_loadOptions_0() { return &___loadOptions_0; }
	inline void set_loadOptions_0(BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * value)
	{
		___loadOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadOptions_0), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Android.AndroidBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<>4__this
	AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * ___U3CU3E4__this_0;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::showOptions
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * ___showOptions_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428, ___U3CU3E4__this_0)); }
	inline AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_showOptions_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428, ___showOptions_1)); }
	inline BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * get_showOptions_1() const { return ___showOptions_1; }
	inline BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF ** get_address_of_showOptions_1() { return &___showOptions_1; }
	inline void set_showOptions_1(BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * value)
	{
		___showOptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showOptions_1), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Platform.Android.AndroidBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::<>4__this
	AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::message
	String_t* ___message_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0, ___U3CU3E4__this_0)); }
	inline AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.Advertisements.BannerPosition
struct BannerPosition_t4815C9BF49E5075098A563144BFB711F56E9AE20 
{
public:
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerPosition_t4815C9BF49E5075098A563144BFB711F56E9AE20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.ScaleMode
struct ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsInitializationError
struct UnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsInitializationError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsLoadError
struct UnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsLoadError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsShowCompletionState
struct UnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowCompletionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.UnityAdsShowError
struct UnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9 
{
public:
	// System.Int32 UnityEngine.Advertisements.UnityAdsShowError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Advertisements.Platform.Android.AndroidBanner
struct AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_Banner
	RuntimeObject* ___m_Banner_4;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannersClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___m_BannersClass_5;
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_CurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___m_CurrentActivity_6;
	// UnityEngine.Advertisements.Platform.Android.BannerBundle UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerBundle
	BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * ___m_BannerBundle_7;
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerLoadOptions
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * ___m_BannerLoadOptions_8;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerShowOptions
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * ___m_BannerShowOptions_9;
	// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_ListenerIsSet
	bool ___m_ListenerIsSet_10;

public:
	inline static int32_t get_offset_of_m_Banner_4() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_Banner_4)); }
	inline RuntimeObject* get_m_Banner_4() const { return ___m_Banner_4; }
	inline RuntimeObject** get_address_of_m_Banner_4() { return &___m_Banner_4; }
	inline void set_m_Banner_4(RuntimeObject* value)
	{
		___m_Banner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Banner_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannersClass_5() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_BannersClass_5)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_m_BannersClass_5() const { return ___m_BannersClass_5; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_m_BannersClass_5() { return &___m_BannersClass_5; }
	inline void set_m_BannersClass_5(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___m_BannersClass_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannersClass_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActivity_6() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_CurrentActivity_6)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_m_CurrentActivity_6() const { return ___m_CurrentActivity_6; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_m_CurrentActivity_6() { return &___m_CurrentActivity_6; }
	inline void set_m_CurrentActivity_6(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___m_CurrentActivity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActivity_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannerBundle_7() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_BannerBundle_7)); }
	inline BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * get_m_BannerBundle_7() const { return ___m_BannerBundle_7; }
	inline BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF ** get_address_of_m_BannerBundle_7() { return &___m_BannerBundle_7; }
	inline void set_m_BannerBundle_7(BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * value)
	{
		___m_BannerBundle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannerBundle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannerLoadOptions_8() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_BannerLoadOptions_8)); }
	inline BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * get_m_BannerLoadOptions_8() const { return ___m_BannerLoadOptions_8; }
	inline BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F ** get_address_of_m_BannerLoadOptions_8() { return &___m_BannerLoadOptions_8; }
	inline void set_m_BannerLoadOptions_8(BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * value)
	{
		___m_BannerLoadOptions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannerLoadOptions_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_BannerShowOptions_9() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_BannerShowOptions_9)); }
	inline BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * get_m_BannerShowOptions_9() const { return ___m_BannerShowOptions_9; }
	inline BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF ** get_address_of_m_BannerShowOptions_9() { return &___m_BannerShowOptions_9; }
	inline void set_m_BannerShowOptions_9(BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * value)
	{
		___m_BannerShowOptions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BannerShowOptions_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListenerIsSet_10() { return static_cast<int32_t>(offsetof(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F, ___m_ListenerIsSet_10)); }
	inline bool get_m_ListenerIsSet_10() const { return ___m_ListenerIsSet_10; }
	inline bool* get_address_of_m_ListenerIsSet_10() { return &___m_ListenerIsSet_10; }
	inline void set_m_ListenerIsSet_10(bool value)
	{
		___m_ListenerIsSet_10 = value;
	}
};


// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidInitializationListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.AndroidInitializationListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;

public:
	inline static int32_t get_offset_of_m_Platform_5() { return static_cast<int32_t>(offsetof(AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED, ___m_Platform_5)); }
	inline RuntimeObject* get_m_Platform_5() const { return ___m_Platform_5; }
	inline RuntimeObject** get_address_of_m_Platform_5() { return &___m_Platform_5; }
	inline void set_m_Platform_5(RuntimeObject* value)
	{
		___m_Platform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManagedListener_6() { return static_cast<int32_t>(offsetof(AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED, ___m_ManagedListener_6)); }
	inline RuntimeObject* get_m_ManagedListener_6() const { return ___m_ManagedListener_6; }
	inline RuntimeObject** get_address_of_m_ManagedListener_6() { return &___m_ManagedListener_6; }
	inline void set_m_ManagedListener_6(RuntimeObject* value)
	{
		___m_ManagedListener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedListener_6), (void*)value);
	}
};


// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidLoadListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.AndroidLoadListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;

public:
	inline static int32_t get_offset_of_m_Platform_5() { return static_cast<int32_t>(offsetof(AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B, ___m_Platform_5)); }
	inline RuntimeObject* get_m_Platform_5() const { return ___m_Platform_5; }
	inline RuntimeObject** get_address_of_m_Platform_5() { return &___m_Platform_5; }
	inline void set_m_Platform_5(RuntimeObject* value)
	{
		___m_Platform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManagedListener_6() { return static_cast<int32_t>(offsetof(AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B, ___m_ManagedListener_6)); }
	inline RuntimeObject* get_m_ManagedListener_6() const { return ___m_ManagedListener_6; }
	inline RuntimeObject** get_address_of_m_ManagedListener_6() { return &___m_ManagedListener_6; }
	inline void set_m_ManagedListener_6(RuntimeObject* value)
	{
		___m_ManagedListener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedListener_6), (void*)value);
	}
};


// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidShowListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.AndroidShowListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;

public:
	inline static int32_t get_offset_of_m_Platform_5() { return static_cast<int32_t>(offsetof(AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5, ___m_Platform_5)); }
	inline RuntimeObject* get_m_Platform_5() const { return ___m_Platform_5; }
	inline RuntimeObject** get_address_of_m_Platform_5() { return &___m_Platform_5; }
	inline void set_m_Platform_5(RuntimeObject* value)
	{
		___m_Platform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Platform_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManagedListener_6() { return static_cast<int32_t>(offsetof(AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5, ___m_ManagedListener_6)); }
	inline RuntimeObject* get_m_ManagedListener_6() const { return ___m_ManagedListener_6; }
	inline RuntimeObject** get_address_of_m_ManagedListener_6() { return &___m_ManagedListener_6; }
	inline void set_m_ManagedListener_6(RuntimeObject* value)
	{
		___m_ManagedListener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManagedListener_6), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.MemberAccessException
struct MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2  : public MulticastDelegate_t
{
public:

public:
};


// System.MissingMemberException
struct MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639  : public MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_18), (void*)value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___Signature_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Signature_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuitEventHandler
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___OnApplicationQuitEventHandler_4;

public:
	inline static int32_t get_offset_of_OnApplicationQuitEventHandler_4() { return static_cast<int32_t>(offsetof(ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E, ___OnApplicationQuitEventHandler_4)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_OnApplicationQuitEventHandler_4() const { return ___OnApplicationQuitEventHandler_4; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_OnApplicationQuitEventHandler_4() { return &___OnApplicationQuitEventHandler_4; }
	inline void set_OnApplicationQuitEventHandler_4(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___OnApplicationQuitEventHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnApplicationQuitEventHandler_4), (void*)value);
	}
};


// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::aTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___aTexture_4;
	// UnityEngine.Advertisements.BannerPosition UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerPosition
	int32_t ___BannerPosition_5;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerOptions
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * ___BannerOptions_6;
	// System.Boolean UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::IsShowing
	bool ___IsShowing_7;

public:
	inline static int32_t get_offset_of_aTexture_4() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A, ___aTexture_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_aTexture_4() const { return ___aTexture_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_aTexture_4() { return &___aTexture_4; }
	inline void set_aTexture_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___aTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_BannerPosition_5() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A, ___BannerPosition_5)); }
	inline int32_t get_BannerPosition_5() const { return ___BannerPosition_5; }
	inline int32_t* get_address_of_BannerPosition_5() { return &___BannerPosition_5; }
	inline void set_BannerPosition_5(int32_t value)
	{
		___BannerPosition_5 = value;
	}

	inline static int32_t get_offset_of_BannerOptions_6() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A, ___BannerOptions_6)); }
	inline BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * get_BannerOptions_6() const { return ___BannerOptions_6; }
	inline BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF ** get_address_of_BannerOptions_6() { return &___BannerOptions_6; }
	inline void set_BannerOptions_6(BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * value)
	{
		___BannerOptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BannerOptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsShowing_7() { return static_cast<int32_t>(offsetof(BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A, ___IsShowing_7)); }
	inline bool get_IsShowing_7() const { return ___IsShowing_7; }
	inline bool* get_address_of_IsShowing_7() { return &___IsShowing_7; }
	inline void set_IsShowing_7(bool value)
	{
		___IsShowing_7 = value;
	}
};


// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.Advertisements.Utilities.CoroutineExecutor::referenceCount
	int32_t ___referenceCount_4;
	// System.Collections.Generic.Queue`1<System.Action> UnityEngine.Advertisements.Utilities.CoroutineExecutor::queue
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___queue_5;

public:
	inline static int32_t get_offset_of_referenceCount_4() { return static_cast<int32_t>(offsetof(CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74, ___referenceCount_4)); }
	inline int32_t get_referenceCount_4() const { return ___referenceCount_4; }
	inline int32_t* get_address_of_referenceCount_4() { return &___referenceCount_4; }
	inline void set_referenceCount_4(int32_t value)
	{
		___referenceCount_4 = value;
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74, ___queue_5)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_queue_5() const { return ___queue_5; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}
};


// System.MissingMethodException
struct MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41  : public MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<System.Int32Enum>(UnityEngine.AndroidJavaObject,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2D459E48A439CE1B99EDB16C45F310630989D8B7_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mD04C64455286F9E0B79C7428D7326AB9DF676AEA (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_testMode_mB7505FA841B82FB37A830EB43FE95DAB6FE38824 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m0BABB5388A4E148A5DB2EBCA92CC02EE424443FE (String_t* ___placementId0, ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m5BFDAE69BB9A996A04A15A0C08F546CA4D37F32C (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner__ctor_m04ACB721234EC63DA2BA8C7FA4DE8A6EA0130C11 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform__ctor_m1C26C696AF21246BCF765FEF2E7AF3B0E1E1C1BA (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m7AF881996161843A52C5FF89F772886CDD38D789 (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m2938E0EC72C2D989903D060A27B3FC00B16BE57F (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mC71AA568F8EAB5D191EC3A2C59D3605140AD057D (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_mD5EE53FAF1CB6E7294BB85CB45D87014C0FED9AE (UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetCurrentAndroidActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPlatform_GetCurrentAndroidActivity_m93FD3ADE5C80C3087F9EE8A5C88DD9B3F79F0161 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mFF7CFDAB42DCE5EF2EB5EDC8DEB80481B142562E (U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_m5AEB53BBE4DD06ACBF572E8BFD6EE9D44F685C94_inline (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Hide_m024E5B52D0C55EEE4923A5518D01B075ABEDC278 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, bool ___destroy0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m824035BE9E9871AB6F8A06CF25563F9F09607D32 (U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727 (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Load_m1370154844FEF1502207151E2EE666D40EF5879E (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * ___loadOptions1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_hideCallback_m40FB3392549EFEB22D9740F8F1768ACAF77ED418_inline (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_m2AADDE2603F229D6D96072A6F3E860C01D56AFE1 (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, String_t* ___bannerPlacementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___bannerView1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m2C1822EB0520EAF1FA18A815FB26D77E42241C62 (U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * __this, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3 (BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_showCallback_m0BB9E0ADC76B27A0D9C9C6588BC691A893ACBDB7_inline (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * BannerLoadOptions_get_loadCallback_m743831D57DD7599102502E38CC01EB93716F1416_inline (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_m9F56F36E89E547A5DD2A8D4CEFBBAE938ED9DA8C (LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * __this, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_clickCallback_mD231FBBB7E4F404316A4F34D09ED7D0785DBE1F9_inline (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsInitializationError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997_m2E55B6F631EEEEC3FDD07BC66F4EC7458B23AF18 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2D459E48A439CE1B99EDB16C45F310630989D8B7_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsLoadError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605_mF0BE44648510EB5915750342B03F40879BA5815C (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2D459E48A439CE1B99EDB16C45F310630989D8B7_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_m0077AF633F35F335366D1AC696CF5E713D4AF00F (AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED * __this, RuntimeObject* ___platform0, RuntimeObject* ___initializationListener1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_m184B23A8BC956E338BD3D5338DA7D52F26813D4D (AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B * __this, RuntimeObject* ___platform0, RuntimeObject* ___loadListener1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_mEC1FC636E21CD28D8F84F2E59314191F244B91DB (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * __this, RuntimeObject* ___platform0, RuntimeObject* ___showListener1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mEB53968537A586DF1FF7D2DE6D770A8E78BDD85B_inline (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_m781ECE9DD222C1F5EC360D7C94B392944729F58C_inline (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9_mA8706ED34BCA3DBAFBE25F934DE20CDE0F2326A2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2D459E48A439CE1B99EDB16C45F310630989D8B7_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowCompletionState>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF_mFDA4015F533DF8C9A4528E548B3F5DEF2A470E69 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2D459E48A439CE1B99EDB16C45F310630989D8B7_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_mED690F93E74B7B6F2A537A2586424A63AAA2DA56 (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_mE3A30D68A748F7E9EC88191842B91E5843CBDC5F (int32_t ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_mE16CD7E5B6A4845EFDCEFF28C09732DDA4468D54_inline (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m42EDC63D0A8593DD79BEA3AF4A24A8A145355789 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_m0586C59E5F11EFB13AE9F525FA863EC0512ACE23 (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_mC63D3DB5BC9608AACA84CE458156E166D961A543 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * ___metaData0, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mBCA74772946B82B0E5193275DFF7693492639C98 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_mE933CF1C25AEFFDDFBAB35A9907B82090A61D007_inline (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m1B05282348387EE3157B9FD1E3E7F5C8503B09D3_inline (ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m0AAE6CFB743D434BEC0AF71BB5902C1F8678D840_inline (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_mCEF412727C4ED6B6CCF90826FCC8086B80390BCF (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * GameObject_GetComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m3418E544DAB2F27A7EE11B1AFD57786C1693E739 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * GameObject_AddComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m9997E337788E7CFCAD7A0D0794215DFF67B48F0C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.ApplicationQuit>()
inline ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * GameObject_AddComponent_TisApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E_m9C99C1BF76955971F4BC8427472801E10F40E3F3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(!0)
inline void Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * BannerLoadOptions_get_errorCallback_m0BD5ADA00F80C3B01988E58D7E802DCD90B3DBCE_inline (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_mF990A64D9626028098774D6F001312B63BA5392F (ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * __this, String_t* ___message0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement__cctor_m0B1F98BAF0DED0606085E90DA09F99FCB7EA29D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Platform == null)
		RuntimeObject* L_0 = ((Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var))->get_s_Platform_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// s_Platform = CreatePlatform();
		RuntimeObject* L_1;
		L_1 = Advertisement_CreatePlatform_mD04C64455286F9E0B79C7428D7326AB9DF676AEA(/*hidden argument*/NULL);
		((Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var))->set_s_Platform_0(L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m729BF147784772011580FCCB93BD5F5EB96E6169 (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (testMode == false && UnityAdsSettings.testMode)
		bool L_0 = ___testMode1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = UnityAdsSettings_get_testMode_mB7505FA841B82FB37A830EB43FE95DAB6FE38824(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.Log("Unity Ads is initializing in test mode since test mode is enabled in Service Window.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// s_Platform.Initialize(gameId, UnityAdsSettings.testMode || testMode, initializationListener);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_3 = ___gameId0;
		bool L_4;
		L_4 = UnityAdsSettings_get_testMode_mB7505FA841B82FB37A830EB43FE95DAB6FE38824(/*hidden argument*/NULL);
		bool L_5 = ___testMode1;
		RuntimeObject* L_6 = ___initializationListener2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_2, L_3, (bool)((int32_t)((int32_t)L_4|(int32_t)L_5)), L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m10BF3AA33327599CCE8C3F7BF9DF34CCFD687716 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Load(placementId, loadListener);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_1 = ___placementId0;
		RuntimeObject* L_2 = ___loadListener1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m6BC578263958CC8F912DC9553AD3340A18E41CFB (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(placementId, null, showListener);
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___showListener1;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		Advertisement_Show_m0BABB5388A4E148A5DB2EBCA92CC02EE424443FE(L_0, (ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C *)NULL, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m0BABB5388A4E148A5DB2EBCA92CC02EE424443FE (String_t* ___placementId0, ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Show(placementId, showOptions, showListener);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tD8780EF7E0FDB58662EBDFC2B5B9D9377FA8D899_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_1 = ___placementId0;
		ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * L_2 = ___showOptions1;
		RuntimeObject* L_3 = ___showListener2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C *, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mD04C64455286F9E0B79C7428D7326AB9DF676AEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * V_4 = NULL;
	UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * V_5 = NULL;
	Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// IUnityLifecycleManager unityLifecycleManager = new UnityLifecycleManager();
		UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * L_0 = (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 *)il2cpp_codegen_object_new(UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632_il2cpp_TypeInfo_var);
		UnityLifecycleManager__ctor_m5BFDAE69BB9A996A04A15A0C08F546CA4D37F32C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// nativeBanner = new Platform.Android.AndroidBanner();
		AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * L_1 = (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F *)il2cpp_codegen_object_new(AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F_il2cpp_TypeInfo_var);
		AndroidBanner__ctor_m04ACB721234EC63DA2BA8C7FA4DE8A6EA0130C11(L_1, /*hidden argument*/NULL);
		// nativePlatform = new Platform.Android.AndroidPlatform();;
		AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * L_2 = (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 *)il2cpp_codegen_object_new(AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1_il2cpp_TypeInfo_var);
		AndroidPlatform__ctor_m1C26C696AF21246BCF765FEF2E7AF3B0E1E1C1BA(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// IBanner banner = new Advertisements.Banner(nativeBanner, unityLifecycleManager);
		RuntimeObject* L_3 = V_0;
		Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * L_4 = (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 *)il2cpp_codegen_object_new(Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58_il2cpp_TypeInfo_var);
		Banner__ctor_m7AF881996161843A52C5FF89F772886CDD38D789(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// return new Platform.Platform(nativePlatform, banner, unityLifecycleManager);
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = V_2;
		RuntimeObject* L_7 = V_0;
		Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * L_8 = (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 *)il2cpp_codegen_object_new(Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33_il2cpp_TypeInfo_var);
		Platform__ctor_m2938E0EC72C2D989903D060A27B3FC00B16BE57F(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		goto IL_0066;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			// Debug.LogError("Initializing Unity Ads.");
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB)), /*hidden argument*/NULL);
			// Debug.LogError(exception.Message);
			Exception_t * L_9 = V_4;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_10, /*hidden argument*/NULL);
			// }
			goto IL_0040;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003d;
			}
			throw e;
		}

CATCH_003d:
		{ // begin catch(System.MissingMethodException)
			// catch (MissingMethodException)
			// {}
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0040;
		} // end catch (depth: 2)

IL_0040:
		{
			// var unsupportedPlatform = new Platform.Unsupported.UnsupportedPlatform();
			UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * L_11 = (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA_il2cpp_TypeInfo_var)));
			UnsupportedPlatform__ctor_mC71AA568F8EAB5D191EC3A2C59D3605140AD057D(L_11, /*hidden argument*/NULL);
			// var coroutineExecutor = new UnityLifecycleManager();
			UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * L_12 = (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632_il2cpp_TypeInfo_var)));
			UnityLifecycleManager__ctor_m5BFDAE69BB9A996A04A15A0C08F546CA4D37F32C(L_12, /*hidden argument*/NULL);
			V_5 = L_12;
			// var unsupportedBanner = new Platform.Unsupported.UnsupportedBanner();
			UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2 * L_13 = (UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2_il2cpp_TypeInfo_var)));
			UnsupportedBanner__ctor_mD5EE53FAF1CB6E7294BB85CB45D87014C0FED9AE(L_13, /*hidden argument*/NULL);
			// var genericBanner = new Advertisements.Banner(unsupportedBanner, coroutineExecutor);
			UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * L_14 = V_5;
			Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * L_15 = (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58_il2cpp_TypeInfo_var)));
			Banner__ctor_m7AF881996161843A52C5FF89F772886CDD38D789(L_15, L_13, L_14, /*hidden argument*/NULL);
			V_6 = L_15;
			// return new Platform.Platform(unsupportedPlatform, genericBanner, coroutineExecutor);
			Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * L_16 = V_6;
			UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * L_17 = V_5;
			Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * L_18 = (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33_il2cpp_TypeInfo_var)));
			Platform__ctor_m2938E0EC72C2D989903D060A27B3FC00B16BE57F(L_18, L_11, L_16, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0066;
		}
	} // end catch (depth: 1)

IL_0066:
	{
		// }
		RuntimeObject* L_19 = V_3;
		return L_19;
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
// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidBanner::get_IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBanner_get_IsLoaded_m061A117FF60D356269F57F3B9CC44DEAD93F13F0 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	{
		// public bool IsLoaded => m_BannerBundle != null;
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_0 = __this->get_m_BannerBundle_7();
		return (bool)((!(((RuntimeObject*)(BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner__ctor_m04ACB721234EC63DA2BA8C7FA4DE8A6EA0130C11 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidBanner() : base("com.unity3d.services.banners.IUnityBannerListener") {}
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC, /*hidden argument*/NULL);
		// public AndroidBanner() : base("com.unity3d.services.banners.IUnityBannerListener") {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_SetupBanner_mEBFD619BE259A1E91994F4F00CC4A072666BFC4A (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, RuntimeObject* ___banner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Banner = banner;
		RuntimeObject* L_0 = ___banner0;
		__this->set_m_Banner_4(L_0);
		// m_BannersClass = new AndroidJavaClass("com.unity3d.services.banners.UnityBanners");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96, /*hidden argument*/NULL);
		__this->set_m_BannersClass_5(L_1);
		// m_CurrentActivity = AndroidPlatform.GetCurrentAndroidActivity();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = AndroidPlatform_GetCurrentAndroidActivity_m93FD3ADE5C80C3087F9EE8A5C88DD9B3F79F0161(/*hidden argument*/NULL);
		__this->set_m_CurrentActivity_6(L_2);
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Load_m1370154844FEF1502207151E2EE666D40EF5879E (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * ___loadOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m0EB7CEA88F033FC1DF2301D8E3B529D317710F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * L_0 = (U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_mFF7CFDAB42DCE5EF2EB5EDC8DEB80481B142562E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * L_1 = V_0;
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_2 = ___loadOptions1;
		NullCheck(L_1);
		L_1->set_loadOptions_0(L_2);
		// if (!m_ListenerIsSet) {
		bool L_3 = __this->get_m_ListenerIsSet_10();
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// m_ListenerIsSet = true;
		__this->set_m_ListenerIsSet_10((bool)1);
		// m_BannersClass.CallStatic("setBannerListener", this);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, __this);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_4, _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// m_BannerLoadOptions = loadOptions;
		U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * L_7 = V_0;
		NullCheck(L_7);
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_8 = L_7->get_loadOptions_0();
		__this->set_m_BannerLoadOptions_8(L_8);
		// if (m_BannerBundle != null && m_BannerBundle.bannerPlacementId.Equals(placementId))
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_9 = __this->get_m_BannerBundle_7();
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_10 = __this->get_m_BannerBundle_7();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = BannerBundle_get_bannerPlacementId_m5AEB53BBE4DD06ACBF572E8BFD6EE9D44F685C94_inline(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___placementId0;
		NullCheck(L_11);
		bool L_13;
		L_13 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     loadOptions?.loadCallback();
		// });
		RuntimeObject* L_14 = __this->get_m_Banner_4();
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_14);
		U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * L_16 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m0EB7CEA88F033FC1DF2301D8E3B529D317710F18_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_15, L_17);
		// }
		return;
	}

IL_007a:
	{
		// if (m_BannerBundle != null)
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_18 = __this->get_m_BannerBundle_7();
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		// Hide(true);
		AndroidBanner_Hide_m024E5B52D0C55EEE4923A5518D01B075ABEDC278(__this, (bool)1, /*hidden argument*/NULL);
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF *)NULL);
	}

IL_0090:
	{
		// if (placementId != null)
		String_t* L_19 = ___placementId0;
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// m_BannersClass.CallStatic("loadBanner", m_CurrentActivity, placementId);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_20 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_23 = __this->get_m_CurrentActivity_6();
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_22;
		String_t* L_25 = ___placementId0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		NullCheck(L_20);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_20, _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A, L_24, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b7:
	{
		// m_BannersClass.CallStatic("loadBanner", m_CurrentActivity);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_26 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_29 = __this->get_m_CurrentActivity_6();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		NullCheck(L_26);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_26, _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Show_mBD0E0AB963FB80DB7AE938D69A59BE8A14DD0A98 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * ___showOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_m2999170E20FCFF05D7CA9D17CED727B073067DB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_mFEFC573E1F36E3CCC1C14A8D5380E7FB18DFFB00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * L_0 = (U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass12_0__ctor_m824035BE9E9871AB6F8A06CF25563F9F09607D32(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * L_2 = V_0;
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_3 = ___showOptions1;
		NullCheck(L_2);
		L_2->set_showOptions_1(L_3);
		// m_BannerShowOptions = showOptions;
		U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * L_4 = V_0;
		NullCheck(L_4);
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_5 = L_4->get_showOptions_1();
		__this->set_m_BannerShowOptions_9(L_5);
		// if (m_BannerBundle != null && (string.IsNullOrEmpty(placementId) || m_BannerBundle.bannerPlacementId.Equals(placementId)))
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_6 = __this->get_m_BannerBundle_7();
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_7 = ___placementId0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_9 = __this->get_m_BannerBundle_7();
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BannerBundle_get_bannerPlacementId_m5AEB53BBE4DD06ACBF572E8BFD6EE9D44F685C94_inline(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___placementId0;
		NullCheck(L_10);
		bool L_12;
		L_12 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}

IL_0043:
	{
		// m_CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		//     if (parent == null)
		//     {
		//         var layoutParams = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getLayoutParams");
		//         m_CurrentActivity.Call("addContentView", m_BannerBundle.bannerView, layoutParams);
		//     }
		// }));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = __this->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * L_16 = V_0;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_17 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_m2999170E20FCFF05D7CA9D17CED727B073067DB4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		NullCheck(L_13);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_13, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_15, /*hidden argument*/NULL);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     showOptions?.showCallback();
		// });
		RuntimeObject* L_18 = __this->get_m_Banner_4();
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_18);
		U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * L_20 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_21 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_21, L_20, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_mFEFC573E1F36E3CCC1C14A8D5380E7FB18DFFB00_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_19, L_21);
		// }
		return;
	}

IL_0085:
	{
		// if (m_BannerBundle != null)
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_22 = __this->get_m_BannerBundle_7();
		if (!L_22)
		{
			goto IL_009b;
		}
	}
	{
		// Hide(true);
		AndroidBanner_Hide_m024E5B52D0C55EEE4923A5518D01B075ABEDC278(__this, (bool)1, /*hidden argument*/NULL);
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF *)NULL);
	}

IL_009b:
	{
		// m_Banner.ShowAfterLoad = true;
		RuntimeObject* L_23 = __this->get_m_Banner_4();
		NullCheck(L_23);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::set_ShowAfterLoad(System.Boolean) */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_23, (bool)1);
		// Load(placementId, null);
		String_t* L_24 = ___placementId0;
		AndroidBanner_Load_m1370154844FEF1502207151E2EE666D40EF5879E(__this, L_24, (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Hide_m024E5B52D0C55EEE4923A5518D01B075ABEDC278 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, bool ___destroy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3CHideU3Eb__13_0_mF08F0E243267283EC77A6E2C1C5DBB1371977B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3CHideU3Eb__13_1_mBB2249C3128F3BA4009C030784061C2DF82E3B7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B5_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B4_0 = NULL;
	BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * G_B6_0 = NULL;
	{
		// if (m_BannerBundle != null)
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_0 = __this->get_m_BannerBundle_7();
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		// if (destroy)
		bool L_1 = ___destroy0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// m_BannerBundle = null;
		__this->set_m_BannerBundle_7((BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF *)NULL);
		// m_BannersClass.CallStatic("destroy");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_2, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// m_CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
		//     var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		//     parent?.Call("removeView", m_BannerBundle.bannerView);
		// }));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 * L_7 = (AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60 *)il2cpp_codegen_object_new(AndroidJavaRunnable_tFA31E7D68EAAEB756F1B8F2EF8344C24042EDD60_il2cpp_TypeInfo_var);
		AndroidJavaRunnable__ctor_m385F79E7C422595C3F8504D588807799A7CF4727(L_7, __this, (intptr_t)((intptr_t)AndroidBanner_U3CHideU3Eb__13_0_mF08F0E243267283EC77A6E2C1C5DBB1371977B54_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_4);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_4, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_6, /*hidden argument*/NULL);
		// if (m_BannerShowOptions?.hideCallback != null)
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_8 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_005a;
		}
	}
	{
		G_B6_0 = ((BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 *)(NULL));
		goto IL_005f;
	}

IL_005a:
	{
		NullCheck(G_B5_0);
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_10;
		L_10 = BannerOptions_get_hideCallback_m40FB3392549EFEB22D9740F8F1768ACAF77ED418_inline(G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_005f:
	{
		if (!G_B6_0)
		{
			goto IL_007d;
		}
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.hideCallback();
		// });
		RuntimeObject* L_11 = __this->get_m_Banner_4();
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_11);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, __this, (intptr_t)((intptr_t)AndroidBanner_U3CHideU3Eb__13_1_mBB2249C3128F3BA4009C030784061C2DF82E3B7A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_SetPosition_mF835527B79C9B024F1F48A5EF071F3E919B56106 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, int32_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB040439619EE49D63AB73416AB10D1423D032871);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_2 = NULL;
	{
		// var index = (int)position;
		int32_t L_0 = ___position0;
		V_0 = L_0;
		// var enumClass = new AndroidJavaClass("com.unity3d.services.banners.view.BannerPosition");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_1, _stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B, /*hidden argument*/NULL);
		// var values = enumClass.CallStatic<AndroidJavaObject>("values");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_1, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		V_1 = L_3;
		// var bannerPosition = new AndroidJavaClass("java.lang.reflect.Array").CallStatic<AndroidJavaObject>("get", values, index);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_4, _stringLiteralB040439619EE49D63AB73416AB10D1423D032871, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_6;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12;
		L_12 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_4, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_8, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		V_2 = L_12;
		// m_BannersClass.CallStatic("setBannerPosition", bannerPosition);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_13 = __this->get_m_BannersClass_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		NullCheck(L_13);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_13, _stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerShow_m11128E8D370358148B67FA197A378BD3D32BF80C (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerHide_m10AC85BA582780D318C2F5456D66DC0C6D5C8E94 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerLoaded(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerLoaded_mEF53120FCB6D3C8F7B9CD9C021EC2E1ADF75C46A (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___view1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_m6AD75F271DD87AB160A59A40D608C41A0C1DD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m009728258B6EAD0E5E2A539EBD1FC31D20B9C8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// m_BannerBundle = new BannerBundle(placementId, view);
		String_t* L_0 = ___placementId0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___view1;
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_2 = (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF *)il2cpp_codegen_object_new(BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF_il2cpp_TypeInfo_var);
		BannerBundle__ctor_m2AADDE2603F229D6D96072A6F3E860C01D56AFE1(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_BannerBundle_7(L_2);
		// view.Call("setBackgroundColor", UnityEngine.Advertisements.Utilities.Color.Transparent);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___view1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int32_t L_6 = 0;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_3);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_3, _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265, L_5, /*hidden argument*/NULL);
		// if (m_Banner.ShowAfterLoad)
		RuntimeObject* L_8 = __this->get_m_Banner_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.Advertisements.IBanner::get_ShowAfterLoad() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		// m_Banner.ShowAfterLoad = false;
		RuntimeObject* L_10 = __this->get_m_Banner_4();
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::set_ShowAfterLoad(System.Boolean) */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_10, (bool)0);
		// var layoutParams = view.Call<AndroidJavaObject>("getLayoutParams");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = ___view1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12;
		L_12 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_11);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_11, _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722, L_12, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_13;
		// m_CurrentActivity.Call("addContentView", view, layoutParams);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = __this->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = ___view1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_19 = V_0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		NullCheck(L_14);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_14, _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E, L_18, /*hidden argument*/NULL);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.showCallback();
		// });
		RuntimeObject* L_20 = __this->get_m_Banner_4();
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_20);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_22, __this, (intptr_t)((intptr_t)AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m009728258B6EAD0E5E2A539EBD1FC31D20B9C8D4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_008b:
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerLoadOptions?.loadCallback();
		// });
		RuntimeObject* L_23 = __this->get_m_Banner_4();
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_23);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_25 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_25, __this, (intptr_t)((intptr_t)AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_m6AD75F271DD87AB160A59A40D608C41A0C1DD050_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_24, L_25);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerUnloaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerUnloaded_m545DB04E143054A8538ADBC0DE0A6F445412D3D0 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerClick_m92D5F14216047E68F88BDB99B0E462F8A47BD06C (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m87450FA1A8D93EF62F30E145E3351591719D97F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.clickCallback();
		// });
		RuntimeObject* L_0 = __this->get_m_Banner_4();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_0);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, __this, (intptr_t)((intptr_t)AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m87450FA1A8D93EF62F30E145E3351591719D97F6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerError_m51AE9C8FD25517B0353F3DA69458AD20893E308E (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_mE00CDE1E6D9FEC707C93EA5FAEA3A410E5EDE773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * L_0 = (U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20_0__ctor_m2C1822EB0520EAF1FA18A815FB26D77E42241C62(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * L_2 = V_0;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_message_1(L_3);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerLoadOptions?.errorCallback(message);
		// });
		RuntimeObject* L_4 = __this->get_m_Banner_4();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t4D148F46B2BD73D96D1D2367C3368F861AB083FE_il2cpp_TypeInfo_var, L_4);
		U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_mE00CDE1E6D9FEC707C93EA5FAEA3A410E5EDE773_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_t6E48BD0B7B1D1D117B2774AD2DE35F64DD94848E_il2cpp_TypeInfo_var, L_5, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<Hide>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3CHideU3Eb__13_0_mF08F0E243267283EC77A6E2C1C5DBB1371977B54 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D4E110BD86EB84CCC35696802475A8556299334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B2_0 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B1_0 = NULL;
	{
		// var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_0 = __this->get_m_BannerBundle_7();
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline(L_0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_1, _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334, L_2, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// parent?.Call("removeView", m_BannerBundle.bannerView);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_7 = __this->get_m_BannerBundle_7();
		NullCheck(L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8;
		L_8 = BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(G_B2_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(G_B2_0, _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD, L_6, /*hidden argument*/NULL);
		// }));
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<Hide>b__13_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3CHideU3Eb__13_1_mBB2249C3128F3BA4009C030784061C2DF82E3B7A (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B2_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.hideCallback();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_0 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_2;
		L_2 = BannerOptions_get_hideCallback_m40FB3392549EFEB22D9740F8F1768ACAF77ED418_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3(L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerLoaded>b__17_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m009728258B6EAD0E5E2A539EBD1FC31D20B9C8D4 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B2_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.showCallback();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_0 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_2;
		L_2 = BannerOptions_get_showCallback_m0BB9E0ADC76B27A0D9C9C6588BC691A893ACBDB7_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3(L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerLoaded>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_m6AD75F271DD87AB160A59A40D608C41A0C1DD050 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * G_B2_0 = NULL;
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * G_B1_0 = NULL;
	{
		// m_BannerLoadOptions?.loadCallback();
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_0 = __this->get_m_BannerLoadOptions_8();
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * L_2;
		L_2 = BannerLoadOptions_get_loadCallback_m743831D57DD7599102502E38CC01EB93716F1416_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		LoadCallback_Invoke_m9F56F36E89E547A5DD2A8D4CEFBBAE938ED9DA8C(L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerClick>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m87450FA1A8D93EF62F30E145E3351591719D97F6 (AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * __this, const RuntimeMethod* method)
{
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B2_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.clickCallback();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_0 = __this->get_m_BannerShowOptions_9();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_2;
		L_2 = BannerOptions_get_clickCallback_mD231FBBB7E4F404316A4F34D09ED7D0785DBE1F9_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3(L_2, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_m0077AF633F35F335366D1AC696CF5E713D4AF00F (AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED * __this, RuntimeObject* ___platform0, RuntimeObject* ___initializationListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidInitializationListener(IPlatform platform, IUnityAdsInitializationListener initializationListener) : base(CLASS_REFERENCE) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327, /*hidden argument*/NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->set_m_Platform_5(L_0);
		// m_ManagedListener = initializationListener;
		RuntimeObject* L_1 = ___initializationListener1;
		__this->set_m_ManagedListener_6(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationComplete_m1C618940F6BE92FA1FD5B1F60EF83D5273A189A0 (AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tE9C2A544036FA5F498E00D6CBB9F0D796D3768DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationComplete();
		RuntimeObject* L_0 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tE9C2A544036FA5F498E00D6CBB9F0D796D3768DD_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationFailed(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationFailed_m310CB9CAFEB13A90636F9B4A6DC804C2F4432886 (AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997_m2E55B6F631EEEEC3FDD07BC66F4EC7458B23AF18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tE9C2A544036FA5F498E00D6CBB9F0D796D3768DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationFailed(EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsInitializationError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___error0;
		int32_t L_3;
		L_3 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997_m2E55B6F631EEEEC3FDD07BC66F4EC7458B23AF18(L_2, 0, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_tB4FACCADA178E41A64DAC2DC89989AAE8901A997_m2E55B6F631EEEEC3FDD07BC66F4EC7458B23AF18_RuntimeMethod_var);
		String_t* L_4 = ___message1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tE9C2A544036FA5F498E00D6CBB9F0D796D3768DD_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
		// }
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
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_m184B23A8BC956E338BD3D5338DA7D52F26813D4D (AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B * __this, RuntimeObject* ___platform0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidLoadListener(IPlatform platform, IUnityAdsLoadListener loadListener) : base(CLASS_REFERENCE) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79, /*hidden argument*/NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->set_m_Platform_5(L_0);
		// m_ManagedListener = loadListener;
		RuntimeObject* L_1 = ___loadListener1;
		__this->set_m_ManagedListener_6(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsAdLoaded_mB7614A6D971CADE93D6997EEBDDA229666EF2336 (AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t6E361A93F6ADA7824837CF593156A857D24840EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsAdLoaded(placementId);
		RuntimeObject* L_0 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t6E361A93F6ADA7824837CF593156A857D24840EA_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsFailedToLoad(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsFailedToLoad_m07E2BBA255BEA5A4D938A5FFEDBF9958BCAFBCD0 (AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605_mF0BE44648510EB5915750342B03F40879BA5815C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t6E361A93F6ADA7824837CF593156A857D24840EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsFailedToLoad(placementId, EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsLoadError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___placementId0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___error1;
		int32_t L_4;
		L_4 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605_mF0BE44648510EB5915750342B03F40879BA5815C(L_3, 5, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tAD46DA2217C2BB6AB8690F16FF7CAAE46C8A6605_mF0BE44648510EB5915750342B03F40879BA5815C_RuntimeMethod_var);
		String_t* L_5 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t6E361A93F6ADA7824837CF593156A857D24840EA_il2cpp_TypeInfo_var, G_B2_0, L_2, L_4, L_5);
		// }
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_SetupPlatform_mFED3725DC6679DBFB60F5C73C13B7C952E1F5597 (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->set_m_Platform_0(L_0);
		// m_CurrentActivity = GetCurrentAndroidActivity();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidPlatform_GetCurrentAndroidActivity_m93FD3ADE5C80C3087F9EE8A5C88DD9B3F79F0161(/*hidden argument*/NULL);
		__this->set_m_CurrentActivity_1(L_1);
		// m_UnityAds = new AndroidJavaClass(ADS_BASE_CLASS);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_2 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_2, _stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E, /*hidden argument*/NULL);
		__this->set_m_UnityAds_2(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Initialize_m9E8495EDF9FEBB5AF3246A89FAA5211BB92176B6 (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("initialize", m_CurrentActivity, gameId, testMode, new AndroidInitializationListener(m_Platform, initializationListener));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_m_CurrentActivity_1();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = ___gameId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		bool L_8 = ___testMode1;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		RuntimeObject* L_12 = __this->get_m_Platform_0();
		RuntimeObject* L_13 = ___initializationListener2;
		AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED * L_14 = (AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED *)il2cpp_codegen_object_new(AndroidInitializationListener_t53F1058D74E376902D61669142EFD248861081ED_il2cpp_TypeInfo_var);
		AndroidInitializationListener__ctor_m0077AF633F35F335366D1AC696CF5E713D4AF00F(L_14, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B2_0, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Load_m55DEDF3C735A4F4C0BD3A4E4BC20A2CB6894F79F (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("load", placementId, new AndroidLoadListener(m_Platform, loadListener));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4 = ___placementId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject* L_6 = __this->get_m_Platform_0();
		RuntimeObject* L_7 = ___loadListener1;
		AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B * L_8 = (AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B *)il2cpp_codegen_object_new(AndroidLoadListener_t05C9811E3AB6D4F04BBDAB68971A6949C5C85A3B_il2cpp_TypeInfo_var);
		AndroidLoadListener__ctor_m184B23A8BC956E338BD3D5338DA7D52F26813D4D(L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B2_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Show_m7274B2C6663564C792DFEBCD0FA3AA0F59E468B3 (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("show", m_CurrentActivity, placementId, new AndroidShowListener(m_Platform, showListener));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = __this->get_m_CurrentActivity_1();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = ___placementId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		RuntimeObject* L_8 = __this->get_m_Platform_0();
		RuntimeObject* L_9 = ___showListener1;
		AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * L_10 = (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 *)il2cpp_codegen_object_new(AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5_il2cpp_TypeInfo_var);
		AndroidShowListener__ctor_mEC1FC636E21CD28D8F84F2E59314191F244B91DB(L_10, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(G_B2_0, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_SetMetaData_m2F507AEB77B7B74B7370C9ED33202C0F326FAAA7 (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var metaDataObject = new AndroidJavaObject(ADS_METADATA_CLASS, m_CurrentActivity);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = __this->get_m_CurrentActivity_1();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_3, _stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5, L_1, /*hidden argument*/NULL);
		V_0 = L_3;
		// metaDataObject.Call("setCategory", metaData.category);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_5;
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_7 = ___metaData0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = MetaData_get_category_mEB53968537A586DF1FF7D2DE6D770A8E78BDD85B_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_4);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_4, _stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD, L_6, /*hidden argument*/NULL);
		// foreach (var entry in metaData.Values())
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_9 = ___metaData0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = MetaData_Values_m781ECE9DD222C1F5EC360D7C94B392944729F58C_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0042:
		{
			// foreach (var entry in metaData.Values())
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_13;
			L_13 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_12);
			V_2 = L_13;
			// metaDataObject.Call<bool>("set", entry.Key, entry.Value);
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = V_0;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
			String_t* L_17;
			L_17 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_17);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
			RuntimeObject * L_19;
			L_19 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
			NullCheck(L_14);
			bool L_20;
			L_20 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_14, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_18, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		}

IL_006f:
		{
			// foreach (var entry in metaData.Values())
			RuntimeObject* L_21 = V_1;
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0042;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_1;
			if (!L_23)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			RuntimeObject* L_24 = V_1;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_24);
		}

IL_0082:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// metaDataObject.Call("commit");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_25 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26;
		L_26 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_25, _stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlatform_GetVersion_m937A7865BEA6C3904A8DA61F1789F4635458877F (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// return m_UnityAds?.CallStatic<string>("getVersion") ?? "UnknownVersion";
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001c;
	}

IL_000d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(G_B2_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0025;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_0025:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPlatform_IsInitialized_m8A093D2A7DDD34F03D4E163F4B55914945025F8C (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B2_0 = NULL;
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * G_B1_0 = NULL;
	{
		// return m_UnityAds?.CallStatic<bool>("isInitialized") ?? false;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = __this->get_m_UnityAds_2();
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(G_B2_0, _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetCurrentAndroidActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidPlatform_GetCurrentAndroidActivity_m93FD3ADE5C80C3087F9EE8A5C88DD9B3F79F0161 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var unityPlayerClass = new AndroidJavaClass(UNITY_PLAYER_CLASS);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// return unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform__ctor_m1C26C696AF21246BCF765FEF2E7AF3B0E1E1C1BA (AndroidPlatform_t62F0DE7E96C1733FC009853DBA433DA3A76FD4E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_mEC1FC636E21CD28D8F84F2E59314191F244B91DB (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * __this, RuntimeObject* ___platform0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidShowListener(IPlatform platform, IUnityAdsShowListener showListener) : base(OBJECT_ID) {
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192, /*hidden argument*/NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->set_m_Platform_5(L_0);
		// m_ManagedListener = showListener;
		RuntimeObject* L_1 = ___showListener1;
		__this->set_m_ManagedListener_6(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowFailure(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowFailure_m593A60DDCEE67ADFF97AC3C5E908AFFB01E1B377 (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9_mA8706ED34BCA3DBAFBE25F934DE20CDE0F2326A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var enumError = EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsShowError.UNKNOWN);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___error1;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9_mA8706ED34BCA3DBAFBE25F934DE20CDE0F2326A2(L_0, 7, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t18557CDB524BD97FA5EB380F606DA76C257EBED9_mA8706ED34BCA3DBAFBE25F934DE20CDE0F2326A2_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_2 = __this->get_m_Platform_5();
		String_t* L_3 = ___placementId0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___message2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(3 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// m_ManagedListener?.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_6 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		String_t* L_8 = ___placementId0;
		int32_t L_9 = V_0;
		String_t* L_10 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var, G_B2_0, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowStart_mBBA5F3CCDCA3194FE0095C27362ED4CAB1780D07 (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = __this->get_m_Platform_5();
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowStart(System.String) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_2 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowClick_m9D8179170EFC3B1AC64B429A61E0622B48F698C5 (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = __this->get_m_Platform_5();
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowClick(System.String) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_2 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowComplete(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowComplete_m80448EB2444E3263D16C20630955D7EB5DFC1821 (AndroidShowListener_t757952C0B0CFC477F8ABC3DF5D3F6609A08F91A5 * __this, String_t* ___placementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF_mFDA4015F533DF8C9A4528E548B3F5DEF2A470E69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var showCompletionState = EnumUtilities.GetEnumFromAndroidJavaObject(state, UnityAdsShowCompletionState.UNKNOWN);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___state1;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF_mFDA4015F533DF8C9A4528E548B3F5DEF2A470E69(L_0, 2, /*hidden argument*/EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_t0CFB0DA2A60A7F562A1FCD4B8E22239692A69AFF_mFDA4015F533DF8C9A4528E548B3F5DEF2A470E69_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_2 = __this->get_m_Platform_5();
		String_t* L_3 = ___placementId0;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(6 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IPlatform_tB829A71629D063978FB19BF7B84737FBB5684D62_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// m_ManagedListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_5 = __this->get_m_ManagedListener_6();
		RuntimeObject* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		String_t* L_7 = ___placementId0;
		int32_t L_8 = V_0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t2DE2A44EB2592FDF97DF9F5C6864D9086B573687_il2cpp_TypeInfo_var, G_B2_0, L_7, L_8);
		// }
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
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_mEFD0537B1AE34E5CC2C0063895B38641F13482DC (ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_2 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_5 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::remove_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_remove_OnApplicationQuitEventHandler_mE5B7614D72E04C9840D5B6BA0C84F5AE8B0B28C3 (ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_2 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_5 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_OnApplicationQuit_m7BC1698B3E4501A492B0516705157F45F3408D80 (ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * __this, const RuntimeMethod* method)
{
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B2_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B1_0 = NULL;
	{
		// OnApplicationQuitEventHandler?.Invoke();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_mDD31F32005ADEDE5C717FA282DB87A16840EF2CC (ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_m69A32DE86365F7A0C6E65F1181F4F61A69B81106 (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * __this, const RuntimeMethod* method)
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->get_U3CUnityLifecycleManagerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Banner::get_ShowAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Banner_get_ShowAfterLoad_mF09160357BC96B351087CCE706DA6390BDFE008B (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = __this->get_U3CShowAfterLoadU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Banner::set_ShowAfterLoad(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_set_ShowAfterLoad_mC33A99D2AEDDCDCA2243555F0BC1D29F1FFD0279 (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShowAfterLoadU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m7AF881996161843A52C5FF89F772886CDD38D789 (Banner_t9F5EA8EEB0A78917783CE4D3D4813370B64C2F58 * __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t51370625A59ECE3196215B6451AD9AD256FDE3B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Banner(INativeBanner nativeBanner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_NativeBanner = nativeBanner;
		RuntimeObject* L_0 = ___nativeBanner0;
		__this->set_m_NativeBanner_2(L_0);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_1 = ___unityLifecycleManager1;
		__this->set_U3CUnityLifecycleManagerU3Ek__BackingField_0(L_1);
		// m_NativeBanner.SetupBanner(this);
		RuntimeObject* L_2 = __this->get_m_NativeBanner_2();
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativeBanner::SetupBanner(UnityEngine.Advertisements.IBanner) */, INativeBanner_t51370625A59ECE3196215B6451AD9AD256FDE3B2_il2cpp_TypeInfo_var, L_2, __this);
		// }
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
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8 (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_U3CbannerViewU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_m5AEB53BBE4DD06ACBF572E8BFD6EE9D44F685C94 (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, const RuntimeMethod* method)
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->get_U3CbannerPlacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_m2AADDE2603F229D6D96072A6F3E860C01D56AFE1 (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, String_t* ___bannerPlacementId0, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___bannerView1, const RuntimeMethod* method)
{
	{
		// public BannerBundle(string bannerPlacementId, AndroidJavaObject bannerView)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.bannerPlacementId = bannerPlacementId;
		String_t* L_0 = ___bannerPlacementId0;
		__this->set_U3CbannerPlacementIdU3Ek__BackingField_1(L_0);
		// this.bannerView = bannerView;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ___bannerView1;
		__this->set_U3CbannerViewU3Ek__BackingField_0(L_1);
		// }
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
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * BannerLoadOptions_get_loadCallback_m743831D57DD7599102502E38CC01EB93716F1416 (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * __this, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * L_0 = __this->get_U3CloadCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * BannerLoadOptions_get_errorCallback_m0BD5ADA00F80C3B01988E58D7E802DCD90B3DBCE (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * __this, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * L_0 = __this->get_U3CerrorCallbackU3Ek__BackingField_1();
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
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_showCallback_m0BB9E0ADC76B27A0D9C9C6588BC691A893ACBDB7 (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_0 = __this->get_U3CshowCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_hideCallback_m40FB3392549EFEB22D9740F8F1768ACAF77ED418 (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_0 = __this->get_U3ChideCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_clickCallback_mD231FBBB7E4F404316A4F34D09ED7D0785DBE1F9 (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
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
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_Awake_m77A63F948CC6854C09459A6BE2F44F7FB764470B (BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A * __this, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		__this->set_IsShowing_7((bool)0);
		// aTexture = BackgroundTexture(320, 50, Color.grey);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = BannerPlaceholder_BackgroundTexture_mED690F93E74B7B6F2A537A2586424A63AAA2DA56(((int32_t)320), ((int32_t)50), L_0, /*hidden argument*/NULL);
		__this->set_aTexture_4(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_OnGUI_m2FF6503101CA43CE89EB23017E98B9865B23711A (BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B5_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B4_0 = NULL;
	{
		// if (!IsShowing) return;
		bool L_0 = __this->get_IsShowing_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsShowing) return;
		return;
	}

IL_0009:
	{
		// var myStyle = new GUIStyle(GUI.skin.box) { alignment = TextAnchor.MiddleCenter, fontSize = 20 };
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1;
		L_1 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2;
		L_2 = GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0(L_1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_3, L_2, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = L_3;
		NullCheck(L_4);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_4, 4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = L_4;
		NullCheck(L_5);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_5, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_5;
		// if (GUI.Button(GetBannerRect(BannerPosition), aTexture))
		int32_t L_6 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = BannerPlaceholder_GetBannerRect_mE3A30D68A748F7E9EC88191842B91E5843CBDC5F(L_6, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = __this->get_aTexture_4();
		bool L_9;
		L_9 = GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// BannerOptions?.clickCallback();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_10 = __this->get_BannerOptions_6();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004c;
		}
	}
	{
		goto IL_0056;
	}

IL_004c:
	{
		NullCheck(G_B5_0);
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_12;
		L_12 = BannerOptions_get_clickCallback_mD231FBBB7E4F404316A4F34D09ED7D0785DBE1F9_inline(G_B5_0, /*hidden argument*/NULL);
		NullCheck(L_12);
		BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3(L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if (aTexture)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// var bannerRect = GetBannerRect(BannerPosition);
		int32_t L_15 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		L_16 = BannerPlaceholder_GetBannerRect_mE3A30D68A748F7E9EC88191842B91E5843CBDC5F(L_15, /*hidden argument*/NULL);
		// GUI.DrawTexture(bannerRect, aTexture, ScaleMode.ScaleToFit);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = L_16;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_17, L_18, 2, /*hidden argument*/NULL);
		// GUI.Box(bannerRect, "This would be your banner", myStyle);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = V_0;
		GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018(L_17, _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0, L_19, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::ShowBanner(UnityEngine.Advertisements.BannerPosition,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_ShowBanner_m9115177A1E07C52C5C4B5A9BF7ED7BC9493DB738 (BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A * __this, int32_t ___bannerPosition0, BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * ___bannerOptions1, const RuntimeMethod* method)
{
	{
		// BannerPosition = bannerPosition;
		int32_t L_0 = ___bannerPosition0;
		__this->set_BannerPosition_5(L_0);
		// BannerOptions = bannerOptions;
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_1 = ___bannerOptions1;
		__this->set_BannerOptions_6(L_1);
		// IsShowing = true;
		__this->set_IsShowing_7((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_HideBanner_mB4C56A61D17B0C118E249C4B8A1E60ABC9D52317 (BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A * __this, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		__this->set_IsShowing_7((bool)0);
		// }
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_mED690F93E74B7B6F2A537A2586424A63AAA2DA56 (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var pix = new Color[width * height];
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		// for (var i = 0; i < pix.Length; i++)
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// pix[i] = color;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_5);
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_7 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// var result = new Texture2D(width, height);
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_11, L_9, L_10, /*hidden argument*/NULL);
		// result.SetPixels(pix);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = L_11;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_12, L_13, /*hidden argument*/NULL);
		// result.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = L_12;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		// return result;
		return L_14;
	}
}
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_mE3A30D68A748F7E9EC88191842B91E5843CBDC5F (int32_t ___position0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___position0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0027:
	{
		// return new Rect(Screen.width / 2 - 160, 0, 320, 50);
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_1/(int32_t)2)), (int32_t)((int32_t)160))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004a:
	{
		// return new Rect(0, 0, 320, 50);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0064:
	{
		// return new Rect(Screen.width - 320, 0, 320, 50);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_5), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)320))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0085:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height / 2 - 25, 320, 50);
		int32_t L_6;
		L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_8), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_6/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_7/(int32_t)2)), (int32_t)((int32_t)25))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_00ae:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_11;
	}

IL_00d5:
	{
		// return new Rect(0, Screen.height - 50, 320, 50);
		int32_t L_12;
		L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_00f3:
	{
		// return new Rect(Screen.width - 320, Screen.height - 50, 320, 50);
		int32_t L_14;
		L_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_16), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)320))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_16;
	}

IL_0118:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_17;
		L_17 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_19), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_17/(int32_t)2)), (int32_t)((int32_t)160))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)50))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder__ctor_mCA00D1F70AA2C7E8601C5093DDB30C5876863B3A (BannerPlaceholder_tE01F92B9EFDBCB742C1DFB39674A1D772F3AF84A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor_Update_mF4C5F92BA826294059413EA69E20CED88A39AA49 (CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// lock (queue)
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_queue_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			goto IL_0029;
		}

IL_0013:
		{
			// queue.Dequeue()?.Invoke();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_queue_5();
			NullCheck(L_2);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3;
			L_3 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_2, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0024;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}

IL_0024:
		{
			NullCheck(G_B4_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
		}

IL_0029:
		{
			// while (queue.Count > 0)
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_5 = __this->get_queue_5();
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_5, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0013;
			}
		}

IL_0037:
		{
			// }
			IL2CPP_LEAVE(0x43, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor__ctor_m60F4B949F57192F22A787B3F3FC48129B3A486AB (CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Queue<Action> queue = new Queue<Action>();
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_queue_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mEB53968537A586DF1FF7D2DE6D770A8E78BDD85B (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_set_category_mE16CD7E5B6A4845EFDCEFF28C09732DDA4468D54 (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_m0586C59E5F11EFB13AE9F525FA863EC0512ACE23 (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IDictionary<string, object> m_MetaData = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		__this->set_m_MetaData_0(L_0);
		// public MetaData(string category)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.category = category;
		String_t* L_1 = ___category0;
		MetaData_set_category_mE16CD7E5B6A4845EFDCEFF28C09732DDA4468D54_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MetaData[key] = value;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		String_t* L_1 = ___key0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_m781ECE9DD222C1F5EC360D7C94B392944729F58C (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, const RuntimeMethod* method)
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
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
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method)
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->get_U3CNativePlatformU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m42EDC63D0A8593DD79BEA3AF4A24A8A145355789 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public bool IsInitialized => NativePlatform?.IsInitialized() ?? false;
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.Advertisements.INativePlatform::IsInitialized() */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_mE933CF1C25AEFFDDFBAB35A9907B82090A61D007 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->get_U3CIsShowingU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m0AAE6CFB743D434BEC0AF71BB5902C1F8678D840 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsShowingU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mBCA74772946B82B0E5193275DFF7693492639C98 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string Version => NativePlatform?.GetVersion() ?? "UnknownVersion";
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.INativePlatform::GetVersion() */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m2938E0EC72C2D989903D060A27B3FC00B16BE57F (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Platform(INativePlatform nativePlatform, IBanner banner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// NativePlatform = nativePlatform;
		RuntimeObject* L_0 = ___nativePlatform0;
		__this->set_U3CNativePlatformU3Ek__BackingField_2(L_0);
		// Banner = banner;
		RuntimeObject* L_1 = ___banner1;
		__this->set_U3CBannerU3Ek__BackingField_0(L_1);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_2 = ___unityLifecycleManager2;
		__this->set_U3CUnityLifecycleManagerU3Ek__BackingField_1(L_2);
		// NativePlatform.SetupPlatform(this);
		RuntimeObject* L_3;
		L_3 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativePlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform) */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_mC782381F563FF93FD6A2D2DF1602C1D5222D41AC (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * V_0 = NULL;
	MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * V_1 = NULL;
	{
		// if (!IsInitialized)
		bool L_0;
		L_0 = Platform_get_IsInitialized_m42EDC63D0A8593DD79BEA3AF4A24A8A145355789(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_007b;
		}
	}
	{
		// var framework = new MetaData("framework");
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_1 = (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 *)il2cpp_codegen_object_new(MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0_il2cpp_TypeInfo_var);
		MetaData__ctor_m0586C59E5F11EFB13AE9F525FA863EC0512ACE23(L_1, _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412, /*hidden argument*/NULL);
		V_0 = L_1;
		// framework.Set("name", "Unity");
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_2 = V_0;
		NullCheck(L_2);
		MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, /*hidden argument*/NULL);
		// framework.Set("version", Application.unityVersion);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_3 = V_0;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_3);
		MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD(L_3, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_4, /*hidden argument*/NULL);
		// SetMetaData(framework);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_5 = V_0;
		Platform_SetMetaData_mC63D3DB5BC9608AACA84CE458156E166D961A543(__this, L_5, /*hidden argument*/NULL);
		// var adapter = new MetaData("adapter");
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_6 = (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 *)il2cpp_codegen_object_new(MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0_il2cpp_TypeInfo_var);
		MetaData__ctor_m0586C59E5F11EFB13AE9F525FA863EC0512ACE23(L_6, _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3, /*hidden argument*/NULL);
		V_1 = L_6;
		// adapter.Set("name", "Packman");
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_7 = V_1;
		NullCheck(L_7);
		MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD(L_7, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F, /*hidden argument*/NULL);
		// adapter.Set("version", Version);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_8 = V_1;
		String_t* L_9;
		L_9 = Platform_get_Version_mBCA74772946B82B0E5193275DFF7693492639C98(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD(L_8, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_9, /*hidden argument*/NULL);
		// SetMetaData(adapter);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_10 = V_1;
		Platform_SetMetaData_mC63D3DB5BC9608AACA84CE458156E166D961A543(__this, L_10, /*hidden argument*/NULL);
		// NativePlatform.Initialize(gameId, testMode, initializationListener);
		RuntimeObject* L_11;
		L_11 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		String_t* L_12 = ___gameId0;
		bool L_13 = ___testMode1;
		RuntimeObject* L_14 = ___initializationListener2;
		NullCheck(L_11);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativePlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Load_m51CBB295006D6B55B596326EC2A53D5BBC70D707 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(placementId))
		String_t* L_0 = ___placementId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("placementId cannot be nil or empty");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0013:
	{
		// NativePlatform.Load(placementId, loadListener);
		RuntimeObject* L_2;
		L_2 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___placementId0;
		RuntimeObject* L_4 = ___loadListener1;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativePlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_mB9DBE9FFABF8D65D3F9C7ECC43AC71C1DB4D5609 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___placementId0, ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * V_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// if (IsShowing) return;
		bool L_0;
		L_0 = Platform_get_IsShowing_mE933CF1C25AEFFDDFBAB35A9907B82090A61D007_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsShowing) return;
		return;
	}

IL_0009:
	{
		// if (showOptions != null)
		ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * L_1 = ___showOptions1;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// if (!string.IsNullOrEmpty(showOptions.gamerSid))
		ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * L_2 = ___showOptions1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ShowOptions_get_gamerSid_m1B05282348387EE3157B9FD1E3E7F5C8503B09D3_inline(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// var player = new MetaData("player");
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_5 = (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 *)il2cpp_codegen_object_new(MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0_il2cpp_TypeInfo_var);
		MetaData__ctor_m0586C59E5F11EFB13AE9F525FA863EC0512ACE23(L_5, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		V_0 = L_5;
		// player.Set("server_id", showOptions.gamerSid);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_6 = V_0;
		ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * L_7 = ___showOptions1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ShowOptions_get_gamerSid_m1B05282348387EE3157B9FD1E3E7F5C8503B09D3_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		MetaData_Set_m160D22D0BA87AB465655247F508A2C8A963AFBAD(L_6, _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714, L_8, /*hidden argument*/NULL);
		// SetMetaData(player);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_9 = V_0;
		Platform_SetMetaData_mC63D3DB5BC9608AACA84CE458156E166D961A543(__this, L_9, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// NativePlatform.Show(string.IsNullOrEmpty(placementId) ? null : placementId, showListener);
		RuntimeObject* L_10;
		L_10 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		String_t* L_11 = ___placementId0;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_10;
		if (L_12)
		{
			G_B7_0 = L_10;
			goto IL_004d;
		}
	}
	{
		String_t* L_13 = ___placementId0;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_004e:
	{
		RuntimeObject* L_14 = ___showListener2;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativePlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener) */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_14);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_mC63D3DB5BC9608AACA84CE458156E166D961A543 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativePlatform.SetMetaData(metaData);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline(__this, /*hidden argument*/NULL);
		MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * >::Invoke(4 /* System.Void UnityEngine.Advertisements.INativePlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, INativePlatform_tB1A051E8F4CB606065288FDD6E8947F29E1C4D56_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowFailure_m5105A16B266F301E495523A2C145A942A6257DE2 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m0AAE6CFB743D434BEC0AF71BB5902C1F8678D840_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowStart_m32D5B20B63CE10FE446B18A48D34F098A05ACB75 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// IsShowing = true;
		Platform_set_IsShowing_m0AAE6CFB743D434BEC0AF71BB5902C1F8678D840_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowClick_m15663CED478C3F7A7EBF60A1B4C9F9E14EF69D23 (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowComplete_m2A51F4D7ADAF5A6B04A76C4D2CC598D75699C51D (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, String_t* ___placementId0, int32_t ___completionState1, const RuntimeMethod* method)
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m0AAE6CFB743D434BEC0AF71BB5902C1F8678D840_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
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
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m1B05282348387EE3157B9FD1E3E7F5C8503B09D3 (ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * __this, const RuntimeMethod* method)
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_0();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m5BFDAE69BB9A996A04A15A0C08F546CA4D37F32C (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * __this, const RuntimeMethod* method)
{
	{
		// public UnityLifecycleManager() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Initialize();
		UnityLifecycleManager_Initialize_mCEF412727C4ED6B6CCF90826FCC8086B80390BCF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_mCEF412727C4ED6B6CCF90826FCC8086B80390BCF (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E_m9C99C1BF76955971F4BC8427472801E10F40E3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m9997E337788E7CFCAD7A0D0794215DFF67B48F0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m3418E544DAB2F27A7EE11B1AFD57786C1693E739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var existingCoroutineExecutorGameObject = GameObject.Find(gameObjectName);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (existingCoroutineExecutorGameObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// m_GameObject = existingCoroutineExecutorGameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		__this->set_m_GameObject_0(L_3);
		// m_CoroutineExecutor = m_GameObject.GetComponent<CoroutineExecutor>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_GameObject_0();
		NullCheck(L_4);
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_5;
		L_5 = GameObject_GetComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m3418E544DAB2F27A7EE11B1AFD57786C1693E739(L_4, /*hidden argument*/GameObject_GetComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m3418E544DAB2F27A7EE11B1AFD57786C1693E739_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_5);
		// if (m_CoroutineExecutor != null)
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_6 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_8 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_referenceCount_4();
		NullCheck(L_9);
		L_9->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// return;
		return;
	}

IL_004e:
	{
		// GameObject.DestroyImmediate(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_11, /*hidden argument*/NULL);
		// m_GameObject = null;
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0060:
	{
		// m_GameObject = new GameObject(gameObjectName) { hideFlags = HideFlags.HideInHierarchy | HideFlags.HideInInspector};
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_12, _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12;
		NullCheck(L_13);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_13, 3, /*hidden argument*/NULL);
		__this->set_m_GameObject_0(L_13);
		// m_CoroutineExecutor = m_GameObject.AddComponent<CoroutineExecutor>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_m_GameObject_0();
		NullCheck(L_14);
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_15;
		L_15 = GameObject_AddComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m9997E337788E7CFCAD7A0D0794215DFF67B48F0C(L_14, /*hidden argument*/GameObject_AddComponent_TisCoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74_m9997E337788E7CFCAD7A0D0794215DFF67B48F0C_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_15);
		// m_ApplicationQuit = m_GameObject.AddComponent<ApplicationQuit>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_m_GameObject_0();
		NullCheck(L_16);
		ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E * L_17;
		L_17 = GameObject_AddComponent_TisApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E_m9C99C1BF76955971F4BC8427472801E10F40E3F3(L_16, /*hidden argument*/GameObject_AddComponent_TisApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E_m9C99C1BF76955971F4BC8427472801E10F40E3F3_RuntimeMethod_var);
		__this->set_m_ApplicationQuit_2(L_17);
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_18 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_referenceCount_4();
		NullCheck(L_19);
		L_19->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// GameObject.DontDestroyOnLoad(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Post(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Post_mBCEC8BFE8DACCAEB98DC1D17B45C739C74BBD33C (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * G_B5_0 = NULL;
	CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * G_B4_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B7_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B6_0 = NULL;
	{
		// if (!m_CoroutineExecutor) {
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_0 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Initialize();
		UnityLifecycleManager_Initialize_mCEF412727C4ED6B6CCF90826FCC8086B80390BCF(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// lock (m_CoroutineExecutor.queue)
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_2 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_2);
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_3 = L_2->get_queue_5();
		V_0 = L_3;
		V_1 = (bool)0;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_4 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
			// m_CoroutineExecutor?.queue?.Enqueue(action);
			CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_5 = __this->get_m_CoroutineExecutor_1();
			CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_6 = L_5;
			G_B4_0 = L_6;
			if (L_6)
			{
				G_B5_0 = L_6;
				goto IL_0035;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}

IL_0035:
		{
			NullCheck(G_B5_0);
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_7 = G_B5_0->get_queue_5();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = L_7;
			G_B6_0 = L_8;
			if (L_8)
			{
				G_B7_0 = L_8;
				goto IL_0040;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}

IL_0040:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___action0;
			NullCheck(G_B7_0);
			Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09(G_B7_0, L_9, /*hidden argument*/Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Dispose_mC19AF100C9753449B26E35B3CA23BBB57E8814EB (UnityLifecycleManager_tD6FFA7D9933F4252B20D3A418654B3A501356632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Disposed)
		bool L_0 = __this->get_m_Disposed_3();
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// m_Disposed = true;
		__this->set_m_Disposed_3((bool)1);
		// m_CoroutineExecutor.referenceCount--;
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_1 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_referenceCount_4();
		NullCheck(L_2);
		L_2->set_referenceCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		// if (m_CoroutineExecutor.referenceCount == 0) {
		CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 * L_4 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_referenceCount_4();
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// Object.DestroyImmediate(m_GameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// m_GameObject = null;
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// m_CoroutineExecutor = null;
		__this->set_m_CoroutineExecutor_1((CoroutineExecutor_tB6DE86CB083D29EB05CDDC70BEED0D2DBF30EF74 *)NULL);
		// m_ApplicationQuit = null;
		__this->set_m_ApplicationQuit_2((ApplicationQuit_t90F049E52305A2FECBF635B48DB755DDA9C7847E *)NULL);
	}

IL_004f:
	{
		// }
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetupBanner_m2EF1C06CE6798A811C1DFCA4726267B415BB82DB (UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2 * __this, RuntimeObject* ___banner0, const RuntimeMethod* method)
{
	{
		// public void SetupBanner(IBanner banner) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_mD5EE53FAF1CB6E7294BB85CB45D87014C0FED9AE (UnsupportedBanner_t22B6D8A956147D073C81DF3EEC6CB688F319ACC2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetupPlatform_m280845E1FFB3C48F235163453B964205911A5C5E (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	{
		// public void SetupPlatform(IPlatform platform) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_m2084035463502C8922FE20F365214824F5DC1095 (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method)
{
	{
		// public void Initialize(string gameId, bool testMode, IUnityAdsInitializationListener initializationListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Load_mA01F75A12A1C6AD04808E0F635CED934CCDF3C25 (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method)
{
	{
		// public void Load(string placementId, IUnityAdsLoadListener loadListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_mF9694354B5F40CA84F82B885D18437AB87931FB0 (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method)
{
	{
		// public void Show(string placementId, IUnityAdsShowListener showListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_m760B365EC9FAE639692B894076A0B7263DC2006C (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * ___metaData0, const RuntimeMethod* method)
{
	{
		// public void SetMetaData(MetaData metaData) {}
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_GetVersion_m68C768BA3B7884FF93B4AA48B1F150FF1B544DD2 (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "UnsupportedPlatformVersion";
		return _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsInitialized_m8D4D3E32B1DDF79DFA9EFC45A3B86A4F0CF3089F (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mC71AA568F8EAB5D191EC3A2C59D3605140AD057D (UnsupportedPlatform_tCE890FCDD3F724863FE53D16ECA59236CB3AF3AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mFF7CFDAB42DCE5EF2EB5EDC8DEB80481B142562E (U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::<Load>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m0EB7CEA88F033FC1DF2301D8E3B529D317710F18 (U3CU3Ec__DisplayClass11_0_t6C3B37BBE64A9D3FFE63532E8E9F94D0A8AF1352 * __this, const RuntimeMethod* method)
{
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * G_B2_0 = NULL;
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * G_B1_0 = NULL;
	{
		// loadOptions?.loadCallback();
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_0 = __this->get_loadOptions_0();
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * L_2;
		L_2 = BannerLoadOptions_get_loadCallback_m743831D57DD7599102502E38CC01EB93716F1416_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		LoadCallback_Invoke_m9F56F36E89E547A5DD2A8D4CEFBBAE938ED9DA8C(L_2, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m824035BE9E9871AB6F8A06CF25563F9F09607D32 (U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<Show>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_m2999170E20FCFF05D7CA9D17CED727B073067DB4 (U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D4E110BD86EB84CCC35696802475A8556299334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_1 = L_0->get_m_BannerBundle_7();
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2;
		L_2 = BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline(L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_2, _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334, L_3, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// if (parent == null)
		if (L_4)
		{
			goto IL_0073;
		}
	}
	{
		// var layoutParams = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getLayoutParams");
		AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * L_5 = __this->get_U3CU3E4__this_0();
		NullCheck(L_5);
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_6 = L_5->get_m_BannerBundle_7();
		NullCheck(L_6);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_7;
		L_7 = BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline(L_6, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_7, _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722, L_8, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_9;
		// m_CurrentActivity.Call("addContentView", m_BannerBundle.bannerView, layoutParams);
		AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * L_10 = __this->get_U3CU3E4__this_0();
		NullCheck(L_10);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_11 = L_10->get_m_CurrentActivity_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * L_14 = __this->get_U3CU3E4__this_0();
		NullCheck(L_14);
		BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * L_15 = L_14->get_m_BannerBundle_7();
		NullCheck(L_15);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16;
		L_16 = BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		NullCheck(L_11);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_11, _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E, L_17, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }));
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<Show>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_mFEFC573E1F36E3CCC1C14A8D5380E7FB18DFFB00 (U3CU3Ec__DisplayClass12_0_tCDAC81DFFF39B296E5B45243774CE5279B2F4428 * __this, const RuntimeMethod* method)
{
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B2_0 = NULL;
	BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * G_B1_0 = NULL;
	{
		// showOptions?.showCallback();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_0 = __this->get_showOptions_1();
		BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_2;
		L_2 = BannerOptions_get_showCallback_m0BB9E0ADC76B27A0D9C9C6588BC691A893ACBDB7_inline(G_B2_0, /*hidden argument*/NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3(L_2, /*hidden argument*/NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m2C1822EB0520EAF1FA18A815FB26D77E42241C62 (U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::<onUnityBannerError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_mE00CDE1E6D9FEC707C93EA5FAEA3A410E5EDE773 (U3CU3Ec__DisplayClass20_0_tCCE24A41418AB0B8151ADA8B4B4CE554E98E62A0 * __this, const RuntimeMethod* method)
{
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * G_B2_0 = NULL;
	BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * G_B1_0 = NULL;
	{
		// m_BannerLoadOptions?.errorCallback(message);
		AndroidBanner_t8B0379554BCAE174AD9B0AD62A5E5C6E9003DE0F * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_1 = L_0->get_m_BannerLoadOptions_8();
		BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * L_3;
		L_3 = BannerLoadOptions_get_errorCallback_m0BD5ADA00F80C3B01988E58D7E802DCD90B3DBCE_inline(G_B2_0, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_message_1();
		NullCheck(L_3);
		ErrorCallback_Invoke_mF990A64D9626028098774D6F001312B63BA5392F(L_3, L_4, /*hidden argument*/NULL);
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 (ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_mE617F957AE60DBA1B25415EC02291985C66F0EAC (ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_mF990A64D9626028098774D6F001312B63BA5392F (ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorCallback_BeginInvoke_mCC9430C09176ECE71FA48D876BD58BEAE9F2193C (ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_EndInvoke_m4328C0838804D8767669656B81854EEE3D390EB4 (ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 (LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m23A474C47695D1E431A2563C6874586DEE2F2E94 (LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_m9F56F36E89E547A5DD2A8D4CEFBBAE938ED9DA8C (LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadCallback_BeginInvoke_mB3438B6580A79EE954E859D5FAA124480A373CD9 (LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_EndInvoke_m4AE2DE2C5BDBB3A4EBAB922D78F91C9149C54ACC (LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 (BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_mA644143ACB6F4A28195571FE752B357149FABC18 (BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_mA8AF5A5156CC111D0B1FEFE97BA0ED0DC2B966F3 (BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerOptions/BannerCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerCallback_BeginInvoke_m11157DEABB5621E7DC97F2F40929203D8CA7AA6D (BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_EndInvoke_mDE7C80C4C71445B4C65FFBD6863B65E48A6C080E (BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_m5AEB53BBE4DD06ACBF572E8BFD6EE9D44F685C94_inline (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, const RuntimeMethod* method)
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->get_U3CbannerPlacementIdU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_hideCallback_m40FB3392549EFEB22D9740F8F1768ACAF77ED418_inline (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_0 = __this->get_U3ChideCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * BannerBundle_get_bannerView_m88F6A1E03971DBB947BA2E634A2F02DE92A6E9C8_inline (BannerBundle_t7254B9C1A328721E8827A62C7CA2C0888C946BBF * __this, const RuntimeMethod* method)
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_U3CbannerViewU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_showCallback_m0BB9E0ADC76B27A0D9C9C6588BC691A893ACBDB7_inline (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_0 = __this->get_U3CshowCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * BannerLoadOptions_get_loadCallback_m743831D57DD7599102502E38CC01EB93716F1416_inline (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * __this, const RuntimeMethod* method)
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tE1163FF6D6E8405A4A523AAFCCCA2419AAFCD407 * L_0 = __this->get_U3CloadCallbackU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * BannerOptions_get_clickCallback_mD231FBBB7E4F404316A4F34D09ED7D0785DBE1F9_inline (BannerOptions_t52FF0BF1CB970705FEE42D6BFCC7175FEE69EAEF * __this, const RuntimeMethod* method)
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_tCEF1C6C80E76A709A366F31A69967CBC52C22CC2 * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mEB53968537A586DF1FF7D2DE6D770A8E78BDD85B_inline (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_m781ECE9DD222C1F5EC360D7C94B392944729F58C_inline (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, const RuntimeMethod* method)
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->get_m_MetaData_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_mE16CD7E5B6A4845EFDCEFF28C09732DDA4468D54_inline (MetaData_t6CBF0512BF7ECE74DA5677FAAB342EBD6CA7F4A0 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CcategoryU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mB851C1842B0F16524DFC05D0D3CF3517DD875905_inline (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method)
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->get_U3CNativePlatformU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_mE933CF1C25AEFFDDFBAB35A9907B82090A61D007_inline (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->get_U3CIsShowingU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m1B05282348387EE3157B9FD1E3E7F5C8503B09D3_inline (ShowOptions_t83AA812C4260AF8B3CCE3C38E192FA75FE2D718C * __this, const RuntimeMethod* method)
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m0AAE6CFB743D434BEC0AF71BB5902C1F8678D840_inline (Platform_t1473D1EC0A22C0FF0A3C1BF92CA2C16B41F3AC33 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CIsShowingU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * BannerLoadOptions_get_errorCallback_m0BD5ADA00F80C3B01988E58D7E802DCD90B3DBCE_inline (BannerLoadOptions_t8D9F54DF8BC2971598518644C934B501413D633F * __this, const RuntimeMethod* method)
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_t6A91D6992FC9657969BCFEE9A2BF9D9DA8EE6CE8 * L_0 = __this->get_U3CerrorCallbackU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
