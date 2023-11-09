#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<Spine.Bone,UnityEngine.Transform>
struct Dictionary_2_t3B4362284681C1F8285CAC54D8449E005B93F3C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_tF46BBFD2B39F05EA43825A1BD4B99EADEDE994D4;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Material>
struct Dictionary_2_t0EB522A36CBFB73E1DB8B66A87752EA513361ACD;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Texture>
struct Dictionary_2_t5BE8DFCD10ADA75C178B92A43A8FF7EE49D7E610;
// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh>
struct DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE;
// Spine.ExposedList`1<Spine.Animation>
struct ExposedList_1_t05C3DB7146AAFC91022372E09618489E9A255D7F;
// Spine.ExposedList`1<Spine.Bone>
struct ExposedList_1_t849594F8CC2D95E44660D7B3F2A8ED08A920EC76;
// Spine.ExposedList`1<Spine.BoneData>
struct ExposedList_1_t8AB80252C5BCE6B8A6A9C0098C944FC1A20830FF;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t2B9A8726FBAC69918D551BAAAA4E679883EE516E;
// Spine.ExposedList`1<Spine.EventData>
struct ExposedList_1_t508ADA5F8A7704859C2107E981798BA1484DCD9E;
// Spine.ExposedList`1<Spine.IUpdatable>
struct ExposedList_1_t71C5FB8B50C5DC6DB428B20CFD98F4D207B1BED1;
// Spine.ExposedList`1<Spine.IkConstraint>
struct ExposedList_1_tC99DB3CFE5976DE3F9E2C44BAB20AA8D8FDBA32C;
// Spine.ExposedList`1<Spine.IkConstraintData>
struct ExposedList_1_t8E5593D0177B15969E195039106DE69FCECA2F5B;
// Spine.ExposedList`1<System.Int32>
struct ExposedList_1_t78C35B13C09679E167D37A21B1793179083457D5;
// Spine.ExposedList`1<UnityEngine.Mesh>
struct ExposedList_1_t06E83C6B69FFBF51FF15EF7A1AB7CC9B674677A2;
// Spine.ExposedList`1<Spine.PathConstraint>
struct ExposedList_1_tE76122B92598756895B4778D125358BEFB5E1EAD;
// Spine.ExposedList`1<Spine.PathConstraintData>
struct ExposedList_1_tB5DF3CC22CDC499FB1A80B68A5D3C4614017FED3;
// Spine.ExposedList`1<System.Single>
struct ExposedList_1_tD73D23BD855506DEC8EFBB0A8EAA86A1F2053245;
// Spine.ExposedList`1<Spine.Skin>
struct ExposedList_1_tB3B714EFCBEF2468DFD394055159910792E45928;
// Spine.ExposedList`1<Spine.Slot>
struct ExposedList_1_t463A36CA55DF116E467973BD0102551B2820CDDD;
// Spine.ExposedList`1<Spine.SlotData>
struct ExposedList_1_tF3A893E298F714C9656A72BAFEE686BAC3300074;
// Spine.ExposedList`1<Spine.Timeline>
struct ExposedList_1_tA26A17A89AD06F765B3D726D420D4FAA58BE3F9F;
// Spine.ExposedList`1<Spine.TrackEntry>
struct ExposedList_1_t19DC027924CCEBF55B52280A831270C82F0F7B9E;
// Spine.ExposedList`1<Spine.TransformConstraint>
struct ExposedList_1_t6E388F5B49D56E0E710FEFC69AE31CC950CDB621;
// Spine.ExposedList`1<Spine.TransformConstraintData>
struct ExposedList_1_t79D5FAA1F444637DAF411F78F3D78BED9F176B8E;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.List`1<UnityEngine.CanvasRenderer>
struct List_1_tF927985772F2034B6D3251636D0EA26C950BE569;
// System.Collections.Generic.List`1<UnityEngine.UI.RawImage>
struct List_1_t8F8EC453709D820AD028F01D85A01A31FB4B1B52;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonDataModifierAsset>
struct List_1_tBFA73B26AF72BABC85549F091C4BA5A95B9FB412;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonPartsRenderer>
struct List_1_tD9D1A04ED640A1EE363F959C46F4C152DB3DE15A;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityBone>
struct List_1_tA96F485BCF1CDA91277B7C3C53431F88D4846B77;
// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityConstraint>
struct List_1_t19219D06C35340D087F011D8907FEC7F42FA7A04;
// System.Collections.Generic.List`1<Spine.Slot>
struct List_1_t75CC7DC5981BB1205F28E94CAC72B41781A3E0D4;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>
struct List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t2511ABDF24C6E1B959576D963729E5F88506C991;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Spine.Unity.AtlasAssetBase[]
struct AtlasAssetBaseU5BU5D_t6D8EAEA3267D1DFC3FBFAA3ECE699B48E92E5C82;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Spine.Event[]
struct EventU5BU5D_t1F3AC368F660BBC1A9874C694C498837AF4F414C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Joint[]
struct JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Spine.Unity.SkeletonUtilityBone[]
struct SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair[]
struct TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460;
// Spine.Animation
struct Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// Spine.Unity.AnimationReferenceAsset
struct AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658;
// Spine.AnimationState
struct AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC;
// Spine.AnimationStateData
struct AnimationStateData_t59A6A8CA553459E329D55049B38C027F09CA8D62;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Spine.Attachment
struct Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Spine.Unity.BlendModeMaterials
struct BlendModeMaterials_t3DA4B85DB36B60D661B6403BD49E7D62F56B81D8;
// Spine.Bone
struct Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5;
// Spine.BoneData
struct BoneData_t84F99F74AB40F657E1EB4C464E15811430305B7A;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Spine.Event
struct Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5;
// Spine.EventData
struct EventData_t0CB41981A14EA97459A419469AD9926522A59090;
// Spine.EventQueue
struct EventQueue_tD7A22C8477C3484CB82157A339353AD637C1704D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_tAB1DBE7086D7C605B1FBB7B4BED35F4BEED333F4;
// Spine.Unity.ISkeletonComponent
struct ISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// Spine.Unity.MeshGenerator
struct MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C;
// Spine.Unity.MeshGeneratorDelegate
struct MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Spine.Unity.MeshRendererBuffers
struct MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Spine.Skeleton
struct Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC;
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A;
// Spine.SkeletonData
struct SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F;
// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1;
// Spine.Unity.Examples.SkeletonRagdoll2D
struct SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04;
// Spine.Unity.SkeletonRenderSeparator
struct SkeletonRenderSeparator_t1DFE75BAF91824B87DD05D478D6F87CD4EBC5B8B;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A;
// Spine.Unity.SkeletonRendererInstruction
struct SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163;
// Spine.Unity.SkeletonUtility
struct SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37;
// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8;
// Spine.Unity.SkeletonUtilityConstraint
struct SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811;
// Spine.Unity.Examples.SkeletonUtilityEyeConstraint
struct SkeletonUtilityEyeConstraint_t067D714E6F16EA4BC09386ED88E94DBC49D1955E;
// Spine.Unity.Examples.SkeletonUtilityGroundConstraint
struct SkeletonUtilityGroundConstraint_tA025862E1902B86FD0D6695B58F6E5B1F0362EF6;
// Spine.Unity.Examples.SkeletonUtilityKinematicShadow
struct SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F;
// Spine.Skin
struct Skin_tD0213151BACA5300AF80D52F1DA6B95510F35B83;
// Spine.Slot
struct Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85;
// Spine.SlotData
struct SlotData_t2816203E3F6E61D19CD0F98B0654EBBF50E30BB1;
// Spine.Unity.Examples.SlotTintBlackFollower
struct SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2;
// Spine.Unity.Examples.SpawnFromSkeletonDataExample
struct SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA;
// Spine.Unity.Examples.SpawnSkeletonGraphicExample
struct SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC;
// Spine.Unity.Examples.SpineGauge
struct SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7;
// Spine.Unity.Examples.Spineboy
struct Spineboy_t6EF75A1A6479CF9DA839204EC4445788CE30C7EC;
// Spine.Unity.Examples.SpineboyBodyTilt
struct SpineboyBodyTilt_tA86B9E5596291C30A76E582C371FF9D384A39F23;
// Spine.Unity.Examples.SpineboyFacialExpression
struct SpineboyFacialExpression_t1BCBE093D4107CDD1265C1D7FB229D9270D40F2F;
// Spine.Unity.Examples.SpineboyFootplanter
struct SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B;
// Spine.Unity.Examples.SpineboyFreeze
struct SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64;
// Spine.Unity.Examples.SpineboyPole
struct SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140;
// Spine.Unity.Examples.SpineboyPoleGraphic
struct SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Spine.TrackEntry
struct TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D;
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C;
// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate
struct SkeletonRendererDelegate_tF00A46D09906FA01EB8DC11B3306FE0E7C3A8A1C;
// Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40
struct U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307;
// Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33
struct U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t751C3C0C3012ADBD85CD298FF1DCCDE3541B57B6;
// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate
struct SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7;
// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials
struct SpriteMaskInteractionMaterials_tF9C97C34FC619F4BCF4E47C16262899351C10720;
// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_tA7917FDB9162E48219AF21F12FA74AE0E30D8C9B;
// Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3
struct U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C;
// Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4
struct U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25;
// Spine.Unity.Examples.Spineboy/<>c
struct U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90;
// Spine.Unity.Examples.SpineboyFootplanter/Foot
struct Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D;
// Spine.Unity.Examples.SpineboyFootplanter/FootMovement
struct FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1;
// Spine.Unity.Examples.SpineboyFreeze/<Start>d__11
struct U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C;
// Spine.Unity.Examples.SpineboyPole/<Start>d__8
struct U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3;
// Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7
struct U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISkeletonAnimation_tAB1DBE7086D7C605B1FBB7B4BED35F4BEED333F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13773FFC88CA800F72BB50140243500ABFDE4268;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDCC2360F2B840BC2061BFEEC21E9EDB3054B68;
IL2CPP_EXTERN_C String_t* _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C;
IL2CPP_EXTERN_C String_t* _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral58F236ACD2A7E65E36BAA974D5D2BD152D5EFEC0;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE4FCD96A722FB333BA1D23168580B819449F8C;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C74FD88D189B11B7B007C69CEC78065841B65C9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B;
IL2CPP_EXTERN_C String_t* _stringLiteralBE472AFC0F9FAB822C9437747F78C8F1D8A2C154;
IL2CPP_EXTERN_C String_t* _stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_m27386C0ED21D919FD771CF9F965542CBFE70DDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mC72551764335C8C6C034460ECAE5DFF2C3061251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_mD5B2A70E32A65D808C2D77C410BDF8DAD959F6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F_mC107046C353818A60ABC78D38AF86B1E1FDE78E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_m9D356FDF7DEF54C642A6CF760F64BF6B5BDF8968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_m2AC5A35EFC2CCDD11338367F923BF9E3904205D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpineboyBodyTilt_UpdateLocal_mD78E0BBE6CE0238D03DEE999EB883ADC8DC5312D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpineboyFootplanter_UpdateLocal_m53DCAC522943DB90CC5A0400D707A1F406021B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spineboy_HandleEvent_m1FE03350D5280ABB5913F4F17D583A94233CACE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMixCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_m70E2829069F96955D4D4912C28E9512CA852C40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__11_System_Collections_IEnumerator_Reset_m79D58AE6D0CEEC558DAFA7A0F8D107C5A6CF09B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__33_System_Collections_IEnumerator_Reset_mC3C668003B9668329526657DCE800D51C89EC6D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m402C0DB882324A6145F263E2B05742BFEB5F66D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mC8A5CEF06E9693177259AFF96A85D54F8DBEC3C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__7_System_Collections_IEnumerator_Reset_m2275EA63E789B52B71D78A3572703FEBDB555FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m0EC14872DA4560C37AD1A0C8D03468AB79A5C8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_m6BAD2B56ADD615B58BB4F90118364CC42BB0E473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
struct JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
struct SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t2B9A8726FBAC69918D551BAAAA4E679883EE516E  : public RuntimeObject
{
	// T[] Spine.ExposedList`1::Items
	EventU5BU5D_t1F3AC368F660BBC1A9874C694C498837AF4F414C* ___Items_0;
	// System.Int32 Spine.ExposedList`1::Count
	int32_t ___Count_1;
	// System.Int32 Spine.ExposedList`1::version
	int32_t ___version_4;
};

// System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>
struct List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Spine.Animation
struct Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62  : public RuntimeObject
{
	// System.String Spine.Animation::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.Timeline> Spine.Animation::timelines
	ExposedList_1_tA26A17A89AD06F765B3D726D420D4FAA58BE3F9F* ___timelines_1;
	// System.Collections.Generic.HashSet`1<System.Int32> Spine.Animation::timelineIds
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___timelineIds_2;
	// System.Single Spine.Animation::duration
	float ___duration_3;
};

// Spine.AnimationState
struct AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC  : public RuntimeObject
{
	// Spine.AnimationStateData Spine.AnimationState::data
	AnimationStateData_t59A6A8CA553459E329D55049B38C027F09CA8D62* ___data_8;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.AnimationState::tracks
	ExposedList_1_t19DC027924CCEBF55B52280A831270C82F0F7B9E* ___tracks_9;
	// Spine.ExposedList`1<Spine.Event> Spine.AnimationState::events
	ExposedList_1_t2B9A8726FBAC69918D551BAAAA4E679883EE516E* ___events_10;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Start
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Start_11;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Interrupt
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Interrupt_12;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::End
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___End_13;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Dispose
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Dispose_14;
	// Spine.AnimationState/TrackEntryDelegate Spine.AnimationState::Complete
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Complete_15;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.AnimationState::Event
	TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3* ___Event_16;
	// Spine.EventQueue Spine.AnimationState::queue
	EventQueue_tD7A22C8477C3484CB82157A339353AD637C1704D* ___queue_17;
	// System.Collections.Generic.HashSet`1<System.Int32> Spine.AnimationState::propertyIDs
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___propertyIDs_18;
	// System.Boolean Spine.AnimationState::animationsChanged
	bool ___animationsChanged_19;
	// System.Single Spine.AnimationState::timeScale
	float ___timeScale_20;
	// System.Int32 Spine.AnimationState::unkeyedState
	int32_t ___unkeyedState_21;
	// Spine.Pool`1<Spine.TrackEntry> Spine.AnimationState::trackEntryPool
	Pool_1_t2511ABDF24C6E1B959576D963729E5F88506C991* ___trackEntryPool_22;
};

// Spine.Attachment
struct Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204  : public RuntimeObject
{
	// System.String Spine.Attachment::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// Spine.Bone
struct Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5  : public RuntimeObject
{
	// Spine.BoneData Spine.Bone::data
	BoneData_t84F99F74AB40F657E1EB4C464E15811430305B7A* ___data_1;
	// Spine.Skeleton Spine.Bone::skeleton
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* ___skeleton_2;
	// Spine.Bone Spine.Bone::parent
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___parent_3;
	// Spine.ExposedList`1<Spine.Bone> Spine.Bone::children
	ExposedList_1_t849594F8CC2D95E44660D7B3F2A8ED08A920EC76* ___children_4;
	// System.Single Spine.Bone::x
	float ___x_5;
	// System.Single Spine.Bone::y
	float ___y_6;
	// System.Single Spine.Bone::rotation
	float ___rotation_7;
	// System.Single Spine.Bone::scaleX
	float ___scaleX_8;
	// System.Single Spine.Bone::scaleY
	float ___scaleY_9;
	// System.Single Spine.Bone::shearX
	float ___shearX_10;
	// System.Single Spine.Bone::shearY
	float ___shearY_11;
	// System.Single Spine.Bone::ax
	float ___ax_12;
	// System.Single Spine.Bone::ay
	float ___ay_13;
	// System.Single Spine.Bone::arotation
	float ___arotation_14;
	// System.Single Spine.Bone::ascaleX
	float ___ascaleX_15;
	// System.Single Spine.Bone::ascaleY
	float ___ascaleY_16;
	// System.Single Spine.Bone::ashearX
	float ___ashearX_17;
	// System.Single Spine.Bone::ashearY
	float ___ashearY_18;
	// System.Boolean Spine.Bone::appliedValid
	bool ___appliedValid_19;
	// System.Single Spine.Bone::a
	float ___a_20;
	// System.Single Spine.Bone::b
	float ___b_21;
	// System.Single Spine.Bone::worldX
	float ___worldX_22;
	// System.Single Spine.Bone::c
	float ___c_23;
	// System.Single Spine.Bone::d
	float ___d_24;
	// System.Single Spine.Bone::worldY
	float ___worldY_25;
	// System.Boolean Spine.Bone::sorted
	bool ___sorted_26;
	// System.Boolean Spine.Bone::active
	bool ___active_27;
};

// Spine.Event
struct Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5  : public RuntimeObject
{
	// Spine.EventData Spine.Event::data
	EventData_t0CB41981A14EA97459A419469AD9926522A59090* ___data_0;
	// System.Single Spine.Event::time
	float ___time_1;
	// System.Int32 Spine.Event::intValue
	int32_t ___intValue_2;
	// System.Single Spine.Event::floatValue
	float ___floatValue_3;
	// System.String Spine.Event::stringValue
	String_t* ___stringValue_4;
	// System.Single Spine.Event::volume
	float ___volume_5;
	// System.Single Spine.Event::balance
	float ___balance_6;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Spine.Skeleton
struct Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC  : public RuntimeObject
{
	// Spine.SkeletonData Spine.Skeleton::data
	SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* ___data_0;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::bones
	ExposedList_1_t849594F8CC2D95E44660D7B3F2A8ED08A920EC76* ___bones_1;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::slots
	ExposedList_1_t463A36CA55DF116E467973BD0102551B2820CDDD* ___slots_2;
	// Spine.ExposedList`1<Spine.Slot> Spine.Skeleton::drawOrder
	ExposedList_1_t463A36CA55DF116E467973BD0102551B2820CDDD* ___drawOrder_3;
	// Spine.ExposedList`1<Spine.IkConstraint> Spine.Skeleton::ikConstraints
	ExposedList_1_tC99DB3CFE5976DE3F9E2C44BAB20AA8D8FDBA32C* ___ikConstraints_4;
	// Spine.ExposedList`1<Spine.TransformConstraint> Spine.Skeleton::transformConstraints
	ExposedList_1_t6E388F5B49D56E0E710FEFC69AE31CC950CDB621* ___transformConstraints_5;
	// Spine.ExposedList`1<Spine.PathConstraint> Spine.Skeleton::pathConstraints
	ExposedList_1_tE76122B92598756895B4778D125358BEFB5E1EAD* ___pathConstraints_6;
	// Spine.ExposedList`1<Spine.IUpdatable> Spine.Skeleton::updateCache
	ExposedList_1_t71C5FB8B50C5DC6DB428B20CFD98F4D207B1BED1* ___updateCache_7;
	// Spine.ExposedList`1<Spine.Bone> Spine.Skeleton::updateCacheReset
	ExposedList_1_t849594F8CC2D95E44660D7B3F2A8ED08A920EC76* ___updateCacheReset_8;
	// Spine.Skin Spine.Skeleton::skin
	Skin_tD0213151BACA5300AF80D52F1DA6B95510F35B83* ___skin_9;
	// System.Single Spine.Skeleton::r
	float ___r_10;
	// System.Single Spine.Skeleton::g
	float ___g_11;
	// System.Single Spine.Skeleton::b
	float ___b_12;
	// System.Single Spine.Skeleton::a
	float ___a_13;
	// System.Single Spine.Skeleton::time
	float ___time_14;
	// System.Single Spine.Skeleton::scaleX
	float ___scaleX_15;
	// System.Single Spine.Skeleton::scaleY
	float ___scaleY_16;
	// System.Single Spine.Skeleton::x
	float ___x_17;
	// System.Single Spine.Skeleton::y
	float ___y_18;
};

// Spine.SkeletonData
struct SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B  : public RuntimeObject
{
	// System.String Spine.SkeletonData::name
	String_t* ___name_0;
	// Spine.ExposedList`1<Spine.BoneData> Spine.SkeletonData::bones
	ExposedList_1_t8AB80252C5BCE6B8A6A9C0098C944FC1A20830FF* ___bones_1;
	// Spine.ExposedList`1<Spine.SlotData> Spine.SkeletonData::slots
	ExposedList_1_tF3A893E298F714C9656A72BAFEE686BAC3300074* ___slots_2;
	// Spine.ExposedList`1<Spine.Skin> Spine.SkeletonData::skins
	ExposedList_1_tB3B714EFCBEF2468DFD394055159910792E45928* ___skins_3;
	// Spine.Skin Spine.SkeletonData::defaultSkin
	Skin_tD0213151BACA5300AF80D52F1DA6B95510F35B83* ___defaultSkin_4;
	// Spine.ExposedList`1<Spine.EventData> Spine.SkeletonData::events
	ExposedList_1_t508ADA5F8A7704859C2107E981798BA1484DCD9E* ___events_5;
	// Spine.ExposedList`1<Spine.Animation> Spine.SkeletonData::animations
	ExposedList_1_t05C3DB7146AAFC91022372E09618489E9A255D7F* ___animations_6;
	// Spine.ExposedList`1<Spine.IkConstraintData> Spine.SkeletonData::ikConstraints
	ExposedList_1_t8E5593D0177B15969E195039106DE69FCECA2F5B* ___ikConstraints_7;
	// Spine.ExposedList`1<Spine.TransformConstraintData> Spine.SkeletonData::transformConstraints
	ExposedList_1_t79D5FAA1F444637DAF411F78F3D78BED9F176B8E* ___transformConstraints_8;
	// Spine.ExposedList`1<Spine.PathConstraintData> Spine.SkeletonData::pathConstraints
	ExposedList_1_tB5DF3CC22CDC499FB1A80B68A5D3C4614017FED3* ___pathConstraints_9;
	// System.Single Spine.SkeletonData::x
	float ___x_10;
	// System.Single Spine.SkeletonData::y
	float ___y_11;
	// System.Single Spine.SkeletonData::width
	float ___width_12;
	// System.Single Spine.SkeletonData::height
	float ___height_13;
	// System.String Spine.SkeletonData::version
	String_t* ___version_14;
	// System.String Spine.SkeletonData::hash
	String_t* ___hash_15;
	// System.Single Spine.SkeletonData::fps
	float ___fps_16;
	// System.String Spine.SkeletonData::imagesPath
	String_t* ___imagesPath_17;
	// System.String Spine.SkeletonData::audioPath
	String_t* ___audioPath_18;
};

// Spine.Slot
struct Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85  : public RuntimeObject
{
	// Spine.SlotData Spine.Slot::data
	SlotData_t2816203E3F6E61D19CD0F98B0654EBBF50E30BB1* ___data_0;
	// Spine.Bone Spine.Slot::bone
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___bone_1;
	// System.Single Spine.Slot::r
	float ___r_2;
	// System.Single Spine.Slot::g
	float ___g_3;
	// System.Single Spine.Slot::b
	float ___b_4;
	// System.Single Spine.Slot::a
	float ___a_5;
	// System.Single Spine.Slot::r2
	float ___r2_6;
	// System.Single Spine.Slot::g2
	float ___g2_7;
	// System.Single Spine.Slot::b2
	float ___b2_8;
	// System.Boolean Spine.Slot::hasSecondColor
	bool ___hasSecondColor_9;
	// Spine.Attachment Spine.Slot::attachment
	Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* ___attachment_10;
	// System.Single Spine.Slot::attachmentTime
	float ___attachmentTime_11;
	// Spine.ExposedList`1<System.Single> Spine.Slot::deform
	ExposedList_1_tD73D23BD855506DEC8EFBB0A8EAA86A1F2053245* ___deform_12;
	// System.Int32 Spine.Slot::attachmentState
	int32_t ___attachmentState_13;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Spine.TrackEntry
struct TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB  : public RuntimeObject
{
	// Spine.Animation Spine.TrackEntry::animation
	Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___animation_0;
	// Spine.TrackEntry Spine.TrackEntry::next
	TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* ___next_1;
	// Spine.TrackEntry Spine.TrackEntry::mixingFrom
	TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* ___mixingFrom_2;
	// Spine.TrackEntry Spine.TrackEntry::mixingTo
	TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* ___mixingTo_3;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Start
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Start_4;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Interrupt
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Interrupt_5;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::End
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___End_6;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Dispose
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Dispose_7;
	// Spine.AnimationState/TrackEntryDelegate Spine.TrackEntry::Complete
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___Complete_8;
	// Spine.AnimationState/TrackEntryEventDelegate Spine.TrackEntry::Event
	TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3* ___Event_9;
	// System.Int32 Spine.TrackEntry::trackIndex
	int32_t ___trackIndex_10;
	// System.Boolean Spine.TrackEntry::loop
	bool ___loop_11;
	// System.Boolean Spine.TrackEntry::holdPrevious
	bool ___holdPrevious_12;
	// System.Single Spine.TrackEntry::eventThreshold
	float ___eventThreshold_13;
	// System.Single Spine.TrackEntry::attachmentThreshold
	float ___attachmentThreshold_14;
	// System.Single Spine.TrackEntry::drawOrderThreshold
	float ___drawOrderThreshold_15;
	// System.Single Spine.TrackEntry::animationStart
	float ___animationStart_16;
	// System.Single Spine.TrackEntry::animationEnd
	float ___animationEnd_17;
	// System.Single Spine.TrackEntry::animationLast
	float ___animationLast_18;
	// System.Single Spine.TrackEntry::nextAnimationLast
	float ___nextAnimationLast_19;
	// System.Single Spine.TrackEntry::delay
	float ___delay_20;
	// System.Single Spine.TrackEntry::trackTime
	float ___trackTime_21;
	// System.Single Spine.TrackEntry::trackLast
	float ___trackLast_22;
	// System.Single Spine.TrackEntry::nextTrackLast
	float ___nextTrackLast_23;
	// System.Single Spine.TrackEntry::trackEnd
	float ___trackEnd_24;
	// System.Single Spine.TrackEntry::timeScale
	float ___timeScale_25;
	// System.Single Spine.TrackEntry::alpha
	float ___alpha_26;
	// System.Single Spine.TrackEntry::mixTime
	float ___mixTime_27;
	// System.Single Spine.TrackEntry::mixDuration
	float ___mixDuration_28;
	// System.Single Spine.TrackEntry::interruptAlpha
	float ___interruptAlpha_29;
	// System.Single Spine.TrackEntry::totalAlpha
	float ___totalAlpha_30;
	// Spine.MixBlend Spine.TrackEntry::mixBlend
	int32_t ___mixBlend_31;
	// Spine.ExposedList`1<System.Int32> Spine.TrackEntry::timelineMode
	ExposedList_1_t78C35B13C09679E167D37A21B1793179083457D5* ___timelineMode_32;
	// Spine.ExposedList`1<Spine.TrackEntry> Spine.TrackEntry::timelineHoldMix
	ExposedList_1_t19DC027924CCEBF55B52280A831270C82F0F7B9E* ___timelineHoldMix_33;
	// Spine.ExposedList`1<System.Single> Spine.TrackEntry::timelinesRotation
	ExposedList_1_tD73D23BD855506DEC8EFBB0A8EAA86A1F2053245* ___timelinesRotation_34;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Spine.Unity.WaitForSpineAnimation
struct WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6  : public RuntimeObject
{
	// System.Boolean Spine.Unity.WaitForSpineAnimation::m_WasFired
	bool ___m_WasFired_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40
struct U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SkeletonRagdoll2D Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::<>4__this
	SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* ___U3CU3E4__this_2;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::target
	float ___target_3;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::duration
	float ___duration_4;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::<startTime>5__2
	float ___U3CstartTimeU3E5__2_5;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::<startMix>5__3
	float ___U3CstartMixU3E5__3_6;
};

// Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33
struct U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SkeletonRagdoll2D Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::<>4__this
	SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* ___U3CU3E4__this_2;
};

// Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3
struct U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SpawnFromSkeletonDataExample Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::<>4__this
	SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* ___U3CU3E4__this_2;
	// Spine.Animation Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::<spineAnimation>5__2
	Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___U3CspineAnimationU3E5__2_3;
	// System.Int32 Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::<i>5__3
	int32_t ___U3CiU3E5__3_4;
};

// Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4
struct U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SpawnSkeletonGraphicExample Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::<>4__this
	SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* ___U3CU3E4__this_2;
};

// Spine.Unity.Examples.Spineboy/<>c
struct U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90  : public RuntimeObject
{
};

// Spine.Unity.Examples.SpineboyFootplanter/FootMovement
struct FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1  : public RuntimeObject
{
	// UnityEngine.AnimationCurve Spine.Unity.Examples.SpineboyFootplanter/FootMovement::xMoveCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___xMoveCurve_0;
	// UnityEngine.AnimationCurve Spine.Unity.Examples.SpineboyFootplanter/FootMovement::raiseCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___raiseCurve_1;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter/FootMovement::maxRaise
	float ___maxRaise_2;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter/FootMovement::minDistanceCompensate
	float ___minDistanceCompensate_3;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter/FootMovement::maxDistanceCompensate
	float ___maxDistanceCompensate_4;
};

// Spine.Unity.Examples.SpineboyFreeze/<Start>d__11
struct U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SpineboyFreeze Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::<>4__this
	SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* ___U3CU3E4__this_2;
	// Spine.AnimationState Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::<state>5__2
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* ___U3CstateU3E5__2_3;
};

// Spine.Unity.Examples.SpineboyPole/<Start>d__8
struct U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SpineboyPole/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SpineboyPole/<Start>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SpineboyPole Spine.Unity.Examples.SpineboyPole/<Start>d__8::<>4__this
	SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* ___U3CU3E4__this_2;
	// Spine.AnimationState Spine.Unity.Examples.SpineboyPole/<Start>d__8::<state>5__2
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* ___U3CstateU3E5__2_3;
};

// Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7
struct U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069  : public RuntimeObject
{
	// System.Int32 Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Spine.Unity.Examples.SpineboyPoleGraphic Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::<>4__this
	SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* ___U3CU3E4__this_2;
	// Spine.AnimationState Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::<state>5__2
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* ___U3CstateU3E5__2_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Spine.Unity.WaitForSpineAnimationComplete
struct WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D  : public WaitForSpineAnimation_tF03A77C3E2EC00252F9DD8DEFA4CE09268D349B6
{
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
struct TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E 
{
	// UnityEngine.Transform Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair::dest
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dest_0;
	// UnityEngine.Transform Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair::src
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src_1;
};
// Native definition for P/Invoke marshalling of Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
struct TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dest_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src_1;
};
// Native definition for COM marshalling of Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
struct TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___dest_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___src_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 
{
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Spine.Unity.Examples.SpineboyFootplanter/Foot
struct Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D  : public RuntimeObject
{
	// UnityEngine.Vector2 Spine.Unity.Examples.SpineboyFootplanter/Foot::worldPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldPos_0;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter/Foot::displacementFromCenter
	float ___displacementFromCenter_1;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter/Foot::distanceFromCenter
	float ___distanceFromCenter_2;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter/Foot::lerp
	float ___lerp_3;
	// UnityEngine.Vector2 Spine.Unity.Examples.SpineboyFootplanter/Foot::worldPosPrev
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldPosPrev_4;
	// UnityEngine.Vector2 Spine.Unity.Examples.SpineboyFootplanter/Foot::worldPosNext
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldPosNext_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Spine.Unity.AnimationReferenceAsset
struct AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Spine.Unity.SkeletonDataAsset Spine.Unity.AnimationReferenceAsset::skeletonDataAsset
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset_5;
	// System.String Spine.Unity.AnimationReferenceAsset::animationName
	String_t* ___animationName_6;
	// Spine.Animation Spine.Unity.AnimationReferenceAsset::animation
	Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___animation_7;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Spine.Unity.AtlasAssetBase[] Spine.Unity.SkeletonDataAsset::atlasAssets
	AtlasAssetBaseU5BU5D_t6D8EAEA3267D1DFC3FBFAA3ECE699B48E92E5C82* ___atlasAssets_4;
	// System.Single Spine.Unity.SkeletonDataAsset::scale
	float ___scale_5;
	// UnityEngine.TextAsset Spine.Unity.SkeletonDataAsset::skeletonJSON
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___skeletonJSON_6;
	// System.Boolean Spine.Unity.SkeletonDataAsset::isUpgradingBlendModeMaterials
	bool ___isUpgradingBlendModeMaterials_7;
	// Spine.Unity.BlendModeMaterials Spine.Unity.SkeletonDataAsset::blendModeMaterials
	BlendModeMaterials_t3DA4B85DB36B60D661B6403BD49E7D62F56B81D8* ___blendModeMaterials_8;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonDataModifierAsset> Spine.Unity.SkeletonDataAsset::skeletonDataModifiers
	List_1_tBFA73B26AF72BABC85549F091C4BA5A95B9FB412* ___skeletonDataModifiers_9;
	// System.String[] Spine.Unity.SkeletonDataAsset::fromAnimation
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___fromAnimation_10;
	// System.String[] Spine.Unity.SkeletonDataAsset::toAnimation
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___toAnimation_11;
	// System.Single[] Spine.Unity.SkeletonDataAsset::duration
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___duration_12;
	// System.Single Spine.Unity.SkeletonDataAsset::defaultMix
	float ___defaultMix_13;
	// UnityEngine.RuntimeAnimatorController Spine.Unity.SkeletonDataAsset::controller
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___controller_14;
	// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::skeletonData
	SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* ___skeletonData_15;
	// Spine.AnimationStateData Spine.Unity.SkeletonDataAsset::stateData
	AnimationStateData_t59A6A8CA553459E329D55049B38C027F09CA8D62* ___stateData_16;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD  : public MulticastDelegate_t
{
};

// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C  : public MulticastDelegate_t
{
};

// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3  : public MulticastDelegate_t
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Spine.Unity.Examples.SkeletonRagdoll2D
struct SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Spine.Unity.Examples.SkeletonRagdoll2D::startingBoneName
	String_t* ___startingBoneName_5;
	// System.Collections.Generic.List`1<System.String> Spine.Unity.Examples.SkeletonRagdoll2D::stopBoneNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___stopBoneNames_6;
	// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D::applyOnStart
	bool ___applyOnStart_7;
	// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D::disableIK
	bool ___disableIK_8;
	// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D::disableOtherConstraints
	bool ___disableOtherConstraints_9;
	// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D::pinStartBone
	bool ___pinStartBone_10;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D::gravityScale
	float ___gravityScale_11;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D::thickness
	float ___thickness_12;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D::rotationLimit
	float ___rotationLimit_13;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D::rootMass
	float ___rootMass_14;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D::massFalloffFactor
	float ___massFalloffFactor_15;
	// System.Int32 Spine.Unity.Examples.SkeletonRagdoll2D::colliderLayer
	int32_t ___colliderLayer_16;
	// System.Single Spine.Unity.Examples.SkeletonRagdoll2D::mix
	float ___mix_17;
	// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D::oldRagdollBehaviour
	bool ___oldRagdollBehaviour_18;
	// Spine.Unity.ISkeletonAnimation Spine.Unity.Examples.SkeletonRagdoll2D::targetSkeletonComponent
	RuntimeObject* ___targetSkeletonComponent_19;
	// Spine.Skeleton Spine.Unity.Examples.SkeletonRagdoll2D::skeleton
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* ___skeleton_20;
	// System.Collections.Generic.Dictionary`2<Spine.Bone,UnityEngine.Transform> Spine.Unity.Examples.SkeletonRagdoll2D::boneTable
	Dictionary_2_t3B4362284681C1F8285CAC54D8449E005B93F3C0* ___boneTable_21;
	// UnityEngine.Transform Spine.Unity.Examples.SkeletonRagdoll2D::ragdollRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ragdollRoot_22;
	// UnityEngine.Rigidbody2D Spine.Unity.Examples.SkeletonRagdoll2D::<RootRigidbody>k__BackingField
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___U3CRootRigidbodyU3Ek__BackingField_23;
	// Spine.Bone Spine.Unity.Examples.SkeletonRagdoll2D::<StartingBone>k__BackingField
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___U3CStartingBoneU3Ek__BackingField_24;
	// UnityEngine.Vector2 Spine.Unity.Examples.SkeletonRagdoll2D::rootOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rootOffset_25;
	// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D::isActive
	bool ___isActive_26;
};

// Spine.Unity.SkeletonRenderSeparator
struct SkeletonRenderSeparator_t1DFE75BAF91824B87DD05D478D6F87CD4EBC5B8B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonRenderer Spine.Unity.SkeletonRenderSeparator::skeletonRenderer
	SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* ___skeletonRenderer_5;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderSeparator::mainMeshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___mainMeshRenderer_6;
	// System.Boolean Spine.Unity.SkeletonRenderSeparator::copyPropertyBlock
	bool ___copyPropertyBlock_7;
	// System.Boolean Spine.Unity.SkeletonRenderSeparator::copyMeshRendererFlags
	bool ___copyMeshRendererFlags_8;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonPartsRenderer> Spine.Unity.SkeletonRenderSeparator::partsRenderers
	List_1_tD9D1A04ED640A1EE363F959C46F4C152DB3DE15A* ___partsRenderers_9;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderSeparator::OnMeshAndMaterialsUpdated
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnMeshAndMaterialsUpdated_10;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.SkeletonRenderSeparator::copiedBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___copiedBlock_11;
};

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::skeletonDataAsset
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset_4;
	// System.String Spine.Unity.SkeletonRenderer::initialSkinName
	String_t* ___initialSkinName_5;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipX
	bool ___initialFlipX_6;
	// System.Boolean Spine.Unity.SkeletonRenderer::initialFlipY
	bool ___initialFlipY_7;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonRenderer::updateMode
	int32_t ___updateMode_8;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonRenderer::updateWhenInvisible
	int32_t ___updateWhenInvisible_9;
	// System.String[] Spine.Unity.SkeletonRenderer::separatorSlotNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separatorSlotNames_10;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonRenderer::separatorSlots
	List_1_t75CC7DC5981BB1205F28E94CAC72B41781A3E0D4* ___separatorSlots_11;
	// System.Single Spine.Unity.SkeletonRenderer::zSpacing
	float ___zSpacing_12;
	// System.Boolean Spine.Unity.SkeletonRenderer::useClipping
	bool ___useClipping_13;
	// System.Boolean Spine.Unity.SkeletonRenderer::immutableTriangles
	bool ___immutableTriangles_14;
	// System.Boolean Spine.Unity.SkeletonRenderer::pmaVertexColors
	bool ___pmaVertexColors_15;
	// System.Boolean Spine.Unity.SkeletonRenderer::clearStateOnDisable
	bool ___clearStateOnDisable_16;
	// System.Boolean Spine.Unity.SkeletonRenderer::tintBlack
	bool ___tintBlack_17;
	// System.Boolean Spine.Unity.SkeletonRenderer::singleSubmesh
	bool ___singleSubmesh_18;
	// System.Boolean Spine.Unity.SkeletonRenderer::fixDrawOrder
	bool ___fixDrawOrder_19;
	// System.Boolean Spine.Unity.SkeletonRenderer::addNormals
	bool ___addNormals_20;
	// System.Boolean Spine.Unity.SkeletonRenderer::calculateTangents
	bool ___calculateTangents_21;
	// UnityEngine.SpriteMaskInteraction Spine.Unity.SkeletonRenderer::maskInteraction
	int32_t ___maskInteraction_22;
	// Spine.Unity.SkeletonRenderer/SpriteMaskInteractionMaterials Spine.Unity.SkeletonRenderer::maskMaterials
	SpriteMaskInteractionMaterials_tF9C97C34FC619F4BCF4E47C16262899351C10720* ___maskMaterials_23;
	// System.Boolean Spine.Unity.SkeletonRenderer::disableRenderingOnOverride
	bool ___disableRenderingOnOverride_28;
	// Spine.Unity.SkeletonRenderer/InstructionDelegate Spine.Unity.SkeletonRenderer::generateMeshOverride
	InstructionDelegate_t751C3C0C3012ADBD85CD298FF1DCCDE3541B57B6* ___generateMeshOverride_29;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonRenderer::OnPostProcessVertices
	MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B* ___OnPostProcessVertices_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customMaterialOverride
	Dictionary_2_t7B0F5D63DDA1E532530982C8043F0A132FF9745F* ___customMaterialOverride_31;
	// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::customSlotMaterials
	Dictionary_2_tF46BBFD2B39F05EA43825A1BD4B99EADEDE994D4* ___customSlotMaterials_32;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonRenderer::currentInstructions
	SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___currentInstructions_33;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonRenderer::meshGenerator
	MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C* ___meshGenerator_34;
	// Spine.Unity.MeshRendererBuffers Spine.Unity.SkeletonRenderer::rendererBuffers
	MeshRendererBuffers_tB9308AD2A53E8B70963EF29DBF88716A6BBE567B* ___rendererBuffers_35;
	// UnityEngine.MeshRenderer Spine.Unity.SkeletonRenderer::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_36;
	// UnityEngine.MeshFilter Spine.Unity.SkeletonRenderer::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_37;
	// System.Boolean Spine.Unity.SkeletonRenderer::valid
	bool ___valid_38;
	// Spine.Skeleton Spine.Unity.SkeletonRenderer::skeleton
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* ___skeleton_39;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnRebuild
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnRebuild_40;
	// Spine.Unity.SkeletonRenderer/SkeletonRendererDelegate Spine.Unity.SkeletonRenderer::OnMeshAndMaterialsUpdated
	SkeletonRendererDelegate_t8DAF5E58107FFA0E1E02F3869D004088226BF4F7* ___OnMeshAndMaterialsUpdated_41;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.SkeletonRenderer::reusedPropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___reusedPropertyBlock_42;
};

// Spine.Unity.SkeletonUtility
struct SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate Spine.Unity.SkeletonUtility::OnReset
	SkeletonUtilityDelegate_tA7917FDB9162E48219AF21F12FA74AE0E30D8C9B* ___OnReset_4;
	// UnityEngine.Transform Spine.Unity.SkeletonUtility::boneRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___boneRoot_5;
	// System.Boolean Spine.Unity.SkeletonUtility::flipBy180DegreeRotation
	bool ___flipBy180DegreeRotation_6;
	// Spine.Unity.SkeletonRenderer Spine.Unity.SkeletonUtility::skeletonRenderer
	SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* ___skeletonRenderer_7;
	// Spine.Unity.SkeletonGraphic Spine.Unity.SkeletonUtility::skeletonGraphic
	SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* ___skeletonGraphic_8;
	// UnityEngine.Canvas Spine.Unity.SkeletonUtility::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_9;
	// Spine.Unity.ISkeletonAnimation Spine.Unity.SkeletonUtility::skeletonAnimation
	RuntimeObject* ___skeletonAnimation_10;
	// Spine.Unity.ISkeletonComponent Spine.Unity.SkeletonUtility::skeletonComponent
	RuntimeObject* ___skeletonComponent_11;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityBone> Spine.Unity.SkeletonUtility::boneComponents
	List_1_tA96F485BCF1CDA91277B7C3C53431F88D4846B77* ___boneComponents_12;
	// System.Collections.Generic.List`1<Spine.Unity.SkeletonUtilityConstraint> Spine.Unity.SkeletonUtility::constraintComponents
	List_1_t19219D06C35340D087F011D8907FEC7F42FA7A04* ___constraintComponents_13;
	// System.Single Spine.Unity.SkeletonUtility::positionScale
	float ___positionScale_14;
	// System.Boolean Spine.Unity.SkeletonUtility::hasOverrideBones
	bool ___hasOverrideBones_15;
	// System.Boolean Spine.Unity.SkeletonUtility::hasConstraints
	bool ___hasConstraints_16;
	// System.Boolean Spine.Unity.SkeletonUtility::needToReprocessBones
	bool ___needToReprocessBones_17;
};

// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Spine.Unity.SkeletonUtilityBone::boneName
	String_t* ___boneName_4;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::parentReference
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentReference_5;
	// Spine.Unity.SkeletonUtilityBone/Mode Spine.Unity.SkeletonUtilityBone::mode
	int32_t ___mode_6;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::position
	bool ___position_7;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::rotation
	bool ___rotation_8;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::scale
	bool ___scale_9;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::zPosition
	bool ___zPosition_10;
	// System.Single Spine.Unity.SkeletonUtilityBone::overrideAlpha
	float ___overrideAlpha_11;
	// Spine.Unity.SkeletonUtility Spine.Unity.SkeletonUtilityBone::hierarchy
	SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* ___hierarchy_12;
	// Spine.Bone Spine.Unity.SkeletonUtilityBone::bone
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___bone_13;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::transformLerpComplete
	bool ___transformLerpComplete_14;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::valid
	bool ___valid_15;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::cachedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedTransform_16;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::skeletonTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___skeletonTransform_17;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::incompatibleTransformMode
	bool ___incompatibleTransformMode_18;
};

// Spine.Unity.SkeletonUtilityConstraint
struct SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonUtilityBone Spine.Unity.SkeletonUtilityConstraint::bone
	SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* ___bone_4;
	// Spine.Unity.SkeletonUtility Spine.Unity.SkeletonUtilityConstraint::hierarchy
	SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* ___hierarchy_5;
};

// Spine.Unity.Examples.SkeletonUtilityKinematicShadow
struct SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Spine.Unity.Examples.SkeletonUtilityKinematicShadow::detachedShadow
	bool ___detachedShadow_4;
	// UnityEngine.Transform Spine.Unity.Examples.SkeletonUtilityKinematicShadow::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_5;
	// System.Boolean Spine.Unity.Examples.SkeletonUtilityKinematicShadow::hideShadow
	bool ___hideShadow_6;
	// Spine.Unity.Examples.SkeletonUtilityKinematicShadow/PhysicsSystem Spine.Unity.Examples.SkeletonUtilityKinematicShadow::physicsSystem
	int32_t ___physicsSystem_7;
	// UnityEngine.GameObject Spine.Unity.Examples.SkeletonUtilityKinematicShadow::shadowRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shadowRoot_8;
	// System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair> Spine.Unity.Examples.SkeletonUtilityKinematicShadow::shadowTable
	List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* ___shadowTable_9;
};

// Spine.Unity.Examples.SlotTintBlackFollower
struct SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Spine.Unity.Examples.SlotTintBlackFollower::slotName
	String_t* ___slotName_4;
	// System.String Spine.Unity.Examples.SlotTintBlackFollower::colorPropertyName
	String_t* ___colorPropertyName_5;
	// System.String Spine.Unity.Examples.SlotTintBlackFollower::blackPropertyName
	String_t* ___blackPropertyName_6;
	// Spine.Slot Spine.Unity.Examples.SlotTintBlackFollower::slot
	Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* ___slot_7;
	// UnityEngine.MeshRenderer Spine.Unity.Examples.SlotTintBlackFollower::mr
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___mr_8;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.Examples.SlotTintBlackFollower::mb
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___mb_9;
	// System.Int32 Spine.Unity.Examples.SlotTintBlackFollower::colorPropertyId
	int32_t ___colorPropertyId_10;
	// System.Int32 Spine.Unity.Examples.SlotTintBlackFollower::blackPropertyId
	int32_t ___blackPropertyId_11;
};

// Spine.Unity.Examples.SpawnFromSkeletonDataExample
struct SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonDataAsset Spine.Unity.Examples.SpawnFromSkeletonDataExample::skeletonDataAsset
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset_4;
	// System.Int32 Spine.Unity.Examples.SpawnFromSkeletonDataExample::count
	int32_t ___count_5;
	// System.String Spine.Unity.Examples.SpawnFromSkeletonDataExample::startingAnimation
	String_t* ___startingAnimation_6;
};

// Spine.Unity.Examples.SpawnSkeletonGraphicExample
struct SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonDataAsset Spine.Unity.Examples.SpawnSkeletonGraphicExample::skeletonDataAsset
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset_4;
	// System.String Spine.Unity.Examples.SpawnSkeletonGraphicExample::startingAnimation
	String_t* ___startingAnimation_5;
	// System.String Spine.Unity.Examples.SpawnSkeletonGraphicExample::startingSkin
	String_t* ___startingSkin_6;
	// UnityEngine.Material Spine.Unity.Examples.SpawnSkeletonGraphicExample::skeletonGraphicMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skeletonGraphicMaterial_7;
};

// Spine.Unity.Examples.SpineGauge
struct SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Spine.Unity.Examples.SpineGauge::fillPercent
	float ___fillPercent_4;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineGauge::fillAnimation
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___fillAnimation_5;
	// Spine.Unity.SkeletonRenderer Spine.Unity.Examples.SpineGauge::skeletonRenderer
	SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* ___skeletonRenderer_6;
};

// Spine.Unity.Examples.Spineboy
struct Spineboy_t6EF75A1A6479CF9DA839204EC4445788CE30C7EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.Spineboy::skeletonAnimation
	SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___skeletonAnimation_4;
};

// Spine.Unity.Examples.SpineboyBodyTilt
struct SpineboyBodyTilt_tA86B9E5596291C30A76E582C371FF9D384A39F23  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.Examples.SpineboyFootplanter Spine.Unity.Examples.SpineboyBodyTilt::planter
	SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* ___planter_4;
	// System.String Spine.Unity.Examples.SpineboyBodyTilt::hip
	String_t* ___hip_5;
	// System.String Spine.Unity.Examples.SpineboyBodyTilt::head
	String_t* ___head_6;
	// System.Single Spine.Unity.Examples.SpineboyBodyTilt::hipTiltScale
	float ___hipTiltScale_7;
	// System.Single Spine.Unity.Examples.SpineboyBodyTilt::headTiltScale
	float ___headTiltScale_8;
	// System.Single Spine.Unity.Examples.SpineboyBodyTilt::hipRotationMoveScale
	float ___hipRotationMoveScale_9;
	// System.Single Spine.Unity.Examples.SpineboyBodyTilt::hipRotationTarget
	float ___hipRotationTarget_10;
	// System.Single Spine.Unity.Examples.SpineboyBodyTilt::hipRotationSmoothed
	float ___hipRotationSmoothed_11;
	// System.Single Spine.Unity.Examples.SpineboyBodyTilt::baseHeadRotation
	float ___baseHeadRotation_12;
	// Spine.Bone Spine.Unity.Examples.SpineboyBodyTilt::hipBone
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___hipBone_13;
	// Spine.Bone Spine.Unity.Examples.SpineboyBodyTilt::headBone
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___headBone_14;
};

// Spine.Unity.Examples.SpineboyFacialExpression
struct SpineboyFacialExpression_t1BCBE093D4107CDD1265C1D7FB229D9270D40F2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.Examples.SpineboyFootplanter Spine.Unity.Examples.SpineboyFacialExpression::footPlanter
	SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* ___footPlanter_4;
	// System.String Spine.Unity.Examples.SpineboyFacialExpression::eyeSlotName
	String_t* ___eyeSlotName_5;
	// System.String Spine.Unity.Examples.SpineboyFacialExpression::mouthSlotName
	String_t* ___mouthSlotName_6;
	// System.String Spine.Unity.Examples.SpineboyFacialExpression::shockEyeName
	String_t* ___shockEyeName_7;
	// System.String Spine.Unity.Examples.SpineboyFacialExpression::normalEyeName
	String_t* ___normalEyeName_8;
	// System.String Spine.Unity.Examples.SpineboyFacialExpression::shockMouthName
	String_t* ___shockMouthName_9;
	// System.String Spine.Unity.Examples.SpineboyFacialExpression::normalMouthName
	String_t* ___normalMouthName_10;
	// Spine.Slot Spine.Unity.Examples.SpineboyFacialExpression::eyeSlot
	Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* ___eyeSlot_11;
	// Spine.Slot Spine.Unity.Examples.SpineboyFacialExpression::mouthSlot
	Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* ___mouthSlot_12;
	// Spine.Attachment Spine.Unity.Examples.SpineboyFacialExpression::shockEye
	Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* ___shockEye_13;
	// Spine.Attachment Spine.Unity.Examples.SpineboyFacialExpression::normalEye
	Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* ___normalEye_14;
	// Spine.Attachment Spine.Unity.Examples.SpineboyFacialExpression::shockMouth
	Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* ___shockMouth_15;
	// Spine.Attachment Spine.Unity.Examples.SpineboyFacialExpression::normalMouth
	Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* ___normalMouth_16;
	// System.Single Spine.Unity.Examples.SpineboyFacialExpression::balanceThreshold
	float ___balanceThreshold_17;
	// System.Single Spine.Unity.Examples.SpineboyFacialExpression::shockDuration
	float ___shockDuration_18;
	// System.Single Spine.Unity.Examples.SpineboyFacialExpression::shockTimer
	float ___shockTimer_19;
};

// Spine.Unity.Examples.SpineboyFootplanter
struct SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::timeScale
	float ___timeScale_4;
	// System.String Spine.Unity.Examples.SpineboyFootplanter::nearBoneName
	String_t* ___nearBoneName_5;
	// System.String Spine.Unity.Examples.SpineboyFootplanter::farBoneName
	String_t* ___farBoneName_6;
	// UnityEngine.Vector2 Spine.Unity.Examples.SpineboyFootplanter::footSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___footSize_7;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::footRayRaise
	float ___footRayRaise_8;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::comfyDistance
	float ___comfyDistance_9;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::centerOfGravityXOffset
	float ___centerOfGravityXOffset_10;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::feetTooFarApartThreshold
	float ___feetTooFarApartThreshold_11;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::offBalanceThreshold
	float ___offBalanceThreshold_12;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::minimumSpaceBetweenFeet
	float ___minimumSpaceBetweenFeet_13;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::maxNewStepDisplacement
	float ___maxNewStepDisplacement_14;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::shuffleDistance
	float ___shuffleDistance_15;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::baseLerpSpeed
	float ___baseLerpSpeed_16;
	// Spine.Unity.Examples.SpineboyFootplanter/FootMovement Spine.Unity.Examples.SpineboyFootplanter::forward
	FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___forward_17;
	// Spine.Unity.Examples.SpineboyFootplanter/FootMovement Spine.Unity.Examples.SpineboyFootplanter::backward
	FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___backward_18;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::balance
	float ___balance_19;
	// System.Single Spine.Unity.Examples.SpineboyFootplanter::distanceBetweenFeet
	float ___distanceBetweenFeet_20;
	// Spine.Unity.Examples.SpineboyFootplanter/Foot Spine.Unity.Examples.SpineboyFootplanter::nearFoot
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* ___nearFoot_21;
	// Spine.Unity.Examples.SpineboyFootplanter/Foot Spine.Unity.Examples.SpineboyFootplanter::farFoot
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* ___farFoot_22;
	// Spine.Skeleton Spine.Unity.Examples.SpineboyFootplanter::skeleton
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* ___skeleton_23;
	// Spine.Bone Spine.Unity.Examples.SpineboyFootplanter::nearFootBone
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___nearFootBone_24;
	// Spine.Bone Spine.Unity.Examples.SpineboyFootplanter::farFootBone
	Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___farFootBone_25;
	// UnityEngine.RaycastHit2D[] Spine.Unity.Examples.SpineboyFootplanter::hits
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___hits_26;
};

// Spine.Unity.Examples.SpineboyFreeze
struct SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.SpineboyFreeze::skeletonAnimation
	SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___skeletonAnimation_4;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineboyFreeze::freeze
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___freeze_5;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineboyFreeze::idle
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___idle_6;
	// UnityEngine.Color Spine.Unity.Examples.SpineboyFreeze::freezeColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___freezeColor_7;
	// UnityEngine.Color Spine.Unity.Examples.SpineboyFreeze::freezeBlackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___freezeBlackColor_8;
	// UnityEngine.ParticleSystem Spine.Unity.Examples.SpineboyFreeze::particles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particles_9;
	// System.Single Spine.Unity.Examples.SpineboyFreeze::freezePoint
	float ___freezePoint_10;
	// System.String Spine.Unity.Examples.SpineboyFreeze::colorProperty
	String_t* ___colorProperty_11;
	// System.String Spine.Unity.Examples.SpineboyFreeze::blackTintProperty
	String_t* ___blackTintProperty_12;
	// UnityEngine.MaterialPropertyBlock Spine.Unity.Examples.SpineboyFreeze::block
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___block_13;
	// UnityEngine.MeshRenderer Spine.Unity.Examples.SpineboyFreeze::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_14;
};

// Spine.Unity.Examples.SpineboyPole
struct SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.SpineboyPole::skeletonAnimation
	SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___skeletonAnimation_4;
	// Spine.Unity.SkeletonRenderSeparator Spine.Unity.Examples.SpineboyPole::separator
	SkeletonRenderSeparator_t1DFE75BAF91824B87DD05D478D6F87CD4EBC5B8B* ___separator_5;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineboyPole::run
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___run_6;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineboyPole::pole
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___pole_7;
	// System.Single Spine.Unity.Examples.SpineboyPole::startX
	float ___startX_8;
	// System.Single Spine.Unity.Examples.SpineboyPole::endX
	float ___endX_9;
};

// Spine.Unity.Examples.SpineboyPoleGraphic
struct SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonGraphic Spine.Unity.Examples.SpineboyPoleGraphic::skeletonGraphic
	SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* ___skeletonGraphic_4;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineboyPoleGraphic::run
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___run_5;
	// Spine.Unity.AnimationReferenceAsset Spine.Unity.Examples.SpineboyPoleGraphic::pole
	AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___pole_6;
	// System.Single Spine.Unity.Examples.SpineboyPoleGraphic::startX
	float ___startX_7;
	// System.Single Spine.Unity.Examples.SpineboyPoleGraphic::endX
	float ___endX_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A  : public SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A
{
	// Spine.AnimationState Spine.Unity.SkeletonAnimation::state
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* ___state_44;
	// System.Boolean Spine.Unity.SkeletonAnimation::wasUpdatedAfterInit
	bool ___wasUpdatedAfterInit_45;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_BeforeApply
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____BeforeApply_46;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateLocal
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____UpdateLocal_47;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateWorld
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____UpdateWorld_48;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateComplete
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ____UpdateComplete_49;
	// System.String Spine.Unity.SkeletonAnimation::_animationName
	String_t* ____animationName_50;
	// System.Boolean Spine.Unity.SkeletonAnimation::loop
	bool ___loop_51;
	// System.Single Spine.Unity.SkeletonAnimation::timeScale
	float ___timeScale_52;
};

// Spine.Unity.Examples.SkeletonUtilityEyeConstraint
struct SkeletonUtilityEyeConstraint_t067D714E6F16EA4BC09386ED88E94DBC49D1955E  : public SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811
{
	// UnityEngine.Transform[] Spine.Unity.Examples.SkeletonUtilityEyeConstraint::eyes
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___eyes_6;
	// System.Single Spine.Unity.Examples.SkeletonUtilityEyeConstraint::radius
	float ___radius_7;
	// UnityEngine.Transform Spine.Unity.Examples.SkeletonUtilityEyeConstraint::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_8;
	// UnityEngine.Vector3 Spine.Unity.Examples.SkeletonUtilityEyeConstraint::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_9;
	// System.Single Spine.Unity.Examples.SkeletonUtilityEyeConstraint::speed
	float ___speed_10;
	// UnityEngine.Vector3[] Spine.Unity.Examples.SkeletonUtilityEyeConstraint::origins
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___origins_11;
	// UnityEngine.Vector3 Spine.Unity.Examples.SkeletonUtilityEyeConstraint::centerPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerPoint_12;
};

// Spine.Unity.Examples.SkeletonUtilityGroundConstraint
struct SkeletonUtilityGroundConstraint_tA025862E1902B86FD0D6695B58F6E5B1F0362EF6  : public SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811
{
	// UnityEngine.LayerMask Spine.Unity.Examples.SkeletonUtilityGroundConstraint::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_6;
	// System.Boolean Spine.Unity.Examples.SkeletonUtilityGroundConstraint::use2D
	bool ___use2D_7;
	// System.Boolean Spine.Unity.Examples.SkeletonUtilityGroundConstraint::useRadius
	bool ___useRadius_8;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::castRadius
	float ___castRadius_9;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::castDistance
	float ___castDistance_10;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::castOffset
	float ___castOffset_11;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::groundOffset
	float ___groundOffset_12;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::adjustSpeed
	float ___adjustSpeed_13;
	// UnityEngine.Vector3 Spine.Unity.Examples.SkeletonUtilityGroundConstraint::rayOrigin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rayOrigin_14;
	// UnityEngine.Vector3 Spine.Unity.Examples.SkeletonUtilityGroundConstraint::rayDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rayDir_15;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::hitY
	float ___hitY_16;
	// System.Single Spine.Unity.Examples.SkeletonUtilityGroundConstraint::lastHitY
	float ___lastHitY_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::skeletonDataAsset
	SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___skeletonDataAsset_37;
	// System.String Spine.Unity.SkeletonGraphic::initialSkinName
	String_t* ___initialSkinName_38;
	// System.Boolean Spine.Unity.SkeletonGraphic::initialFlipX
	bool ___initialFlipX_39;
	// System.Boolean Spine.Unity.SkeletonGraphic::initialFlipY
	bool ___initialFlipY_40;
	// System.String Spine.Unity.SkeletonGraphic::startingAnimation
	String_t* ___startingAnimation_41;
	// System.Boolean Spine.Unity.SkeletonGraphic::startingLoop
	bool ___startingLoop_42;
	// System.Single Spine.Unity.SkeletonGraphic::timeScale
	float ___timeScale_43;
	// System.Boolean Spine.Unity.SkeletonGraphic::freeze
	bool ___freeze_44;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonGraphic::updateMode
	int32_t ___updateMode_45;
	// Spine.Unity.UpdateMode Spine.Unity.SkeletonGraphic::updateWhenInvisible
	int32_t ___updateWhenInvisible_46;
	// System.Boolean Spine.Unity.SkeletonGraphic::unscaledTime
	bool ___unscaledTime_47;
	// System.Boolean Spine.Unity.SkeletonGraphic::allowMultipleCanvasRenderers
	bool ___allowMultipleCanvasRenderers_48;
	// System.Collections.Generic.List`1<UnityEngine.CanvasRenderer> Spine.Unity.SkeletonGraphic::canvasRenderers
	List_1_tF927985772F2034B6D3251636D0EA26C950BE569* ___canvasRenderers_49;
	// System.Collections.Generic.List`1<UnityEngine.UI.RawImage> Spine.Unity.SkeletonGraphic::rawImages
	List_1_t8F8EC453709D820AD028F01D85A01A31FB4B1B52* ___rawImages_50;
	// System.Int32 Spine.Unity.SkeletonGraphic::usedRenderersCount
	int32_t ___usedRenderersCount_51;
	// System.String[] Spine.Unity.SkeletonGraphic::separatorSlotNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separatorSlotNames_53;
	// System.Collections.Generic.List`1<Spine.Slot> Spine.Unity.SkeletonGraphic::separatorSlots
	List_1_t75CC7DC5981BB1205F28E94CAC72B41781A3E0D4* ___separatorSlots_54;
	// System.Boolean Spine.Unity.SkeletonGraphic::enableSeparatorSlots
	bool ___enableSeparatorSlots_55;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Spine.Unity.SkeletonGraphic::separatorParts
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___separatorParts_56;
	// System.Boolean Spine.Unity.SkeletonGraphic::updateSeparatorPartLocation
	bool ___updateSeparatorPartLocation_57;
	// System.Boolean Spine.Unity.SkeletonGraphic::wasUpdatedAfterInit
	bool ___wasUpdatedAfterInit_58;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphic::baseTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___baseTexture_59;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Texture> Spine.Unity.SkeletonGraphic::customTextureOverride
	Dictionary_2_t5BE8DFCD10ADA75C178B92A43A8FF7EE49D7E610* ___customTextureOverride_60;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.Material> Spine.Unity.SkeletonGraphic::customMaterialOverride
	Dictionary_2_t0EB522A36CBFB73E1DB8B66A87752EA513361ACD* ___customMaterialOverride_61;
	// UnityEngine.Texture Spine.Unity.SkeletonGraphic::overrideTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___overrideTexture_62;
	// Spine.Skeleton Spine.Unity.SkeletonGraphic::skeleton
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* ___skeleton_63;
	// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate Spine.Unity.SkeletonGraphic::OnRebuild
	SkeletonRendererDelegate_tF00A46D09906FA01EB8DC11B3306FE0E7C3A8A1C* ___OnRebuild_64;
	// Spine.Unity.SkeletonGraphic/SkeletonRendererDelegate Spine.Unity.SkeletonGraphic::OnMeshAndMaterialsUpdated
	SkeletonRendererDelegate_tF00A46D09906FA01EB8DC11B3306FE0E7C3A8A1C* ___OnMeshAndMaterialsUpdated_65;
	// Spine.AnimationState Spine.Unity.SkeletonGraphic::state
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* ___state_66;
	// Spine.Unity.MeshGenerator Spine.Unity.SkeletonGraphic::meshGenerator
	MeshGenerator_t754492D79919D913B93BE05E83D270CEACAC392C* ___meshGenerator_67;
	// Spine.Unity.DoubleBuffered`1<Spine.Unity.MeshRendererBuffers/SmartMesh> Spine.Unity.SkeletonGraphic::meshBuffers
	DoubleBuffered_1_tAA5948FEDBAA5BD58CAE43B2515316D275B074AE* ___meshBuffers_68;
	// Spine.Unity.SkeletonRendererInstruction Spine.Unity.SkeletonGraphic::currentInstructions
	SkeletonRendererInstruction_t7EBEBDCF3450913487EE58F1C3F0A0E084A51163* ___currentInstructions_69;
	// Spine.ExposedList`1<UnityEngine.Mesh> Spine.Unity.SkeletonGraphic::meshes
	ExposedList_1_t06E83C6B69FFBF51FF15EF7A1AB7CC9B674677A2* ___meshes_70;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::BeforeApply
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ___BeforeApply_71;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateLocal
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ___UpdateLocal_72;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateWorld
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ___UpdateWorld_73;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateComplete
	UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ___UpdateComplete_74;
	// Spine.Unity.MeshGeneratorDelegate Spine.Unity.SkeletonGraphic::OnPostProcessVertices
	MeshGeneratorDelegate_t799773C2F6BEC0D47D27646DB0FBE22A28821E8B* ___OnPostProcessVertices_75;
};

// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t2B9A8726FBAC69918D551BAAAA4E679883EE516E_StaticFields
{
	// T[] Spine.ExposedList`1::EmptyArray
	EventU5BU5D_t1F3AC368F660BBC1A9874C694C498837AF4F414C* ___EmptyArray_3;
};

// Spine.ExposedList`1<Spine.Event>

// System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>
struct List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>

// Spine.Animation

// Spine.Animation

// Spine.AnimationState
struct AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC_StaticFields
{
	// Spine.Animation Spine.AnimationState::EmptyAnimation
	Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___EmptyAnimation_0;
};

// Spine.AnimationState

// Spine.Attachment

// Spine.Attachment

// Spine.Bone
struct Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5_StaticFields
{
	// System.Boolean Spine.Bone::yDown
	bool ___yDown_0;
};

// Spine.Bone

// Spine.Event

// Spine.Event

// Spine.Skeleton

// Spine.Skeleton

// Spine.SkeletonData

// Spine.SkeletonData

// Spine.Slot

// Spine.Slot

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Spine.TrackEntry

// Spine.TrackEntry

// Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40

// Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40

// Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33

// Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33

// Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3

// Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3

// Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4

// Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4

// Spine.Unity.Examples.Spineboy/<>c
struct U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields
{
	// Spine.Unity.Examples.Spineboy/<>c Spine.Unity.Examples.Spineboy/<>c::<>9
	U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90* ___U3CU3E9_0;
	// Spine.AnimationState/TrackEntryDelegate Spine.Unity.Examples.Spineboy/<>c::<>9__1_0
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___U3CU3E9__1_0_1;
};

// Spine.Unity.Examples.Spineboy/<>c

// Spine.Unity.Examples.SpineboyFootplanter/FootMovement

// Spine.Unity.Examples.SpineboyFootplanter/FootMovement

// Spine.Unity.Examples.SpineboyFreeze/<Start>d__11

// Spine.Unity.Examples.SpineboyFreeze/<Start>d__11

// Spine.Unity.Examples.SpineboyPole/<Start>d__8

// Spine.Unity.Examples.SpineboyPole/<Start>d__8

// Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7

// Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// Spine.Unity.WaitForSpineAnimationComplete

// Spine.Unity.WaitForSpineAnimationComplete

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair

// Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.ContactFilter2D

// UnityEngine.ContactFilter2D

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit2D

// UnityEngine.RaycastHit2D

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Spine.Unity.Examples.SpineboyFootplanter/Foot

// Spine.Unity.Examples.SpineboyFootplanter/Foot

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Spine.Unity.AnimationReferenceAsset

// Spine.Unity.AnimationReferenceAsset

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Joint

// UnityEngine.Joint

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// Spine.Unity.SkeletonDataAsset

// Spine.Unity.SkeletonDataAsset

// UnityEngine.Transform

// UnityEngine.Transform

// Spine.Unity.UpdateBonesDelegate

// Spine.Unity.UpdateBonesDelegate

// Spine.AnimationState/TrackEntryDelegate

// Spine.AnimationState/TrackEntryDelegate

// Spine.AnimationState/TrackEntryEventDelegate

// Spine.AnimationState/TrackEntryEventDelegate

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Spine.Unity.Examples.SkeletonRagdoll2D
struct SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_StaticFields
{
	// UnityEngine.Transform Spine.Unity.Examples.SkeletonRagdoll2D::parentSpaceHelper
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parentSpaceHelper_4;
};

// Spine.Unity.Examples.SkeletonRagdoll2D

// Spine.Unity.SkeletonRenderSeparator

// Spine.Unity.SkeletonRenderSeparator

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_StaticFields
{
	// System.Int32 Spine.Unity.SkeletonRenderer::STENCIL_COMP_PARAM_ID
	int32_t ___STENCIL_COMP_PARAM_ID_24;
	// System.Int32 Spine.Unity.SkeletonRenderer::SUBMESH_DUMMY_PARAM_ID
	int32_t ___SUBMESH_DUMMY_PARAM_ID_43;
};

// Spine.Unity.SkeletonRenderer

// Spine.Unity.SkeletonUtility

// Spine.Unity.SkeletonUtility

// Spine.Unity.SkeletonUtilityBone

// Spine.Unity.SkeletonUtilityBone

// Spine.Unity.SkeletonUtilityConstraint

// Spine.Unity.SkeletonUtilityConstraint

// Spine.Unity.Examples.SkeletonUtilityKinematicShadow

// Spine.Unity.Examples.SkeletonUtilityKinematicShadow

// Spine.Unity.Examples.SlotTintBlackFollower

// Spine.Unity.Examples.SlotTintBlackFollower

// Spine.Unity.Examples.SpawnFromSkeletonDataExample

// Spine.Unity.Examples.SpawnFromSkeletonDataExample

// Spine.Unity.Examples.SpawnSkeletonGraphicExample

// Spine.Unity.Examples.SpawnSkeletonGraphicExample

// Spine.Unity.Examples.SpineGauge

// Spine.Unity.Examples.SpineGauge

// Spine.Unity.Examples.Spineboy

// Spine.Unity.Examples.Spineboy

// Spine.Unity.Examples.SpineboyBodyTilt

// Spine.Unity.Examples.SpineboyBodyTilt

// Spine.Unity.Examples.SpineboyFacialExpression

// Spine.Unity.Examples.SpineboyFacialExpression

// Spine.Unity.Examples.SpineboyFootplanter

// Spine.Unity.Examples.SpineboyFootplanter

// Spine.Unity.Examples.SpineboyFreeze

// Spine.Unity.Examples.SpineboyFreeze

// Spine.Unity.Examples.SpineboyPole

// Spine.Unity.Examples.SpineboyPole

// Spine.Unity.Examples.SpineboyPoleGraphic

// Spine.Unity.Examples.SpineboyPoleGraphic

// Spine.Unity.SkeletonAnimation

// Spine.Unity.SkeletonAnimation

// Spine.Unity.Examples.SkeletonUtilityEyeConstraint

// Spine.Unity.Examples.SkeletonUtilityEyeConstraint

// Spine.Unity.Examples.SkeletonUtilityGroundConstraint

// Spine.Unity.Examples.SkeletonUtilityGroundConstraint

// Spine.Unity.SkeletonGraphic

// Spine.Unity.SkeletonGraphic
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.SkeletonUtilityBone[]
struct SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292  : public RuntimeArray
{
	ALIGN_FIELD (8) SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* m_Items[1];

	inline SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Joint[]
struct JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B  : public RuntimeArray
{
	ALIGN_FIELD (8) Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* m_Items[1];

	inline Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E  : public RuntimeArray
{
	ALIGN_FIELD (8) Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* m_Items[1];

	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649  : public RuntimeArray
{
	ALIGN_FIELD (8) Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* m_Items[1];

	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair[]
struct TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460  : public RuntimeArray
{
	ALIGN_FIELD (8) TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E m_Items[1];

	inline TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dest_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___src_1), (void*)NULL);
		#endif
	}
	inline TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dest_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___src_1), (void*)NULL);
		#endif
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_gshared_inline (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_gshared_inline (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52_gshared (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7_gshared (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Spine.Unity.SkeletonRenderer>()
inline SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRagdoll2D_Apply_mC6B44DF9A27B4ECCEE9EADCBA7F073965BFF8718 (SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::SetBonesToSetupPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_SetBonesToSetupPose_m370ECBB35E6EF90EF9981557CFE9D054B39CF9C4 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonUtilityConstraint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityConstraint_OnEnable_m80064A37ECE0CA3D99507A0EFF47802542A6C3BA (SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonUtilityConstraint::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityConstraint_OnDisable_mE07969C55C851CA9BEA90BFFE43E47D5906642CC (SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single Spine.Unity.SkeletonUtility::get_PositionScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline (SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonUtilityConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityConstraint__ctor_mB15E8A658E850D0FA65995A9B054311F90F5826D (SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::CircleCast(UnityEngine.Vector2,System.Single,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_CircleCast_mFDA98331D99470872994987932FCAF8E2539467A (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_origin, float ___1_radius, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_direction, float ___3_distance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_origin, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_direction, float ___2_distance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_m2A41FD7023EC5B89B69E0A8948325BEF46D9597C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, float ___1_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3_hitInfo, float ___4_maxDistance, int32_t ___5_layerMask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void Spine.Bone::set_X(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_X_m10BD781CAF059F5D8E067462ED0DCE14E693905B_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Bone::set_Y(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_Y_mF0B3668ED180E2A2949749789869399ECDD028FD_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.GameObject::GetComponent<Spine.Unity.Examples.SkeletonUtilityKinematicShadow>()
inline SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F* GameObject_GetComponent_TisSkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F_mC107046C353818A60ABC78D38AF86B1E1FDE78E9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Joint>()
inline JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_m9D356FDF7DEF54C642A6CF760F64BF6B5BDF8968 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Joint::get_connectedAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Joint_get_connectedAnchor_m455C8981D90A4A60DC5B290EBD1D9330A6649C18 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Joint::set_connectedAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Spine.Unity.SkeletonUtilityBone>()
inline SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* Component_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_mD5B2A70E32A65D808C2D77C410BDF8DAD959F6C3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<Spine.Unity.SkeletonUtilityBone>()
inline SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* GameObject_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_m2AC5A35EFC2CCDD11338367F923BF9E3904205D8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::Add(T)
inline void List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_inline (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF*, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E, const RuntimeMethod*))List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_gshared_inline)(__this, ___0_item, method);
}
// System.Void Spine.Unity.Examples.SkeletonUtilityKinematicShadow::DestroyComponents(UnityEngine.Component[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityKinematicShadow_DestroyComponents_m35A8B10B87AC8EA81FE8421E5188483F3086E639 (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___0_components, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Joint>()
inline JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* Component_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mC72551764335C8C6C034460ECAE5DFF2C3061251 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MoveRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MoveRotation_m33BC3C46E2584EB32C6E440AA4E9E58BEEEE8256 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___0_angle, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::get_Count()
inline int32_t List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_inline (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF*, const RuntimeMethod*))List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::get_Item(System.Int32)
inline TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52 (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E (*) (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF*, int32_t, const RuntimeMethod*))List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52_gshared)(__this, ___0_index, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair>::.ctor()
inline void List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7 (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF*, const RuntimeMethod*))List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SlotTintBlackFollower::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotTintBlackFollower_Initialize_m34070A8473BF09DF418643513493EFDF43FAB967 (SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2* __this, bool ___0_overwrite, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Spine.Unity.ISkeletonComponent>()
inline RuntimeObject* Component_GetComponent_TisISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_m27386C0ED21D919FD771CF9F965542CBFE70DDC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Spine.Slot Spine.Skeleton::FindSlot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* Skeleton_FindSlot_mBB2C51558223E098DA11648C5A1E070F307CDC16 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, String_t* ___0_slotName, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColor(Spine.Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColor_mAFACEA45926C78BAB99C069ACAF578C0368022D9 (Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___0_nameID, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Color Spine.Unity.SkeletonExtensions::GetColorTintBlack(Spine.Slot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SkeletonExtensions_GetColorTintBlack_mED439D70F6864FB770C32EF0ADB519A7C00A2314 (Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_properties, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m7C60ADDB5DAFACAC67A0189A603F79C1EEDF811A (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Random_get_insideUnitCircle_mB2FE9BAA7DDF7FED2AA53EA4667F864747E20DA2 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// Spine.AnimationState Spine.Unity.SkeletonAnimation::get_AnimationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* SkeletonAnimation_get_AnimationState_m1A20C545DDF883CDCEC6DDD1FABFFFAC2BB46338 (SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* __this, const RuntimeMethod* method) ;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,Spine.Animation,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, int32_t ___0_trackIndex, Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___1_animation, bool ___2_loop, const RuntimeMethod* method) ;
// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::GetSkeletonData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* SkeletonDataAsset_GetSkeletonData_mCBAFA745AEC7A8191A7FBE1EE05A8A877886832E (SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* __this, bool ___0_quiet, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// Spine.Animation Spine.SkeletonData::FindAnimation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* SkeletonData_FindAnimation_m8BC1E345991704D313FB523844D6BAE0B23E1977 (SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* __this, String_t* ___0_animationName, const RuntimeMethod* method) ;
// Spine.Unity.SkeletonAnimation Spine.Unity.SkeletonAnimation::NewSkeletonAnimationGameObject(Spine.Unity.SkeletonDataAsset,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* SkeletonAnimation_NewSkeletonAnimationGameObject_m0DB97DEFFAA91A5522AF9E8FF9ED46277134279D (SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___0_skeletonDataAsset, bool ___1_quiet, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample::DoExtraStuff(Spine.Unity.SkeletonAnimation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromSkeletonDataExample_DoExtraStuff_mA6860A246AB5DFD92ADA11CFA9FF133E089C9B33 (SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* __this, SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___0_sa, Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___1_spineAnimation, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m980F2F5D5E2FFD8AE8AFE899F9C4BFD06847E99A (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// Spine.Unity.SkeletonGraphic Spine.Unity.SkeletonGraphic::NewSkeletonGraphicGameObject(Spine.Unity.SkeletonDataAsset,UnityEngine.Transform,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* SkeletonGraphic_NewSkeletonGraphicGameObject_m7FA8B12C3AC526A92E3E4B0E6C4DD8E679E987C5 (SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* ___0_skeletonDataAsset, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonGraphic::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonGraphic_Initialize_mA70023ABDC853E8A06E6C43469F774A422236530 (SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* __this, bool ___0_overwrite, const RuntimeMethod* method) ;
// Spine.Skeleton Spine.Unity.SkeletonGraphic::get_Skeleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* SkeletonGraphic_get_Skeleton_mF8BED82D73B930C6D58A62E787A6DC4DF7055BAF (SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* __this, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::SetSkin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_SetSkin_m31B2FD53608CA4D06E795C97F43FD25AB8EE35DD (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, String_t* ___0_skinName, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::SetSlotsToSetupPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_SetSlotsToSetupPose_mEAB32BF8145328C01FADA8C5FB9C67B92B01F266 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, const RuntimeMethod* method) ;
// Spine.AnimationState Spine.Unity.SkeletonGraphic::get_AnimationState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* SkeletonGraphic_get_AnimationState_m3D7C5FB2FE8A85DDC7FD3415D23E479847CA248C (SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* __this, const RuntimeMethod* method) ;
// Spine.TrackEntry Spine.AnimationState::SetAnimation(System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* AnimationState_SetAnimation_m099FC5EF37AD99A92CAB686B7D594CD710A4F8F5 (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, int32_t ___0_trackIndex, String_t* ___1_animationName, bool ___2_loop, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Spine.Unity.SkeletonAnimation>()
inline SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryEventDelegate__ctor_mAF596E1A7BB113F19A6D463C56DA3FB785967887 (TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState::add_Event(Spine.AnimationState/TrackEntryEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_add_Event_m40AD035662F3C785A11916336D8B5B8D90ADBE2C (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3* ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackEntryDelegate__ctor_m10BAF0EE519EA600096B052EF1DEBFDDBB222FB4 (TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState::add_End(Spine.AnimationState/TrackEntryDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_add_End_m44E9B9C09C3CA941DC2483DAC9DCA093D0F31F7F (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* ___0_value, const RuntimeMethod* method) ;
// Spine.TrackEntry Spine.AnimationState::AddAnimation(System.Int32,System.String,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* AnimationState_AddAnimation_m1E2E667BB12BF65EBC4A85525905D6282F577A1C (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, int32_t ___0_trackIndex, String_t* ___1_animationName, bool ___2_loop, float ___3_delay, const RuntimeMethod* method) ;
// System.Int32 Spine.TrackEntry::get_TrackIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrackEntry_get_TrackIndex_m50F8793A7BB90FA82EA36436AAC5A55BC565761C_inline (TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* __this, const RuntimeMethod* method) ;
// Spine.Animation Spine.TrackEntry::get_Animation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* TrackEntry_get_Animation_m5BE3D98B59824CA342B208DD84BB9DE3265F7775_inline (TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* __this, const RuntimeMethod* method) ;
// System.String Spine.Animation::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Animation_get_Name_mD835FCD7BFDAE8FD7E2C099B26887C9CACB0AF01_inline (Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* __this, const RuntimeMethod* method) ;
// System.Int32 Spine.Event::get_Int()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Event_get_Int_m98EEB1D28BA0626B1A65FA644F1602F5EDF44021_inline (Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.Spineboy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9AFF4F7262E2E9632E20D85E150C7C1CE5CC0C88 (U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// Spine.Skeleton Spine.Unity.SkeletonRenderer::get_Skeleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* SkeletonRenderer_get_Skeleton_m4B631F464CF860CC96CB34DF8AF61EE6B4F940BA (SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* __this, const RuntimeMethod* method) ;
// Spine.Bone Spine.Skeleton::FindBone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* Skeleton_FindBone_m0982633468F4F4F7E9885559059C699F655492B4 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, String_t* ___0_boneName, const RuntimeMethod* method) ;
// System.Single Spine.Bone::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_Rotation_mAECAF93DEE8568B372FC1C813564242DE0A8E198_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, const RuntimeMethod* method) ;
// System.Void Spine.Unity.UpdateBonesDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateBonesDelegate__ctor_m5D2643AAEC1F332B439ECC8C8EC749DB2428E48B (UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonAnimation::add_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonAnimation_add_UpdateLocal_mE8BB626775666E7EA08BB616398F781F8EE81A85 (SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* __this, UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* ___0_value, const RuntimeMethod* method) ;
// System.Single Spine.Unity.Examples.SpineboyFootplanter::get_Balance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SpineboyFootplanter_get_Balance_m172CF9E20EF13645B78F42D0B032D94D8ADD7059_inline (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, const RuntimeMethod* method) ;
// System.Void Spine.Bone::set_Rotation(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_Rotation_mFA733E8C49F6FE44EEBE59F9347DE987B9EEA8A0_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 Spine.Skeleton::FindSlotIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Skeleton_FindSlotIndex_m11D23BDA985A2E7608F36E229B3787AF5D7A307A (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, String_t* ___0_slotName, const RuntimeMethod* method) ;
// Spine.Attachment Spine.Skeleton::GetAttachment(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* Skeleton_GetAttachment_m60698A2DAF8757DBAF9C805FE06ACFFBC71B5AF0 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, int32_t ___0_slotIndex, String_t* ___1_attachmentName, const RuntimeMethod* method) ;
// System.Void Spine.Slot::set_Attachment(Spine.Attachment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot_set_Attachment_m7BA3DBE047301357671C5825E59C1A366FE73D0F (Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* __this, Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::UpdateDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot_UpdateDistance_m3BAF945103B896A64C31BB379566E7FC286B820B (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, float ___0_centerOfGravityX, const RuntimeMethod* method) ;
// System.Boolean Spine.Unity.Examples.SpineboyFootplanter/Foot::get_IsStepInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Foot_get_IsStepInProgress_mA1AC28B72DECB51532B32601CE8846F6C8B4DE47 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, const RuntimeMethod* method) ;
// System.Boolean Spine.Unity.Examples.SpineboyFootplanter/Foot::get_IsPrettyMuchDoneStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Foot_get_IsPrettyMuchDoneStepping_m7C03EFB21F63D2D80A8BB470556D9003934D2442 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, const RuntimeMethod* method) ;
// System.Single Spine.Unity.Examples.SpineboyFootplanter/Foot::GetNewDisplacement(System.Single,System.Single,System.Single,System.Single,Spine.Unity.Examples.SpineboyFootplanter/FootMovement,Spine.Unity.Examples.SpineboyFootplanter/FootMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Foot_GetNewDisplacement_m253FA575885E1BFD9A08453F3EEA485CC76EB58B (float ___0_otherLegDisplacementFromCenter, float ___1_comfyDistance, float ___2_minimumFootDistanceX, float ___3_maxNewStepDisplacement, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___4_forwardMovement, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___5_backwardMovement, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::StartNewStep(System.Single,System.Single,System.Single,System.Single,UnityEngine.RaycastHit2D[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot_StartNewStep_mBD1D603E15E67A2D68A8910DEBEA6D1C5D4F0F66 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, float ___0_newDistance, float ___1_centerOfGravityX, float ___2_tentativeY, float ___3_footRayRaise, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___4_hits, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___5_footSize, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::UpdateStepProgress(System.Single,System.Single,System.Single,Spine.Unity.Examples.SpineboyFootplanter/FootMovement,Spine.Unity.Examples.SpineboyFootplanter/FootMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot_UpdateStepProgress_mEA027C09D42615548AEBD676D9C8EF954D396FEF (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, float ___0_deltaTime, float ___1_stepSpeed, float ___2_shuffleDistance, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___3_forwardMovement, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___4_backwardMovement, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void Spine.Unity.SkeletonExtensions::SetLocalPosition(Spine.Bone,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonExtensions_SetLocalPosition_m31F8C6865EF828AE77BB9F36D7A9D3B553D07F37 (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* ___0_bone, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics2D::BoxCast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics2D_BoxCast_m98CE5227E43693832B864B0FEF488074F15EB3D2 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_origin, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_size, float ___2_angle, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_direction, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 ___4_contactFilter, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___5_results, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11__ctor_mE8F7A7333E487066677DCD005585E799A04778B9 (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, bool ___0_value, const RuntimeMethod* method) ;
// Spine.Animation Spine.Unity.AnimationReferenceAsset::op_Implicit(Spine.Unity.AnimationReferenceAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642 (AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* ___0_asset, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyPole/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m7F1AAEFDAE66D14128B29719319F9D06E26D760A (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyPole::SetXPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyPole_SetXPosition_m3853E225BC593EAAF85E91659A8BAB9F196903E1 (SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* __this, float ___0_x, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Spine.AnimationState::set_TimeScale(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimationState_set_TimeScale_m80AE4AE09166CDC0B6AAC2F2B429A14312FF3217_inline (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void Spine.Unity.WaitForSpineAnimationComplete::.ctor(Spine.TrackEntry,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSpineAnimationComplete__ctor_m89F711D8F8BFE9FB66A3D10BFF4DA26D2226DA66 (WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* __this, TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* ___0_trackEntry, bool ___1_includeEndEvent, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7__ctor_mAC853CBB790EB7B00221B57E24B909856CBAAE9F (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic::SetXPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyPoleGraphic_SetXPosition_mD07F7C2D5C4565CBE6AD40BE4D2F825B05395621 (SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* __this, float ___0_x, const RuntimeMethod* method) ;
// System.Void Spine.Unity.Examples.SpineGauge::SetGaugePercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineGauge_SetGaugePercent_m5ECF66152F2D5EC362C9D2C264CF6AE787B80BC9 (SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7* __this, float ___0_percent, const RuntimeMethod* method) ;
// Spine.Animation Spine.Unity.AnimationReferenceAsset::get_Animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* AnimationReferenceAsset_get_Animation_m6A56EAE47BFAD4D53CB371A006864432B329034F (AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* __this, const RuntimeMethod* method) ;
// System.Void Spine.Animation::Apply(Spine.Skeleton,System.Single,System.Single,System.Boolean,Spine.ExposedList`1<Spine.Event>,System.Single,Spine.MixBlend,Spine.MixDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Apply_mC43B0C9C2690CCB590A9332824DB73DF94A42608 (Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* __this, Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* ___0_skeleton, float ___1_lastTime, float ___2_time, bool ___3_loop, ExposedList_1_t2B9A8726FBAC69918D551BAAAA4E679883EE516E* ___4_events, float ___5_alpha, int32_t ___6_blend, int32_t ___7_direction, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_Update_mB663702B0CED507547A88DF180AAAF24993B9938 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, float ___0_delta, const RuntimeMethod* method) ;
// System.Void Spine.Skeleton::UpdateWorldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skeleton_UpdateWorldTransform_m12FD1ACD50E9E19EA655B9F4CCD1F39F59B06F92 (Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__33__ctor_m7E9DAA41E9CB79C97FA2B7E35FD021D9B7A6798D (U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__33_System_IDisposable_Dispose_m00CD55A2ECFAFC7387F5F171D8622D739F49DC92 (U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__33_MoveNext_mB1C0018E29023CD7EFED45AC17D2F5504DAB5263 (U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonAnimation_tAB1DBE7086D7C605B1FBB7B4BED35F4BEED333F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCC2360F2B840BC2061BFEEC21E9EDB3054B68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE4FCD96A722FB333BA1D23168580B819449F8C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (parentSpaceHelper == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_StaticFields*)il2cpp_codegen_static_fields_for(SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_il2cpp_TypeInfo_var))->___parentSpaceHelper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// parentSpaceHelper = (new GameObject("Parent Space Helper")).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteral6DE4FCD96A722FB333BA1D23168580B819449F8C, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		((SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_StaticFields*)il2cpp_codegen_static_fields_for(SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_il2cpp_TypeInfo_var))->___parentSpaceHelper_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_StaticFields*)il2cpp_codegen_static_fields_for(SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04_il2cpp_TypeInfo_var))->___parentSpaceHelper_4), (void*)L_7);
	}

IL_003f:
	{
		// targetSkeletonComponent = GetComponent<SkeletonRenderer>() as ISkeletonAnimation;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_8 = V_1;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_9 = V_1;
		NullCheck(L_9);
		SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* L_10;
		L_10 = Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31(L_9, Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___targetSkeletonComponent_19 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, ISkeletonAnimation_tAB1DBE7086D7C605B1FBB7B4BED35F4BEED333F4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___targetSkeletonComponent_19), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, ISkeletonAnimation_tAB1DBE7086D7C605B1FBB7B4BED35F4BEED333F4_il2cpp_TypeInfo_var)));
		// if (targetSkeletonComponent == null) Debug.LogError("Attached Spine component does not implement ISkeletonAnimation. This script is not compatible.");
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___targetSkeletonComponent_19;
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		// if (targetSkeletonComponent == null) Debug.LogError("Attached Spine component does not implement ISkeletonAnimation. This script is not compatible.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2FDCC2360F2B840BC2061BFEEC21E9EDB3054B68, NULL);
	}

IL_0062:
	{
		// skeleton = targetSkeletonComponent.Skeleton;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_13 = V_1;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_14 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___targetSkeletonComponent_19;
		NullCheck(L_15);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_16;
		L_16 = InterfaceFuncInvoker0< Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* >::Invoke(6 /* Spine.Skeleton Spine.Unity.ISkeletonAnimation::get_Skeleton() */, ISkeletonAnimation_tAB1DBE7086D7C605B1FBB7B4BED35F4BEED333F4_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_13);
		L_13->___skeleton_20 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___skeleton_20), (void*)L_16);
		// if (applyOnStart) {
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->___applyOnStart_7;
		if (!L_18)
		{
			goto IL_0098;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Apply();
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_19 = V_1;
		NullCheck(L_19);
		SkeletonRagdoll2D_Apply_mC6B44DF9A27B4ECCEE9EADCBA7F073965BFF8718(L_19, NULL);
	}

IL_0098:
	{
		// }
		return (bool)0;
	}
}
// System.Object Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB095311342298977CE79F19B21D37189A584B098 (U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__33_System_Collections_IEnumerator_Reset_mC3C668003B9668329526657DCE800D51C89EC6D7 (U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__33_System_Collections_IEnumerator_Reset_mC3C668003B9668329526657DCE800D51C89EC6D7_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SkeletonRagdoll2D/<Start>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__33_System_Collections_IEnumerator_get_Current_m3085C5F1FE93659C3A2FB12424467786E01DC1D6 (U3CStartU3Ed__33_tBB41C0783ACD71DB37556B4B3625E3F52D473CF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMixCoroutineU3Ed__40__ctor_m7E9F9CD8AB5F0EF73E7B20719A8AA91451E31000 (U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMixCoroutineU3Ed__40_System_IDisposable_Dispose_mC677500495C34227C1F456A2713982A08DE88624 (U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMixCoroutineU3Ed__40_MoveNext_m09880EA4FE0EF7078E5B0CF7F44198EDBA54B5EC (U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float startTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__2_5 = L_4;
		// float startMix = mix;
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->___mix_17;
		__this->___U3CstartMixU3E5__3_6 = L_6;
		goto IL_0083;
	}

IL_0037:
	{
		// skeleton.SetBonesToSetupPose();
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_7 = V_1;
		NullCheck(L_7);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_8 = L_7->___skeleton_20;
		NullCheck(L_8);
		Skeleton_SetBonesToSetupPose_m370ECBB35E6EF90EF9981557CFE9D054B39CF9C4(L_8, NULL);
		// mix = Mathf.SmoothStep(startMix, target, (Time.time - startTime) / duration);
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_9 = V_1;
		float L_10 = __this->___U3CstartMixU3E5__3_6;
		float L_11 = __this->___target_3;
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_13 = __this->___U3CstartTimeU3E5__2_5;
		float L_14 = __this->___duration_4;
		float L_15;
		L_15 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline(L_10, L_11, ((float)(((float)il2cpp_codegen_subtract(L_12, L_13))/L_14)), NULL);
		NullCheck(L_9);
		L_9->___mix_17 = L_15;
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0083:
	{
		// while (mix > 0) {
		SkeletonRagdoll2D_tC318699B6A99E554977A3371D754E95E3313EE04* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___mix_17;
		if ((((float)L_17) > ((float)(0.0f))))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMixCoroutineU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m18B0DDF9827CC92604EBC829E2BDCBAAFE47762F (U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMixCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_m70E2829069F96955D4D4912C28E9512CA852C40A (U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMixCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_m70E2829069F96955D4D4912C28E9512CA852C40A_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SkeletonRagdoll2D/<SmoothMixCoroutine>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMixCoroutineU3Ed__40_System_Collections_IEnumerator_get_Current_m328EEED3E183B312D39C88882784822E3E58EB31 (U3CSmoothMixCoroutineU3Ed__40_t447B290CF79ABAEEB00D502B3C1590205CDE6307* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Spine.Unity.Examples.SkeletonUtilityEyeConstraint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityEyeConstraint_OnEnable_mAE1A23E6D1EE9E8902A6DF307D94A07EF8E608F6 (SkeletonUtilityEyeConstraint_t067D714E6F16EA4BC09386ED88E94DBC49D1955E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (!Application.isPlaying) return;
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) return;
		return;
	}

IL_0008:
	{
		// base.OnEnable();
		SkeletonUtilityConstraint_OnEnable_m80064A37ECE0CA3D99507A0EFF47802542A6C3BA(__this, NULL);
		// Bounds centerBounds = new Bounds(eyes[0].localPosition, Vector3.zero);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___eyes_6;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_0), L_4, L_5, NULL);
		// origins = new Vector3[eyes.Length];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___eyes_6;
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		__this->___origins_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origins_11), (void*)L_7);
		// for (int i = 0; i < eyes.Length; i++) {
		V_1 = 0;
		goto IL_006e;
	}

IL_003e:
	{
		// origins[i] = eyes[i].localPosition;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___origins_11;
		int32_t L_9 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___eyes_6;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_14);
		// centerBounds.Encapsulate(origins[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___origins_11;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F((&V_0), L_18, NULL);
		// for (int i = 0; i < eyes.Length; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < eyes.Length; i++) {
		int32_t L_20 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->___eyes_6;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// centerPoint = centerBounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		__this->___centerPoint_12 = L_22;
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityEyeConstraint::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityEyeConstraint_OnDisable_m8B0B84A2BCBFD77A8AADB1B548D2875FD33CCBAA (SkeletonUtilityEyeConstraint_t067D714E6F16EA4BC09386ED88E94DBC49D1955E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!Application.isPlaying) return;
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!Application.isPlaying) return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < eyes.Length; i++) {
		V_0 = 0;
		goto IL_0029;
	}

IL_000c:
	{
		// eyes[i].localPosition = origins[i];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___eyes_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___origins_11;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_8, NULL);
		// for (int i = 0; i < eyes.Length; i++) {
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < eyes.Length; i++) {
		int32_t L_10 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = __this->___eyes_6;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// base.OnDisable();
		SkeletonUtilityConstraint_OnDisable_mE07969C55C851CA9BEA90BFFE43E47D5906642CC(__this, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityEyeConstraint::DoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityEyeConstraint_DoUpdate_m2C0CB11F57176F02C40C02ECA3196F214406B834 (SkeletonUtilityEyeConstraint_t067D714E6F16EA4BC09386ED88E94DBC49D1955E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (target != null) targetPosition = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (target != null) targetPosition = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_8;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___targetPosition_9 = L_3;
	}

IL_001f:
	{
		// Vector3 goal = targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___targetPosition_9;
		// Vector3 center = transform.TransformPoint(centerPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___centerPoint_12;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_6, NULL);
		V_0 = L_7;
		// Vector3 dir = goal - center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_8, NULL);
		V_1 = L_9;
		// if (dir.magnitude > 1)
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_10) > ((float)(1.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		// dir.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
	}

IL_0053:
	{
		// for (int i = 0; i < eyes.Length; i++) {
		V_2 = 0;
		goto IL_00cc;
	}

IL_0057:
	{
		// center = transform.TransformPoint(origins[i]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = __this->___origins_11;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_11, L_15, NULL);
		V_0 = L_16;
		// eyes[i].position = Vector3.MoveTowards(eyes[i].position, center + (dir * radius * hierarchy.PositionScale),
		//     speed * hierarchy.PositionScale * Time.deltaTime);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = __this->___eyes_6;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->___eyes_6;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = __this->___radius_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* L_30 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___hierarchy_5;
		NullCheck(L_30);
		float L_31;
		L_31 = SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_32, NULL);
		float L_34 = __this->___speed_10;
		SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* L_35 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___hierarchy_5;
		NullCheck(L_35);
		float L_36;
		L_36 = SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline(L_35, NULL);
		float L_37;
		L_37 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_25, L_33, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_34, L_36)), L_37)), NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_38, NULL);
		// for (int i = 0; i < eyes.Length; i++) {
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cc:
	{
		// for (int i = 0; i < eyes.Length; i++) {
		int32_t L_40 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_41 = __this->___eyes_6;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityEyeConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityEyeConstraint__ctor_mB3379AFDAA606258D52BC7E29A80907F8362765B (SkeletonUtilityEyeConstraint_t067D714E6F16EA4BC09386ED88E94DBC49D1955E* __this, const RuntimeMethod* method) 
{
	{
		// public float radius = 0.5f;
		__this->___radius_7 = (0.5f);
		// public float speed = 10;
		__this->___speed_10 = (10.0f);
		SkeletonUtilityConstraint__ctor_mB15E8A658E850D0FA65995A9B054311F90F5826D(__this, NULL);
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
// System.Void Spine.Unity.Examples.SkeletonUtilityGroundConstraint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityGroundConstraint_OnEnable_m65EB2E4587D4762E74EF1A9747F6388851F77169 (SkeletonUtilityGroundConstraint_tA025862E1902B86FD0D6695B58F6E5B1F0362EF6* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		SkeletonUtilityConstraint_OnEnable_m80064A37ECE0CA3D99507A0EFF47802542A6C3BA(__this, NULL);
		// lastHitY = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		__this->___lastHitY_17 = L_2;
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityGroundConstraint::DoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityGroundConstraint_DoUpdate_m17D5BD4AED4FE0245523735E32EBDA7A16B1D49E (SkeletonUtilityGroundConstraint_tA025862E1902B86FD0D6695B58F6E5B1F0362EF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// rayOrigin = transform.position + new Vector3(castOffset, castDistance, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___castOffset_11;
		float L_3 = __this->___castDistance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_2, L_3, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		__this->___rayOrigin_14 = L_5;
		// float positionScale = hierarchy.PositionScale;
		SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* L_6 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___hierarchy_5;
		NullCheck(L_6);
		float L_7;
		L_7 = SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline(L_6, NULL);
		V_0 = L_7;
		// float adjustDistanceThisFrame = adjustSpeed * positionScale * Time.deltaTime;
		float L_8 = __this->___adjustSpeed_13;
		float L_9 = V_0;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10));
		// hitY = float.MinValue;
		__this->___hitY_16 = (-(std::numeric_limits<float>::max)());
		// if (use2D) {
		bool L_11 = __this->___use2D_7;
		if (!L_11)
		{
			goto IL_0155;
		}
	}
	{
		// if (useRadius)
		bool L_12 = __this->___useRadius_8;
		if (!L_12)
		{
			goto IL_00a1;
		}
	}
	{
		// hit = Physics2D.CircleCast(rayOrigin, castRadius, rayDir, castDistance + groundOffset, groundMask);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___rayOrigin_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		float L_15 = __this->___castRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___rayDir_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_16, NULL);
		float L_18 = __this->___castDistance_10;
		float L_19 = __this->___groundOffset_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_20 = __this->___groundMask_6;
		int32_t L_21;
		L_21 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_22;
		L_22 = Physics2D_CircleCast_mFDA98331D99470872994987932FCAF8E2539467A(L_14, L_15, L_17, ((float)il2cpp_codegen_add(L_18, L_19)), L_21, NULL);
		V_3 = L_22;
		goto IL_00d5;
	}

IL_00a1:
	{
		// hit = Physics2D.Raycast(rayOrigin, rayDir, castDistance + groundOffset, groundMask);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___rayOrigin_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___rayDir_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_25, NULL);
		float L_27 = __this->___castDistance_10;
		float L_28 = __this->___groundOffset_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_29 = __this->___groundMask_6;
		int32_t L_30;
		L_30 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_31;
		L_31 = Physics2D_Raycast_m5BF2A59AAEE0B488FB3ECD1D3AF3537FD7789E7F(L_24, L_26, ((float)il2cpp_codegen_add(L_27, L_28)), L_30, NULL);
		V_3 = L_31;
	}

IL_00d5:
	{
		// if (hit.collider != null) {
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32;
		L_32 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_3), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_0124;
		}
	}
	{
		// hitY = hit.point.y + groundOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B((&V_3), NULL);
		float L_35 = L_34.___y_1;
		float L_36 = __this->___groundOffset_12;
		__this->___hitY_16 = ((float)il2cpp_codegen_add(L_35, L_36));
		// if (Application.isPlaying)
		bool L_37;
		L_37 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_37)
		{
			goto IL_0229;
		}
	}
	{
		// hitY = Mathf.MoveTowards(lastHitY, hitY, adjustDistanceThisFrame);
		float L_38 = __this->___lastHitY_17;
		float L_39 = __this->___hitY_16;
		float L_40 = V_1;
		float L_41;
		L_41 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_38, L_39, L_40, NULL);
		__this->___hitY_16 = L_41;
		goto IL_0229;
	}

IL_0124:
	{
		// if (Application.isPlaying)
		bool L_42;
		L_42 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_42)
		{
			goto IL_0229;
		}
	}
	{
		// hitY = Mathf.MoveTowards(lastHitY, transform.position.y, adjustDistanceThisFrame);
		float L_43 = __this->___lastHitY_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		float L_46 = L_45.___y_3;
		float L_47 = V_1;
		float L_48;
		L_48 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_43, L_46, L_47, NULL);
		__this->___hitY_16 = L_48;
		goto IL_0229;
	}

IL_0155:
	{
		// bool validHit = false;
		V_5 = (bool)0;
		// if (useRadius)
		bool L_49 = __this->___useRadius_8;
		if (!L_49)
		{
			goto IL_0195;
		}
	}
	{
		// validHit = Physics.SphereCast(rayOrigin, castRadius, rayDir, out hit, castDistance + groundOffset, groundMask);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = __this->___rayOrigin_14;
		float L_51 = __this->___castRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = __this->___rayDir_15;
		float L_53 = __this->___castDistance_10;
		float L_54 = __this->___groundOffset_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_55 = __this->___groundMask_6;
		int32_t L_56;
		L_56 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_55, NULL);
		bool L_57;
		L_57 = Physics_SphereCast_m2A41FD7023EC5B89B69E0A8948325BEF46D9597C(L_50, L_51, L_52, (&V_4), ((float)il2cpp_codegen_add(L_53, L_54)), L_56, NULL);
		V_5 = L_57;
		goto IL_01c2;
	}

IL_0195:
	{
		// validHit = Physics.Raycast(rayOrigin, rayDir, out hit, castDistance + groundOffset, groundMask);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = __this->___rayOrigin_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___rayDir_15;
		float L_60 = __this->___castDistance_10;
		float L_61 = __this->___groundOffset_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_62 = __this->___groundMask_6;
		int32_t L_63;
		L_63 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_62, NULL);
		bool L_64;
		L_64 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_58, L_59, (&V_4), ((float)il2cpp_codegen_add(L_60, L_61)), L_63, NULL);
		V_5 = L_64;
	}

IL_01c2:
	{
		// if (validHit) {
		bool L_65 = V_5;
		if (!L_65)
		{
			goto IL_0200;
		}
	}
	{
		// hitY = hit.point.y + groundOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_4), NULL);
		float L_67 = L_66.___y_3;
		float L_68 = __this->___groundOffset_12;
		__this->___hitY_16 = ((float)il2cpp_codegen_add(L_67, L_68));
		// if (Application.isPlaying)
		bool L_69;
		L_69 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_69)
		{
			goto IL_0229;
		}
	}
	{
		// hitY = Mathf.MoveTowards(lastHitY, hitY, adjustDistanceThisFrame);
		float L_70 = __this->___lastHitY_17;
		float L_71 = __this->___hitY_16;
		float L_72 = V_1;
		float L_73;
		L_73 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_70, L_71, L_72, NULL);
		__this->___hitY_16 = L_73;
		goto IL_0229;
	}

IL_0200:
	{
		// if (Application.isPlaying)
		bool L_74;
		L_74 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_74)
		{
			goto IL_0229;
		}
	}
	{
		// hitY = Mathf.MoveTowards(lastHitY, transform.position.y, adjustDistanceThisFrame);
		float L_75 = __this->___lastHitY_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		float L_78 = L_77.___y_3;
		float L_79 = V_1;
		float L_80;
		L_80 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_75, L_78, L_79, NULL);
		__this->___hitY_16 = L_80;
	}

IL_0229:
	{
		// Vector3 v = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		V_2 = L_82;
		// v.y = Mathf.Clamp(v.y, Mathf.Min(lastHitY, hitY), float.MaxValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_2;
		float L_84 = L_83.___y_3;
		float L_85 = __this->___lastHitY_17;
		float L_86 = __this->___hitY_16;
		float L_87;
		L_87 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_85, L_86, NULL);
		float L_88;
		L_88 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_84, L_87, ((std::numeric_limits<float>::max)()), NULL);
		(&V_2)->___y_3 = L_88;
		// transform.position = v;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_2;
		NullCheck(L_89);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_89, L_90, NULL);
		// bone.bone.X = transform.localPosition.x / hierarchy.PositionScale;
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_91 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___bone_4;
		NullCheck(L_91);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_92 = L_91->___bone_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_93, NULL);
		float L_95 = L_94.___x_2;
		SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* L_96 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___hierarchy_5;
		NullCheck(L_96);
		float L_97;
		L_97 = SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline(L_96, NULL);
		NullCheck(L_92);
		Bone_set_X_m10BD781CAF059F5D8E067462ED0DCE14E693905B_inline(L_92, ((float)(L_95/L_97)), NULL);
		// bone.bone.Y = transform.localPosition.y / hierarchy.PositionScale;
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_98 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___bone_4;
		NullCheck(L_98);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_99 = L_98->___bone_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_100, NULL);
		float L_102 = L_101.___y_3;
		SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* L_103 = ((SkeletonUtilityConstraint_tDF043BEE808F1AF020EEB2BC58935EE5880DC811*)__this)->___hierarchy_5;
		NullCheck(L_103);
		float L_104;
		L_104 = SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline(L_103, NULL);
		NullCheck(L_99);
		Bone_set_Y_mF0B3668ED180E2A2949749789869399ECDD028FD_inline(L_99, ((float)(L_102/L_104)), NULL);
		// lastHitY = hitY;
		float L_105 = __this->___hitY_16;
		__this->___lastHitY_17 = L_105;
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityGroundConstraint::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityGroundConstraint_OnDrawGizmos_mD6A8CA4C50596AB7C6AAC4CF9C2EE5D701CE81BC (SkeletonUtilityGroundConstraint_tA025862E1902B86FD0D6695B58F6E5B1F0362EF6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 hitEnd = rayOrigin + (rayDir * Mathf.Min(castDistance, rayOrigin.y - hitY));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rayOrigin_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___rayDir_15;
		float L_2 = __this->___castDistance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___rayOrigin_14);
		float L_4 = L_3->___y_3;
		float L_5 = __this->___hitY_16;
		float L_6;
		L_6 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_2, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_7, NULL);
		V_0 = L_8;
		// Vector3 clearEnd = rayOrigin + (rayDir * castDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___rayOrigin_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___rayDir_15;
		float L_11 = __this->___castDistance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_12, NULL);
		V_1 = L_13;
		// Gizmos.DrawLine(rayOrigin, hitEnd);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___rayOrigin_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_14, L_15, NULL);
		// if (useRadius) {
		bool L_16 = __this->___useRadius_8;
		if (!L_16)
		{
			goto IL_00f8;
		}
	}
	{
		// Gizmos.DrawLine(new Vector3(hitEnd.x - castRadius, hitEnd.y - groundOffset, hitEnd.z), new Vector3(hitEnd.x + castRadius, hitEnd.y - groundOffset, hitEnd.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		float L_18 = L_17.___x_2;
		float L_19 = __this->___castRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		float L_21 = L_20.___y_3;
		float L_22 = __this->___groundOffset_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((float)il2cpp_codegen_subtract(L_18, L_19)), ((float)il2cpp_codegen_subtract(L_21, L_22)), L_24, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		float L_28 = __this->___castRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = L_29.___y_3;
		float L_31 = __this->___groundOffset_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = L_32.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), ((float)il2cpp_codegen_add(L_27, L_28)), ((float)il2cpp_codegen_subtract(L_30, L_31)), L_33, /*hidden argument*/NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_25, L_34, NULL);
		// Gizmos.DrawLine(new Vector3(clearEnd.x - castRadius, clearEnd.y, clearEnd.z), new Vector3(clearEnd.x + castRadius, clearEnd.y, clearEnd.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___x_2;
		float L_37 = __this->___castRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_1;
		float L_39 = L_38.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_1;
		float L_41 = L_40.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_subtract(L_36, L_37)), L_39, L_41, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		float L_44 = L_43.___x_2;
		float L_45 = __this->___castRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		float L_47 = L_46.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		float L_49 = L_48.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), ((float)il2cpp_codegen_add(L_44, L_45)), L_47, L_49, /*hidden argument*/NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_42, L_50, NULL);
	}

IL_00f8:
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51;
		L_51 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_51, NULL);
		// Gizmos.DrawLine(hitEnd, clearEnd);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_1;
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_52, L_53, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityGroundConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityGroundConstraint__ctor_m8F1A0811BB4AB88D5561F266920E02A3C65728A8 (SkeletonUtilityGroundConstraint_tA025862E1902B86FD0D6695B58F6E5B1F0362EF6* __this, const RuntimeMethod* method) 
{
	{
		// public float castRadius = 0.1f;
		__this->___castRadius_9 = (0.100000001f);
		// public float castDistance = 5f;
		__this->___castDistance_10 = (5.0f);
		// public float adjustSpeed = 5;
		__this->___adjustSpeed_13 = (5.0f);
		// Vector3 rayDir = new Vector3(0, -1, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rayDir_15 = L_0;
		SkeletonUtilityConstraint__ctor_mB15E8A658E850D0FA65995A9B054311F90F5826D(__this, NULL);
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
// System.Void Spine.Unity.Examples.SkeletonUtilityKinematicShadow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityKinematicShadow_Start_m4328BAFA7DDC651B4C5E28D6D0E4CA17530B80D1 (SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mC72551764335C8C6C034460ECAE5DFF2C3061251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_mD5B2A70E32A65D808C2D77C410BDF8DAD959F6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F_mC107046C353818A60ABC78D38AF86B1E1FDE78E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_m9D356FDF7DEF54C642A6CF760F64BF6B5BDF8968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_m2AC5A35EFC2CCDD11338367F923BF9E3904205D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* V_3 = NULL;
	JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* V_4 = NULL;
	int32_t V_5 = 0;
	SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* V_6 = NULL;
	SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* V_7 = NULL;
	Type_t* V_8 = NULL;
	SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* V_9 = NULL;
	int32_t V_10 = 0;
	SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* V_11 = NULL;
	TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E V_12;
	memset((&V_12), 0, sizeof(V_12));
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* V_13 = NULL;
	Type_t* G_B14_0 = NULL;
	{
		// shadowRoot = Instantiate<GameObject>(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___shadowRoot_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadowRoot_8), (void*)L_1);
		// Destroy(shadowRoot.GetComponent<SkeletonUtilityKinematicShadow>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___shadowRoot_8;
		NullCheck(L_2);
		SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F* L_3;
		L_3 = GameObject_GetComponent_TisSkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F_mC107046C353818A60ABC78D38AF86B1E1FDE78E9(L_2, GameObject_GetComponent_TisSkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F_mC107046C353818A60ABC78D38AF86B1E1FDE78E9_RuntimeMethod_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// var shadowRootTransform = shadowRoot.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___shadowRoot_8;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		V_0 = L_5;
		// shadowRootTransform.position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// shadowRootTransform.rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
		// Vector3 scaleRef = transform.TransformPoint(Vector3.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_12, L_13, NULL);
		V_1 = L_14;
		// float scale = Vector3.Distance(transform.position, scaleRef);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		V_2 = L_18;
		// shadowRootTransform.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_20, NULL);
		// if (!detachedShadow) {
		bool L_21 = __this->___detachedShadow_4;
		if (L_21)
		{
			goto IL_00b2;
		}
	}
	{
		// if (parent == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___parent_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		// shadowRootTransform.parent = transform.root;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_25, NULL);
		NullCheck(L_24);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_24, L_26, NULL);
		goto IL_00b2;
	}

IL_00a6:
	{
		// shadowRootTransform.parent = parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___parent_5;
		NullCheck(L_27);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_27, L_28, NULL);
	}

IL_00b2:
	{
		// if (hideShadow)
		bool L_29 = __this->___hideShadow_6;
		if (!L_29)
		{
			goto IL_00c6;
		}
	}
	{
		// shadowRoot.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___shadowRoot_8;
		NullCheck(L_30);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_30, 1, NULL);
	}

IL_00c6:
	{
		// var shadowJoints = shadowRoot.GetComponentsInChildren<Joint>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___shadowRoot_8;
		NullCheck(L_31);
		JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* L_32;
		L_32 = GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_m9D356FDF7DEF54C642A6CF760F64BF6B5BDF8968(L_31, GameObject_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_m9D356FDF7DEF54C642A6CF760F64BF6B5BDF8968_RuntimeMethod_var);
		// foreach (Joint j in shadowJoints)
		V_4 = L_32;
		V_5 = 0;
		goto IL_00f4;
	}

IL_00d8:
	{
		// foreach (Joint j in shadowJoints)
		JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* L_33 = V_4;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		// j.connectedAnchor *= scale;
		Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* L_37 = L_36;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Joint_get_connectedAnchor_m455C8981D90A4A60DC5B290EBD1D9330A6649C18(L_37, NULL);
		float L_39 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		NullCheck(L_37);
		Joint_set_connectedAnchor_m2A40C3C4FB583E9DBC020222A21F577C066D5D90(L_37, L_40, NULL);
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f4:
	{
		// foreach (Joint j in shadowJoints)
		int32_t L_42 = V_5;
		JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* L_43 = V_4;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_00d8;
		}
	}
	{
		// var bones = GetComponentsInChildren<SkeletonUtilityBone>();
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_44;
		L_44 = Component_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_mD5B2A70E32A65D808C2D77C410BDF8DAD959F6C3(__this, Component_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_mD5B2A70E32A65D808C2D77C410BDF8DAD959F6C3_RuntimeMethod_var);
		// var shadowBones = shadowRoot.GetComponentsInChildren<SkeletonUtilityBone>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___shadowRoot_8;
		NullCheck(L_45);
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_46;
		L_46 = GameObject_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_m2AC5A35EFC2CCDD11338367F923BF9E3904205D8(L_45, GameObject_GetComponentsInChildren_TisSkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8_m2AC5A35EFC2CCDD11338367F923BF9E3904205D8_RuntimeMethod_var);
		V_3 = L_46;
		// foreach (var b in bones) {
		V_6 = L_44;
		V_5 = 0;
		goto IL_01d2;
	}

IL_0118:
	{
		// foreach (var b in bones) {
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_47 = V_6;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_7 = L_50;
		// if (b.gameObject == this.gameObject)
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_51 = V_7;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_51, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_52, L_53, NULL);
		if (L_54)
		{
			goto IL_01cc;
		}
	}
	{
		// System.Type checkType = (physicsSystem == PhysicsSystem.Physics2D) ? typeof(Rigidbody2D) : typeof(Rigidbody);
		int32_t L_55 = __this->___physicsSystem_7;
		if (!L_55)
		{
			goto IL_014a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		G_B14_0 = L_57;
		goto IL_0154;
	}

IL_014a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		G_B14_0 = L_59;
	}

IL_0154:
	{
		V_8 = G_B14_0;
		// foreach (var sb in shadowBones) {
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_60 = V_3;
		V_9 = L_60;
		V_10 = 0;
		goto IL_01c4;
	}

IL_015e:
	{
		// foreach (var sb in shadowBones) {
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_61 = V_9;
		int32_t L_62 = V_10;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_11 = L_64;
		// if (sb.GetComponent(checkType) != null && sb.boneName == b.boneName) {
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_65 = V_11;
		Type_t* L_66 = V_8;
		NullCheck(L_65);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_67;
		L_67 = Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D(L_65, L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_67, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_68)
		{
			goto IL_01be;
		}
	}
	{
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_69 = V_11;
		NullCheck(L_69);
		String_t* L_70 = L_69->___boneName_4;
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_71 = V_7;
		NullCheck(L_71);
		String_t* L_72 = L_71->___boneName_4;
		bool L_73;
		L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, L_72, NULL);
		if (!L_73)
		{
			goto IL_01be;
		}
	}
	{
		// shadowTable.Add(new TransformPair {
		//     dest = b.transform,
		//     src = sb.transform
		// });
		List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* L_74 = __this->___shadowTable_9;
		il2cpp_codegen_initobj((&V_12), sizeof(TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E));
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_75 = V_7;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_75, NULL);
		(&V_12)->___dest_0 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_12)->___dest_0), (void*)L_76);
		SkeletonUtilityBone_t9568B35B3800279D1394B1D282DFCFBA96B2D7E8* L_77 = V_11;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_77, NULL);
		(&V_12)->___src_1 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_12)->___src_1), (void*)L_78);
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_79 = V_12;
		NullCheck(L_74);
		List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_inline(L_74, L_79, List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_RuntimeMethod_var);
		// break;
		goto IL_01cc;
	}

IL_01be:
	{
		int32_t L_80 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01c4:
	{
		// foreach (var sb in shadowBones) {
		int32_t L_81 = V_10;
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_82 = V_9;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))
		{
			goto IL_015e;
		}
	}

IL_01cc:
	{
		int32_t L_83 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_01d2:
	{
		// foreach (var b in bones) {
		int32_t L_84 = V_5;
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_85 = V_6;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_0118;
		}
	}
	{
		// DestroyComponents(shadowBones);
		SkeletonUtilityBoneU5BU5D_t55AA06465E5B1258ABA00A707CCAB9AEBDAC8292* L_86 = V_3;
		V_13 = (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E*)L_86;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_87 = V_13;
		SkeletonUtilityKinematicShadow_DestroyComponents_m35A8B10B87AC8EA81FE8421E5188483F3086E639(L_87, NULL);
		// DestroyComponents(GetComponentsInChildren<Joint>());
		JointU5BU5D_t22BC4E51129A3B8CDC8CE4192531F02AE0AF353B* L_88;
		L_88 = Component_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mC72551764335C8C6C034460ECAE5DFF2C3061251(__this, Component_GetComponentsInChildren_TisJoint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682_mC72551764335C8C6C034460ECAE5DFF2C3061251_RuntimeMethod_var);
		V_13 = (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E*)L_88;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_89 = V_13;
		SkeletonUtilityKinematicShadow_DestroyComponents_m35A8B10B87AC8EA81FE8421E5188483F3086E639(L_89, NULL);
		// DestroyComponents(GetComponentsInChildren<Rigidbody>());
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_90;
		L_90 = Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391(__this, Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		V_13 = (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E*)L_90;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_91 = V_13;
		SkeletonUtilityKinematicShadow_DestroyComponents_m35A8B10B87AC8EA81FE8421E5188483F3086E639(L_91, NULL);
		// DestroyComponents(GetComponentsInChildren<Collider>());
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_92;
		L_92 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		V_13 = (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E*)L_92;
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_93 = V_13;
		SkeletonUtilityKinematicShadow_DestroyComponents_m35A8B10B87AC8EA81FE8421E5188483F3086E639(L_93, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityKinematicShadow::DestroyComponents(UnityEngine.Component[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityKinematicShadow_DestroyComponents_m35A8B10B87AC8EA81FE8421E5188483F3086E639 (ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___0_components, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0, n = components.Length; i < n; i++)
		V_0 = 0;
		// for (int i = 0, n = components.Length; i < n; i++)
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_0 = ___0_components;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_0014;
	}

IL_0008:
	{
		// Destroy(components[i]);
		ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* L_1 = ___0_components;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// for (int i = 0, n = components.Length; i < n; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		// for (int i = 0, n = components.Length; i < n; i++)
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityKinematicShadow::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityKinematicShadow_FixedUpdate_m1F340BEBD97398D29397ED0A888AA69B3EA37DA8 (SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (physicsSystem == PhysicsSystem.Physics2D) {
		int32_t L_0 = __this->___physicsSystem_7;
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		// var shadowRootRigidbody = shadowRoot.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___shadowRoot_8;
		NullCheck(L_1);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_1, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		// shadowRootRigidbody.MovePosition(transform.position);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		NullCheck(L_3);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_3, L_6, NULL);
		// shadowRootRigidbody.MoveRotation(transform.rotation.eulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_10 = L_9.___z_4;
		NullCheck(L_3);
		Rigidbody2D_MoveRotation_m33BC3C46E2584EB32C6E440AA4E9E58BEEEE8256(L_3, L_10, NULL);
		goto IL_0074;
	}

IL_0048:
	{
		// var shadowRootRigidbody = shadowRoot.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___shadowRoot_8;
		NullCheck(L_11);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_11, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// shadowRootRigidbody.MovePosition(transform.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = L_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_13, L_15, NULL);
		// shadowRootRigidbody.MoveRotation(transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		NullCheck(L_13);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_13, L_17, NULL);
	}

IL_0074:
	{
		// for (int i = 0, n = shadowTable.Count; i < n; i++) {
		V_1 = 0;
		// for (int i = 0, n = shadowTable.Count; i < n; i++) {
		List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* L_18 = __this->___shadowTable_9;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_inline(L_18, List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_RuntimeMethod_var);
		V_2 = L_19;
		goto IL_00c1;
	}

IL_0084:
	{
		// var pair = shadowTable[i];
		List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* L_20 = __this->___shadowTable_9;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_22;
		L_22 = List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52(L_20, L_21, List_1_get_Item_m7B7F3B2EF92F5644D78F30F61797C688F73ABC52_RuntimeMethod_var);
		V_3 = L_22;
		// pair.dest.localPosition = pair.src.localPosition;
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_23 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23.___dest_0;
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_25 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25.___src_1;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		NullCheck(L_24);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_24, L_27, NULL);
		// pair.dest.localRotation = pair.src.localRotation;
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_28 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28.___dest_0;
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_30 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30.___src_1;
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_31, NULL);
		NullCheck(L_29);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_29, L_32, NULL);
		// for (int i = 0, n = shadowTable.Count; i < n; i++) {
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c1:
	{
		// for (int i = 0, n = shadowTable.Count; i < n; i++) {
		int32_t L_34 = V_1;
		int32_t L_35 = V_2;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0084;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SkeletonUtilityKinematicShadow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUtilityKinematicShadow__ctor_m8825794FBA8A3B4457AD449B0B7209EF4D626F97 (SkeletonUtilityKinematicShadow_t83B5861CA014F0E89DE1154220BA1975956DCE5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hideShadow = true;
		__this->___hideShadow_6 = (bool)1;
		// public PhysicsSystem physicsSystem = PhysicsSystem.Physics3D;
		__this->___physicsSystem_7 = 1;
		// readonly List<TransformPair> shadowTable = new List<TransformPair>();
		List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* L_0 = (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF*)il2cpp_codegen_object_new(List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7(L_0, List_1__ctor_mA2683E1F2C33583747E880FC1FBA686160DA29C7_RuntimeMethod_var);
		__this->___shadowTable_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shadowTable_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
IL2CPP_EXTERN_C void TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshal_pinvoke(const TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E& unmarshaled, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___dest_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dest' of type 'TransformPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dest_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshal_pinvoke_back(const TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_pinvoke& marshaled, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E& unmarshaled)
{
	Exception_t* ___dest_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dest' of type 'TransformPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dest_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
IL2CPP_EXTERN_C void TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshal_pinvoke_cleanup(TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
IL2CPP_EXTERN_C void TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshal_com(const TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E& unmarshaled, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_com& marshaled)
{
	Exception_t* ___dest_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dest' of type 'TransformPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dest_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshal_com_back(const TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_com& marshaled, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E& unmarshaled)
{
	Exception_t* ___dest_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dest' of type 'TransformPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dest_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Spine.Unity.Examples.SkeletonUtilityKinematicShadow/TransformPair
IL2CPP_EXTERN_C void TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshal_com_cleanup(TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spine.Unity.Examples.SlotTintBlackFollower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotTintBlackFollower_Start_mB654756B7077E4ECE8ABF6033A5449A70BA7872F (SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2* __this, const RuntimeMethod* method) 
{
	{
		// Initialize(false);
		SlotTintBlackFollower_Initialize_m34070A8473BF09DF418643513493EFDF43FAB967(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SlotTintBlackFollower::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotTintBlackFollower_Initialize_m34070A8473BF09DF418643513493EFDF43FAB967 (SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2* __this, bool ___0_overwrite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_m27386C0ED21D919FD771CF9F965542CBFE70DDC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (overwrite || mb == null) {
		bool L_0 = ___0_overwrite;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_1 = __this->___mb_9;
		if (L_1)
		{
			goto IL_0060;
		}
	}

IL_000b:
	{
		// mb = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_2, NULL);
		__this->___mb_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mb_9), (void*)L_2);
		// mr = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___mr_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mr_8), (void*)L_3);
		// slot = GetComponent<ISkeletonComponent>().Skeleton.FindSlot(slotName);
		RuntimeObject* L_4;
		L_4 = Component_GetComponent_TisISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_m27386C0ED21D919FD771CF9F965542CBFE70DDC4(__this, Component_GetComponent_TisISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_m27386C0ED21D919FD771CF9F965542CBFE70DDC4_RuntimeMethod_var);
		NullCheck(L_4);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_5;
		L_5 = InterfaceFuncInvoker0< Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* >::Invoke(1 /* Spine.Skeleton Spine.Unity.ISkeletonComponent::get_Skeleton() */, ISkeletonComponent_t33C74410837089F7A80E6488BC2BA6EFC39C7482_il2cpp_TypeInfo_var, L_4);
		String_t* L_6 = __this->___slotName_4;
		NullCheck(L_5);
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_7;
		L_7 = Skeleton_FindSlot_mBB2C51558223E098DA11648C5A1E070F307CDC16(L_5, L_6, NULL);
		__this->___slot_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slot_7), (void*)L_7);
		// colorPropertyId = Shader.PropertyToID(colorPropertyName);
		String_t* L_8 = __this->___colorPropertyName_5;
		int32_t L_9;
		L_9 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_8, NULL);
		__this->___colorPropertyId_10 = L_9;
		// blackPropertyId = Shader.PropertyToID(blackPropertyName);
		String_t* L_10 = __this->___blackPropertyName_6;
		int32_t L_11;
		L_11 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_10, NULL);
		__this->___blackPropertyId_11 = L_11;
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SlotTintBlackFollower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotTintBlackFollower_Update_m037B2D3207EEC4B17BDEA4F5C524D7D6154E170C (SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2* __this, const RuntimeMethod* method) 
{
	Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* V_0 = NULL;
	{
		// Slot s = slot;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_0 = __this->___slot_7;
		V_0 = L_0;
		// if (s == null) return;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (s == null) return;
		return;
	}

IL_000b:
	{
		// mb.SetColor(colorPropertyId, s.GetColor());
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = __this->___mb_9;
		int32_t L_3 = __this->___colorPropertyId_10;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_4 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SkeletonExtensions_GetColor_mAFACEA45926C78BAB99C069ACAF578C0368022D9(L_4, NULL);
		NullCheck(L_2);
		MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6(L_2, L_3, L_5, NULL);
		// mb.SetColor(blackPropertyId, s.GetColorTintBlack());
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_6 = __this->___mb_9;
		int32_t L_7 = __this->___blackPropertyId_11;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_8 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = SkeletonExtensions_GetColorTintBlack_mED439D70F6864FB770C32EF0ADB519A7C00A2314(L_8, NULL);
		NullCheck(L_6);
		MaterialPropertyBlock_SetColor_m2E7CA761D98625E3B3CF380D3EBB2C99908FDFF6(L_6, L_7, L_9, NULL);
		// mr.SetPropertyBlock(mb);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10 = __this->___mr_8;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_11 = __this->___mb_9;
		NullCheck(L_10);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SlotTintBlackFollower::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotTintBlackFollower_OnDisable_mC6FC232487CF6A0655EAAB6BB174BC7203B328D2 (SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2* __this, const RuntimeMethod* method) 
{
	{
		// mb.Clear();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = __this->___mb_9;
		NullCheck(L_0);
		MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253(L_0, NULL);
		// mr.SetPropertyBlock(mb);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___mr_8;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = __this->___mb_9;
		NullCheck(L_1);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SlotTintBlackFollower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotTintBlackFollower__ctor_m25147F80B40FD341C8443C96DDB99C4449721F28 (SlotTintBlackFollower_t11F94A4F22CA62E353693A22A41DC4618E90FAD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string colorPropertyName = "_Color";
		__this->___colorPropertyName_5 = _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorPropertyName_5), (void*)_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		// protected string blackPropertyName = "_Black";
		__this->___blackPropertyName_6 = _stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blackPropertyName_6), (void*)_stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Collections.IEnumerator Spine.Unity.Examples.SpawnFromSkeletonDataExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnFromSkeletonDataExample_Start_mC77DDF452C5C58F6195A922E45981CBED212F216 (SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* L_0 = (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C*)il2cpp_codegen_object_new(U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__3__ctor_m7C60ADDB5DAFACAC67A0189A603F79C1EEDF811A(L_0, 0, NULL);
		U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample::DoExtraStuff(Spine.Unity.SkeletonAnimation,Spine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromSkeletonDataExample_DoExtraStuff_mA6860A246AB5DFD92ADA11CFA9FF133E089C9B33 (SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* __this, SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* ___0_sa, Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* ___1_spineAnimation, const RuntimeMethod* method) 
{
	{
		// sa.transform.localPosition = Random.insideUnitCircle * 6f;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0 = ___0_sa;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Random_get_insideUnitCircle_mB2FE9BAA7DDF7FED2AA53EA4667F864747E20DA2(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_4, NULL);
		// sa.transform.SetParent(this.transform, false);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_5 = ___0_sa;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_6, L_7, (bool)0, NULL);
		// if (spineAnimation != null) {
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_8 = ___1_spineAnimation;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// sa.Initialize(false);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_9 = ___0_sa;
		NullCheck(L_9);
		VirtualActionInvoker2< bool, bool >::Invoke(9 /* System.Void Spine.Unity.SkeletonRenderer::Initialize(System.Boolean,System.Boolean) */, L_9, (bool)0, (bool)0);
		// sa.AnimationState.SetAnimation(0, spineAnimation, true);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_10 = ___0_sa;
		NullCheck(L_10);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_11;
		L_11 = SkeletonAnimation_get_AnimationState_m1A20C545DDF883CDCEC6DDD1FABFFFAC2BB46338(L_10, NULL);
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_12 = ___1_spineAnimation;
		NullCheck(L_11);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_13;
		L_13 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_11, 0, L_12, (bool)1, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnFromSkeletonDataExample__ctor_m7B95AD10A85F746821C4AB3970F6A52DFBCAC00D (SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* __this, const RuntimeMethod* method) 
{
	{
		// public int count = 20;
		__this->___count_5 = ((int32_t)20);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m7C60ADDB5DAFACAC67A0189A603F79C1EEDF811A (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_IDisposable_Dispose_mE5C0118C9C90E4BC65698A0CCDFF9468FDDDBCDE (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__3_MoveNext_mF8DD6CD08F608E0C8EAC39298BA7B5A5463B611B (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* V_1 = NULL;
	SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_00d5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (skeletonDataAsset == null) yield break;
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_3 = V_1;
		NullCheck(L_3);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_4 = L_3->___skeletonDataAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// if (skeletonDataAsset == null) yield break;
		return (bool)0;
	}

IL_0039:
	{
		// skeletonDataAsset.GetSkeletonData(false); // Preload SkeletonDataAsset.
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_6 = V_1;
		NullCheck(L_6);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_7 = L_6->___skeletonDataAsset_4;
		NullCheck(L_7);
		SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* L_8;
		L_8 = SkeletonDataAsset_GetSkeletonData_mCBAFA745AEC7A8191A7FBE1EE05A8A877886832E(L_7, (bool)0, NULL);
		// yield return new WaitForSeconds(1f); // Pretend stuff is happening.
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var spineAnimation = skeletonDataAsset.GetSkeletonData(false).FindAnimation(startingAnimation);
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_10 = V_1;
		NullCheck(L_10);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_11 = L_10->___skeletonDataAsset_4;
		NullCheck(L_11);
		SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* L_12;
		L_12 = SkeletonDataAsset_GetSkeletonData_mCBAFA745AEC7A8191A7FBE1EE05A8A877886832E(L_11, (bool)0, NULL);
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___startingAnimation_6;
		NullCheck(L_12);
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_15;
		L_15 = SkeletonData_FindAnimation_m8BC1E345991704D313FB523844D6BAE0B23E1977(L_12, L_14, NULL);
		__this->___U3CspineAnimationU3E5__2_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspineAnimationU3E5__2_3), (void*)L_15);
		// for (int i = 0; i < count; i++) {
		__this->___U3CiU3E5__3_4 = 0;
		goto IL_00ec;
	}

IL_008c:
	{
		// var sa = SkeletonAnimation.NewSkeletonAnimationGameObject(skeletonDataAsset); // Spawn a new SkeletonAnimation GameObject.
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_16 = V_1;
		NullCheck(L_16);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_17 = L_16->___skeletonDataAsset_4;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_18;
		L_18 = SkeletonAnimation_NewSkeletonAnimationGameObject_m0DB97DEFFAA91A5522AF9E8FF9ED46277134279D(L_17, (bool)0, NULL);
		V_2 = L_18;
		// DoExtraStuff(sa, spineAnimation); // optional stuff for fun.
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_19 = V_1;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_20 = V_2;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_21 = __this->___U3CspineAnimationU3E5__2_3;
		NullCheck(L_19);
		SpawnFromSkeletonDataExample_DoExtraStuff_mA6860A246AB5DFD92ADA11CFA9FF133E089C9B33(L_19, L_20, L_21, NULL);
		// sa.gameObject.name = i.ToString();
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_22 = V_2;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		int32_t* L_24 = (&__this->___U3CiU3E5__3_4);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		NullCheck(L_23);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_23, L_25, NULL);
		// yield return new WaitForSeconds(1f/8f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, (0.125f), NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < count; i++) {
		int32_t L_27 = __this->___U3CiU3E5__3_4;
		V_3 = L_27;
		int32_t L_28 = V_3;
		__this->___U3CiU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ec:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_29 = __this->___U3CiU3E5__3_4;
		SpawnFromSkeletonDataExample_t307EF6B77D5605FB53940292C06A87F1909DA0CA* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___count_5;
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_008c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEB44E24A50C9B18AB3D5A65789B30AD03F70F5ED (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m402C0DB882324A6145F263E2B05742BFEB5F66D5 (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m402C0DB882324A6145F263E2B05742BFEB5F66D5_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SpawnFromSkeletonDataExample/<Start>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__3_System_Collections_IEnumerator_get_Current_m5D837521AB2CB59914331E1F643CC8C35897D910 (U3CStartU3Ed__3_t68A3B8299E7C0BA39576F658CC7976EE8ACAAC3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Collections.IEnumerator Spine.Unity.Examples.SpawnSkeletonGraphicExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnSkeletonGraphicExample_Start_mF042D0B2261BBEA9776994A64224E0039C887423 (SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* L_0 = (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25*)il2cpp_codegen_object_new(U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__4__ctor_m980F2F5D5E2FFD8AE8AFE899F9C4BFD06847E99A(L_0, 0, NULL);
		U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Spine.Unity.Examples.SpawnSkeletonGraphicExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnSkeletonGraphicExample__ctor_m14458ECF0D24A848AC1A28DB09C024CDC49240DB (SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string startingSkin = "base";
		__this->___startingSkin_6 = _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startingSkin_6), (void*)_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m980F2F5D5E2FFD8AE8AFE899F9C4BFD06847E99A (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_IDisposable_Dispose_m37E4FF51B267046812AB7124615B1C5DD6D1D027 (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__4_MoveNext_mB33BD0F54252D58FE366D06B113F1AB46AF84AD6 (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE472AFC0F9FAB822C9437747F78C8F1D8A2C154);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (skeletonDataAsset == null) yield break;
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_4 = V_1;
		NullCheck(L_4);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_5 = L_4->___skeletonDataAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// if (skeletonDataAsset == null) yield break;
		return (bool)0;
	}

IL_002e:
	{
		// skeletonDataAsset.GetSkeletonData(false); // Preload SkeletonDataAsset.
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_7 = V_1;
		NullCheck(L_7);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_8 = L_7->___skeletonDataAsset_4;
		NullCheck(L_8);
		SkeletonData_t9C91D0DD00FAB7BC1C97343490070F3F8ACD517B* L_9;
		L_9 = SkeletonDataAsset_GetSkeletonData_mCBAFA745AEC7A8191A7FBE1EE05A8A877886832E(L_8, (bool)0, NULL);
		// yield return new WaitForSeconds(1f); // Pretend stuff is happening.
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var sg = SkeletonGraphic.NewSkeletonGraphicGameObject(skeletonDataAsset, this.transform, skeletonGraphicMaterial); // Spawn a new SkeletonGraphic GameObject.
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_11 = V_1;
		NullCheck(L_11);
		SkeletonDataAsset_tCA945F8ACCDEEE8C8424D2A6513D1C5FEFB8809F* L_12 = L_11->___skeletonDataAsset_4;
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_15 = V_1;
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = L_15->___skeletonGraphicMaterial_7;
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_17;
		L_17 = SkeletonGraphic_NewSkeletonGraphicGameObject_m7FA8B12C3AC526A92E3E4B0E6C4DD8E679E987C5(L_12, L_14, L_16, NULL);
		// sg.gameObject.name = "SkeletonGraphic Instance";
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_18 = L_17;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_19, _stringLiteralBE472AFC0F9FAB822C9437747F78C8F1D8A2C154, NULL);
		// sg.Initialize(false);
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_20 = L_18;
		NullCheck(L_20);
		SkeletonGraphic_Initialize_mA70023ABDC853E8A06E6C43469F774A422236530(L_20, (bool)0, NULL);
		// sg.Skeleton.SetSkin(startingSkin);
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_21 = L_20;
		NullCheck(L_21);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_22;
		L_22 = SkeletonGraphic_get_Skeleton_mF8BED82D73B930C6D58A62E787A6DC4DF7055BAF(L_21, NULL);
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = L_23->___startingSkin_6;
		NullCheck(L_22);
		Skeleton_SetSkin_m31B2FD53608CA4D06E795C97F43FD25AB8EE35DD(L_22, L_24, NULL);
		// sg.Skeleton.SetSlotsToSetupPose();
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_25 = L_21;
		NullCheck(L_25);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_26;
		L_26 = SkeletonGraphic_get_Skeleton_mF8BED82D73B930C6D58A62E787A6DC4DF7055BAF(L_25, NULL);
		NullCheck(L_26);
		Skeleton_SetSlotsToSetupPose_mEAB32BF8145328C01FADA8C5FB9C67B92B01F266(L_26, NULL);
		// sg.AnimationState.SetAnimation(0, startingAnimation, true);
		NullCheck(L_25);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_27;
		L_27 = SkeletonGraphic_get_AnimationState_m3D7C5FB2FE8A85DDC7FD3415D23E479847CA248C(L_25, NULL);
		SpawnSkeletonGraphicExample_tBDCFF0BF23287323EB1EA769624A5D354D2700DC* L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29 = L_28->___startingAnimation_5;
		NullCheck(L_27);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_30;
		L_30 = AnimationState_SetAnimation_m099FC5EF37AD99A92CAB686B7D594CD710A4F8F5(L_27, 0, L_29, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE160DFED79C38048CFBE9F515946F06CB9D037F (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mC8A5CEF06E9693177259AFF96A85D54F8DBEC3C4 (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mC8A5CEF06E9693177259AFF96A85D54F8DBEC3C4_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SpawnSkeletonGraphicExample/<Start>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_mB2CD94972537A7314D2DE7E0F5D057F14F77CBA8 (U3CStartU3Ed__4_tD8179291AADCC979D70CD32743DEB94ED2466B25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Spine.Unity.Examples.Spineboy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spineboy_Start_m9C23CBB52B166509DF3E06EF0BC61904B781DF12 (Spineboy_t6EF75A1A6479CF9DA839204EC4445788CE30C7EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spineboy_HandleEvent_m1FE03350D5280ABB5913F4F17D583A94233CACE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_m6BAD2B56ADD615B58BB4F90118364CC42BB0E473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		s_Il2CppMethodInitialized = true;
	}
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* G_B2_0 = NULL;
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* G_B2_1 = NULL;
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* G_B2_2 = NULL;
	TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* G_B1_0 = NULL;
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* G_B1_1 = NULL;
	AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* G_B1_2 = NULL;
	{
		// skeletonAnimation = GetComponent<SkeletonAnimation>(); // Get the SkeletonAnimation component for the GameObject this script is attached to.
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0;
		L_0 = Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49(__this, Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		__this->___skeletonAnimation_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skeletonAnimation_4), (void*)L_0);
		// var animationState = skeletonAnimation.AnimationState;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_1 = __this->___skeletonAnimation_4;
		NullCheck(L_1);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_2;
		L_2 = SkeletonAnimation_get_AnimationState_m1A20C545DDF883CDCEC6DDD1FABFFFAC2BB46338(L_1, NULL);
		// animationState.Event += HandleEvent;; // Call our method any time an animation fires an event.
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_3 = L_2;
		TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3* L_4 = (TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3*)il2cpp_codegen_object_new(TrackEntryEventDelegate_tC73115975F60CA3AE0364B9EB9901B89E30359F3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TrackEntryEventDelegate__ctor_mAF596E1A7BB113F19A6D463C56DA3FB785967887(L_4, __this, (intptr_t)((void*)Spineboy_HandleEvent_m1FE03350D5280ABB5913F4F17D583A94233CACE5_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AnimationState_add_Event_m40AD035662F3C785A11916336D8B5B8D90ADBE2C(L_3, L_4, NULL);
		// animationState.End += (entry) => Debug.Log("start: " + entry.TrackIndex); // A lambda can be used for the callback instead of a method.
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_5 = L_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var);
		TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* L_6 = ((U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var);
		U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90* L_8 = ((U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* L_9 = (TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C*)il2cpp_codegen_object_new(TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TrackEntryDelegate__ctor_m10BAF0EE519EA600096B052EF1DEBFDDBB222FB4(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_m6BAD2B56ADD615B58BB4F90118364CC42BB0E473_RuntimeMethod_var), NULL);
		TrackEntryDelegate_tC534B015761F6771D522A1894DFC271421A4A05C* L_10 = L_9;
		((U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0049:
	{
		NullCheck(G_B2_1);
		AnimationState_add_End_m44E9B9C09C3CA941DC2483DAC9DCA093D0F31F7F(G_B2_1, G_B2_0, NULL);
		// animationState.AddAnimation(0, "jump", false, 2);    // Queue jump to be played on track 0 two seconds after the starting animation.
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_11 = G_B2_2;
		NullCheck(L_11);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_12;
		L_12 = AnimationState_AddAnimation_m1E2E667BB12BF65EBC4A85525905D6282F577A1C(L_11, 0, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)0, (2.0f), NULL);
		// animationState.AddAnimation(0, "run", true, 0); // Queue walk to be looped on track 0 after the jump animation.
		NullCheck(L_11);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_13;
		L_13 = AnimationState_AddAnimation_m1E2E667BB12BF65EBC4A85525905D6282F577A1C(L_11, 0, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.Spineboy::HandleEvent(Spine.TrackEntry,Spine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spineboy_HandleEvent_m1FE03350D5280ABB5913F4F17D583A94233CACE5 (Spineboy_t6EF75A1A6479CF9DA839204EC4445788CE30C7EC* __this, TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* ___0_trackEntry, Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C74FD88D189B11B7B007C69CEC78065841B65C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	{
		// Debug.Log(trackEntry.TrackIndex + " " + trackEntry.Animation.Name + ": event " + e + ", " + e.Int);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_2 = ___0_trackEntry;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TrackEntry_get_TrackIndex_m50F8793A7BB90FA82EA36436AAC5A55BC565761C_inline(L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_7 = ___0_trackEntry;
		NullCheck(L_7);
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_8;
		L_8 = TrackEntry_get_Animation_m5BE3D98B59824CA342B208DD84BB9DE3265F7775_inline(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Animation_get_Name_mD835FCD7BFDAE8FD7E2C099B26887C9CACB0AF01_inline(L_8, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral7C74FD88D189B11B7B007C69CEC78065841B65C9);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral7C74FD88D189B11B7B007C69CEC78065841B65C9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* L_12 = ___1_e;
		Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = 4;
		G_B1_2 = L_11;
		G_B1_3 = L_11;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = 4;
			G_B2_2 = L_11;
			G_B2_3 = L_11;
			goto IL_003f;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0044;
	}

IL_003f:
	{
		NullCheck(G_B2_0);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_14;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0044:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B3_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* L_17 = ___1_e;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Event_get_Int_m98EEB1D28BA0626B1A65FA644F1602F5EDF44021_inline(L_17, NULL);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.Spineboy::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spineboy_OnMouseDown_mA7EBBA60CC8A5FBC5C64A578FE50CBC637285F49 (Spineboy_t6EF75A1A6479CF9DA839204EC4445788CE30C7EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// skeletonAnimation.AnimationState.SetAnimation(0, "jump", false); // Set jump to be played on track 0 immediately.
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0 = __this->___skeletonAnimation_4;
		NullCheck(L_0);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_1;
		L_1 = SkeletonAnimation_get_AnimationState_m1A20C545DDF883CDCEC6DDD1FABFFFAC2BB46338(L_0, NULL);
		NullCheck(L_1);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_2;
		L_2 = AnimationState_SetAnimation_m099FC5EF37AD99A92CAB686B7D594CD710A4F8F5(L_1, 0, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7, (bool)0, NULL);
		// skeletonAnimation.AnimationState.AddAnimation(0, "run", true, 0); // Queue walk to be looped on track 0 after the jump animation.
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_3 = __this->___skeletonAnimation_4;
		NullCheck(L_3);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_4;
		L_4 = SkeletonAnimation_get_AnimationState_m1A20C545DDF883CDCEC6DDD1FABFFFAC2BB46338(L_3, NULL);
		NullCheck(L_4);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_5;
		L_5 = AnimationState_AddAnimation_m1E2E667BB12BF65EBC4A85525905D6282F577A1C(L_4, 0, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.Spineboy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spineboy__ctor_m858720829D8B4E8FEF6A5F04D7BB716BAA708B43 (Spineboy_t6EF75A1A6479CF9DA839204EC4445788CE30C7EC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.Spineboy/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDCC80177BE395AAB3BB17BB9A673B23CDEE0C3E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90* L_0 = (U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90*)il2cpp_codegen_object_new(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9AFF4F7262E2E9632E20D85E150C7C1CE5CC0C88(L_0, NULL);
		((U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Spine.Unity.Examples.Spineboy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9AFF4F7262E2E9632E20D85E150C7C1CE5CC0C88 (U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Spine.Unity.Examples.Spineboy/<>c::<Start>b__1_0(Spine.TrackEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__1_0_m6BAD2B56ADD615B58BB4F90118364CC42BB0E473 (U3CU3Ec_t0B643D0B4E565D11314AA7F725D95874B2343A90* __this, TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* ___0_entry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58F236ACD2A7E65E36BAA974D5D2BD152D5EFEC0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// animationState.End += (entry) => Debug.Log("start: " + entry.TrackIndex); // A lambda can be used for the callback instead of a method.
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_0 = ___0_entry;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TrackEntry_get_TrackIndex_m50F8793A7BB90FA82EA36436AAC5A55BC565761C_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral58F236ACD2A7E65E36BAA974D5D2BD152D5EFEC0, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
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
// System.Void Spine.Unity.Examples.SpineboyBodyTilt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyBodyTilt_Start_mB0296D699DFF0F36F33A4994AD6937505BD99E38 (SpineboyBodyTilt_tA86B9E5596291C30A76E582C371FF9D384A39F23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpineboyBodyTilt_UpdateLocal_mD78E0BBE6CE0238D03DEE999EB883ADC8DC5312D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* V_0 = NULL;
	{
		// var skeletonAnimation = GetComponent<SkeletonAnimation>();
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0;
		L_0 = Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49(__this, Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		// var skeleton = skeletonAnimation.Skeleton;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_1 = L_0;
		NullCheck(L_1);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_2;
		L_2 = SkeletonRenderer_get_Skeleton_m4B631F464CF860CC96CB34DF8AF61EE6B4F940BA(L_1, NULL);
		V_0 = L_2;
		// hipBone = skeleton.FindBone(hip);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_3 = V_0;
		String_t* L_4 = __this->___hip_5;
		NullCheck(L_3);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_5;
		L_5 = Skeleton_FindBone_m0982633468F4F4F7E9885559059C699F655492B4(L_3, L_4, NULL);
		__this->___hipBone_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hipBone_13), (void*)L_5);
		// headBone = skeleton.FindBone(head);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_6 = V_0;
		String_t* L_7 = __this->___head_6;
		NullCheck(L_6);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_8;
		L_8 = Skeleton_FindBone_m0982633468F4F4F7E9885559059C699F655492B4(L_6, L_7, NULL);
		__this->___headBone_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headBone_14), (void*)L_8);
		// baseHeadRotation = headBone.Rotation;
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_9 = __this->___headBone_14;
		NullCheck(L_9);
		float L_10;
		L_10 = Bone_get_Rotation_mAECAF93DEE8568B372FC1C813564242DE0A8E198_inline(L_9, NULL);
		__this->___baseHeadRotation_12 = L_10;
		// skeletonAnimation.UpdateLocal += UpdateLocal;
		UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* L_11 = (UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD*)il2cpp_codegen_object_new(UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UpdateBonesDelegate__ctor_m5D2643AAEC1F332B439ECC8C8EC749DB2428E48B(L_11, __this, (intptr_t)((void*)SpineboyBodyTilt_UpdateLocal_mD78E0BBE6CE0238D03DEE999EB883ADC8DC5312D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		SkeletonAnimation_add_UpdateLocal_mE8BB626775666E7EA08BB616398F781F8EE81A85(L_1, L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyBodyTilt::UpdateLocal(Spine.Unity.ISkeletonAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyBodyTilt_UpdateLocal_mD78E0BBE6CE0238D03DEE999EB883ADC8DC5312D (SpineboyBodyTilt_tA86B9E5596291C30A76E582C371FF9D384A39F23* __this, RuntimeObject* ___0_animated, const RuntimeMethod* method) 
{
	{
		// hipRotationTarget = planter.Balance * hipTiltScale;
		SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* L_0 = __this->___planter_4;
		NullCheck(L_0);
		float L_1;
		L_1 = SpineboyFootplanter_get_Balance_m172CF9E20EF13645B78F42D0B032D94D8ADD7059_inline(L_0, NULL);
		float L_2 = __this->___hipTiltScale_7;
		__this->___hipRotationTarget_10 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// hipRotationSmoothed = Mathf.MoveTowards(hipRotationSmoothed, hipRotationTarget, Time.deltaTime * hipRotationMoveScale * Mathf.Abs(2f * planter.Balance / planter.offBalanceThreshold));
		float L_3 = __this->___hipRotationSmoothed_11;
		float L_4 = __this->___hipRotationTarget_10;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6 = __this->___hipRotationMoveScale_9;
		SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* L_7 = __this->___planter_4;
		NullCheck(L_7);
		float L_8;
		L_8 = SpineboyFootplanter_get_Balance_m172CF9E20EF13645B78F42D0B032D94D8ADD7059_inline(L_7, NULL);
		SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* L_9 = __this->___planter_4;
		NullCheck(L_9);
		float L_10 = L_9->___offBalanceThreshold_12;
		float L_11;
		L_11 = fabsf(((float)(((float)il2cpp_codegen_multiply((2.0f), L_8))/L_10)));
		float L_12;
		L_12 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_3, L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_11)), NULL);
		__this->___hipRotationSmoothed_11 = L_12;
		// hipBone.Rotation = hipRotationSmoothed;
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_13 = __this->___hipBone_13;
		float L_14 = __this->___hipRotationSmoothed_11;
		NullCheck(L_13);
		Bone_set_Rotation_mFA733E8C49F6FE44EEBE59F9347DE987B9EEA8A0_inline(L_13, L_14, NULL);
		// headBone.Rotation = baseHeadRotation + (-hipRotationSmoothed * headTiltScale);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_15 = __this->___headBone_14;
		float L_16 = __this->___baseHeadRotation_12;
		float L_17 = __this->___hipRotationSmoothed_11;
		float L_18 = __this->___headTiltScale_8;
		NullCheck(L_15);
		Bone_set_Rotation_mFA733E8C49F6FE44EEBE59F9347DE987B9EEA8A0_inline(L_15, ((float)il2cpp_codegen_add(L_16, ((float)il2cpp_codegen_multiply(((-L_17)), L_18)))), NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyBodyTilt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyBodyTilt__ctor_mE9961540B294FA49FB3FCEE44075611473B47DCD (SpineboyBodyTilt_tA86B9E5596291C30A76E582C371FF9D384A39F23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13773FFC88CA800F72BB50140243500ABFDE4268);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string hip = "hip", head = "head";
		__this->___hip_5 = _stringLiteral13773FFC88CA800F72BB50140243500ABFDE4268;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hip_5), (void*)_stringLiteral13773FFC88CA800F72BB50140243500ABFDE4268);
		// public string hip = "hip", head = "head";
		__this->___head_6 = _stringLiteral461EE177B772C8076E2D62C04952F00C85951024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_6), (void*)_stringLiteral461EE177B772C8076E2D62C04952F00C85951024);
		// public float hipTiltScale = 7;
		__this->___hipTiltScale_7 = (7.0f);
		// public float headTiltScale = 0.7f;
		__this->___headTiltScale_8 = (0.699999988f);
		// public float hipRotationMoveScale = 60f;
		__this->___hipRotationMoveScale_9 = (60.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpineboyFacialExpression::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFacialExpression_Start_mCB953E11D3BF38CECD9DB4C8A799A13F60BE20BA (SpineboyFacialExpression_t1BCBE093D4107CDD1265C1D7FB229D9270D40F2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var skeletonAnimation = GetComponent<SkeletonAnimation>();
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_0;
		L_0 = Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49(__this, Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		// var skeleton = skeletonAnimation.Skeleton;
		NullCheck(L_0);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_1;
		L_1 = SkeletonRenderer_get_Skeleton_m4B631F464CF860CC96CB34DF8AF61EE6B4F940BA(L_0, NULL);
		V_0 = L_1;
		// eyeSlot = skeleton.FindSlot(eyeSlotName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_2 = V_0;
		String_t* L_3 = __this->___eyeSlotName_5;
		NullCheck(L_2);
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_4;
		L_4 = Skeleton_FindSlot_mBB2C51558223E098DA11648C5A1E070F307CDC16(L_2, L_3, NULL);
		__this->___eyeSlot_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eyeSlot_11), (void*)L_4);
		// mouthSlot = skeleton.FindSlot(mouthSlotName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_5 = V_0;
		String_t* L_6 = __this->___mouthSlotName_6;
		NullCheck(L_5);
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_7;
		L_7 = Skeleton_FindSlot_mBB2C51558223E098DA11648C5A1E070F307CDC16(L_5, L_6, NULL);
		__this->___mouthSlot_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouthSlot_12), (void*)L_7);
		// int eyeSlotIndex = skeleton.FindSlotIndex(eyeSlotName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_8 = V_0;
		String_t* L_9 = __this->___eyeSlotName_5;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Skeleton_FindSlotIndex_m11D23BDA985A2E7608F36E229B3787AF5D7A307A(L_8, L_9, NULL);
		V_1 = L_10;
		// shockEye = skeleton.GetAttachment(eyeSlotIndex, shockEyeName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_11 = V_0;
		int32_t L_12 = V_1;
		String_t* L_13 = __this->___shockEyeName_7;
		NullCheck(L_11);
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_14;
		L_14 = Skeleton_GetAttachment_m60698A2DAF8757DBAF9C805FE06ACFFBC71B5AF0(L_11, L_12, L_13, NULL);
		__this->___shockEye_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shockEye_13), (void*)L_14);
		// normalEye = skeleton.GetAttachment(eyeSlotIndex, normalEyeName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_15 = V_0;
		int32_t L_16 = V_1;
		String_t* L_17 = __this->___normalEyeName_8;
		NullCheck(L_15);
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_18;
		L_18 = Skeleton_GetAttachment_m60698A2DAF8757DBAF9C805FE06ACFFBC71B5AF0(L_15, L_16, L_17, NULL);
		__this->___normalEye_14 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalEye_14), (void*)L_18);
		// int mouthSlotIndex = skeleton.FindSlotIndex(mouthSlotName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_19 = V_0;
		String_t* L_20 = __this->___mouthSlotName_6;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Skeleton_FindSlotIndex_m11D23BDA985A2E7608F36E229B3787AF5D7A307A(L_19, L_20, NULL);
		V_2 = L_21;
		// shockMouth = skeleton.GetAttachment(mouthSlotIndex, shockMouthName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_22 = V_0;
		int32_t L_23 = V_2;
		String_t* L_24 = __this->___shockMouthName_9;
		NullCheck(L_22);
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_25;
		L_25 = Skeleton_GetAttachment_m60698A2DAF8757DBAF9C805FE06ACFFBC71B5AF0(L_22, L_23, L_24, NULL);
		__this->___shockMouth_15 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shockMouth_15), (void*)L_25);
		// normalMouth = skeleton.GetAttachment(mouthSlotIndex, normalMouthName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_26 = V_0;
		int32_t L_27 = V_2;
		String_t* L_28 = __this->___normalMouthName_10;
		NullCheck(L_26);
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_29;
		L_29 = Skeleton_GetAttachment_m60698A2DAF8757DBAF9C805FE06ACFFBC71B5AF0(L_26, L_27, L_28, NULL);
		__this->___normalMouth_16 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalMouth_16), (void*)L_29);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFacialExpression::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFacialExpression_Update_mB7D293A6621F3E4297D2F060847CEFC49CBC381D (SpineboyFacialExpression_t1BCBE093D4107CDD1265C1D7FB229D9270D40F2F* __this, const RuntimeMethod* method) 
{
	{
		// if (Mathf.Abs(footPlanter.Balance) > balanceThreshold)
		SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* L_0 = __this->___footPlanter_4;
		NullCheck(L_0);
		float L_1;
		L_1 = SpineboyFootplanter_get_Balance_m172CF9E20EF13645B78F42D0B032D94D8ADD7059_inline(L_0, NULL);
		float L_2;
		L_2 = fabsf(L_1);
		float L_3 = __this->___balanceThreshold_17;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		// shockTimer = shockDuration;
		float L_4 = __this->___shockDuration_18;
		__this->___shockTimer_19 = L_4;
	}

IL_0024:
	{
		// if (shockTimer > 0)
		float L_5 = __this->___shockTimer_19;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		// shockTimer -= Time.deltaTime;
		float L_6 = __this->___shockTimer_19;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___shockTimer_19 = ((float)il2cpp_codegen_subtract(L_6, L_7));
	}

IL_0043:
	{
		// if (shockTimer > 0) {
		float L_8 = __this->___shockTimer_19;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// eyeSlot.Attachment = shockEye;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_9 = __this->___eyeSlot_11;
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_10 = __this->___shockEye_13;
		NullCheck(L_9);
		Slot_set_Attachment_m7BA3DBE047301357671C5825E59C1A366FE73D0F(L_9, L_10, NULL);
		// mouthSlot.Attachment = shockMouth;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_11 = __this->___mouthSlot_12;
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_12 = __this->___shockMouth_15;
		NullCheck(L_11);
		Slot_set_Attachment_m7BA3DBE047301357671C5825E59C1A366FE73D0F(L_11, L_12, NULL);
		return;
	}

IL_0073:
	{
		// eyeSlot.Attachment = normalEye;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_13 = __this->___eyeSlot_11;
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_14 = __this->___normalEye_14;
		NullCheck(L_13);
		Slot_set_Attachment_m7BA3DBE047301357671C5825E59C1A366FE73D0F(L_13, L_14, NULL);
		// mouthSlot.Attachment = normalMouth;
		Slot_t6C9F8A568734A033D371E1FA269E58AE118DEB85* L_15 = __this->___mouthSlot_12;
		Attachment_t4D43569E95C449AD75732FC16B0A47F07F176204* L_16 = __this->___normalMouth_16;
		NullCheck(L_15);
		Slot_set_Attachment_m7BA3DBE047301357671C5825E59C1A366FE73D0F(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFacialExpression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFacialExpression__ctor_mD8A421B725A9D13A9AD644190DCAB8897AD75217 (SpineboyFacialExpression_t1BCBE093D4107CDD1265C1D7FB229D9270D40F2F* __this, const RuntimeMethod* method) 
{
	{
		// public float balanceThreshold = 2.5f;
		__this->___balanceThreshold_17 = (2.5f);
		// public float shockDuration = 1f;
		__this->___shockDuration_18 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Spine.Unity.Examples.SpineboyFootplanter::get_Balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpineboyFootplanter_get_Balance_m172CF9E20EF13645B78F42D0B032D94D8ADD7059 (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, const RuntimeMethod* method) 
{
	{
		// public float Balance { get { return balance; } }
		float L_0 = __this->___balance_19;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFootplanter_Start_mEF7E06B6361CABA956A42FE671355B8C8907DE6D (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpineboyFootplanter_UpdateLocal_m53DCAC522943DB90CC5A0400D707A1F406021B29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Time.timeScale = timeScale;
		float L_0 = __this->___timeScale_4;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(L_0, NULL);
		// var tpos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// nearFoot.worldPos = tpos;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_3 = __this->___nearFoot_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		NullCheck(L_3);
		L_3->___worldPos_0 = L_5;
		// nearFoot.worldPos .x -= comfyDistance;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_6 = __this->___nearFoot_21;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&L_6->___worldPos_0);
		float* L_8 = (&L_7->___x_0);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = __this->___comfyDistance_9;
		*((float*)L_9) = (float)((float)il2cpp_codegen_subtract(L_10, L_11));
		// nearFoot.worldPosPrev = nearFoot.worldPosNext = nearFoot.worldPos;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_12 = __this->___nearFoot_21;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_13 = __this->___nearFoot_21;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_14 = __this->___nearFoot_21;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14->___worldPos_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = L_15;
		V_2 = L_16;
		NullCheck(L_13);
		L_13->___worldPosNext_5 = L_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
		NullCheck(L_12);
		L_12->___worldPosPrev_4 = L_17;
		// farFoot.worldPos = tpos;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_18 = __this->___farFoot_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_19, NULL);
		NullCheck(L_18);
		L_18->___worldPos_0 = L_20;
		// farFoot.worldPos.x += comfyDistance;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_21 = __this->___farFoot_22;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&L_21->___worldPos_0);
		float* L_23 = (&L_22->___x_0);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = __this->___comfyDistance_9;
		*((float*)L_24) = (float)((float)il2cpp_codegen_add(L_25, L_26));
		// farFoot.worldPosPrev = farFoot.worldPosNext = farFoot.worldPos;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_27 = __this->___farFoot_22;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_28 = __this->___farFoot_22;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_29 = __this->___farFoot_22;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = L_29->___worldPos_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = L_30;
		V_2 = L_31;
		NullCheck(L_28);
		L_28->___worldPosNext_5 = L_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_2;
		NullCheck(L_27);
		L_27->___worldPosPrev_4 = L_32;
		// var skeletonAnimation = GetComponent<SkeletonAnimation>();
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_33;
		L_33 = Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49(__this, Component_GetComponent_TisSkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A_m6020CEF81684DECD44FF5B722E326D5FB34FDC49_RuntimeMethod_var);
		V_1 = L_33;
		// skeleton = skeletonAnimation.Skeleton;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_34 = V_1;
		NullCheck(L_34);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_35;
		L_35 = SkeletonRenderer_get_Skeleton_m4B631F464CF860CC96CB34DF8AF61EE6B4F940BA(L_34, NULL);
		__this->___skeleton_23 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skeleton_23), (void*)L_35);
		// skeletonAnimation.UpdateLocal += UpdateLocal;
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_36 = V_1;
		UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD* L_37 = (UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD*)il2cpp_codegen_object_new(UpdateBonesDelegate_tDF212048AB03483AD7CDAA46A3D862E4703361FD_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UpdateBonesDelegate__ctor_m5D2643AAEC1F332B439ECC8C8EC749DB2428E48B(L_37, __this, (intptr_t)((void*)SpineboyFootplanter_UpdateLocal_m53DCAC522943DB90CC5A0400D707A1F406021B29_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		SkeletonAnimation_add_UpdateLocal_mE8BB626775666E7EA08BB616398F781F8EE81A85(L_36, L_37, NULL);
		// nearFootBone = skeleton.FindBone(nearBoneName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_38 = __this->___skeleton_23;
		String_t* L_39 = __this->___nearBoneName_5;
		NullCheck(L_38);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_40;
		L_40 = Skeleton_FindBone_m0982633468F4F4F7E9885559059C699F655492B4(L_38, L_39, NULL);
		__this->___nearFootBone_24 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nearFootBone_24), (void*)L_40);
		// farFootBone = skeleton.FindBone(farBoneName);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_41 = __this->___skeleton_23;
		String_t* L_42 = __this->___farBoneName_6;
		NullCheck(L_41);
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_43;
		L_43 = Skeleton_FindBone_m0982633468F4F4F7E9885559059C699F655492B4(L_41, L_42, NULL);
		__this->___farFootBone_25 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___farFootBone_25), (void*)L_43);
		// nearFoot.lerp = 1f;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_44 = __this->___nearFoot_21;
		NullCheck(L_44);
		L_44->___lerp_3 = (1.0f);
		// farFoot.lerp = 1f;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_45 = __this->___farFoot_22;
		NullCheck(L_45);
		L_45->___lerp_3 = (1.0f);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter::UpdateLocal(Spine.Unity.ISkeletonAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFootplanter_UpdateLocal_m53DCAC522943DB90CC5A0400D707A1F406021B29 (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, RuntimeObject* ___0_animated, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* V_6 = NULL;
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* V_7 = NULL;
	float V_8 = 0.0f;
	{
		// Transform thisTransform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_0;
		// Vector2 thisTransformPosition = thisTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		V_1 = L_3;
		// float centerOfGravityX = thisTransformPosition.x + centerOfGravityXOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
		float L_5 = L_4.___x_0;
		float L_6 = __this->___centerOfGravityXOffset_10;
		V_2 = ((float)il2cpp_codegen_add(L_5, L_6));
		// nearFoot.UpdateDistance(centerOfGravityX);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_7 = __this->___nearFoot_21;
		float L_8 = V_2;
		NullCheck(L_7);
		Foot_UpdateDistance_m3BAF945103B896A64C31BB379566E7FC286B820B(L_7, L_8, NULL);
		// farFoot.UpdateDistance(centerOfGravityX);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_9 = __this->___farFoot_22;
		float L_10 = V_2;
		NullCheck(L_9);
		Foot_UpdateDistance_m3BAF945103B896A64C31BB379566E7FC286B820B(L_9, L_10, NULL);
		// balance = nearFoot.displacementFromCenter + farFoot.displacementFromCenter;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_11 = __this->___nearFoot_21;
		NullCheck(L_11);
		float L_12 = L_11->___displacementFromCenter_1;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_13 = __this->___farFoot_22;
		NullCheck(L_13);
		float L_14 = L_13->___displacementFromCenter_1;
		__this->___balance_19 = ((float)il2cpp_codegen_add(L_12, L_14));
		// distanceBetweenFeet = Mathf.Abs(nearFoot.worldPos.x - farFoot.worldPos.x);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_15 = __this->___nearFoot_21;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&L_15->___worldPos_0);
		float L_17 = L_16->___x_0;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_18 = __this->___farFoot_22;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___worldPos_0);
		float L_20 = L_19->___x_0;
		float L_21;
		L_21 = fabsf(((float)il2cpp_codegen_subtract(L_17, L_20)));
		__this->___distanceBetweenFeet_20 = L_21;
		// bool isTooOffBalance = Mathf.Abs(balance) > offBalanceThreshold;
		float L_22 = __this->___balance_19;
		float L_23;
		L_23 = fabsf(L_22);
		float L_24 = __this->___offBalanceThreshold_12;
		V_3 = (bool)((((float)L_23) > ((float)L_24))? 1 : 0);
		// bool isFeetTooFarApart = distanceBetweenFeet > feetTooFarApartThreshold;
		float L_25 = __this->___distanceBetweenFeet_20;
		float L_26 = __this->___feetTooFarApartThreshold_11;
		// bool timeForNewStep = isFeetTooFarApart || isTooOffBalance;
		bool L_27 = V_3;
		// if (timeForNewStep) {
		if (!((int32_t)(((((float)L_25) > ((float)L_26))? 1 : 0)|(int32_t)L_27)))
		{
			goto IL_0147;
		}
	}
	{
		// bool stepLegIsNearLeg = nearFoot.distanceFromCenter > farFoot.distanceFromCenter;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_28 = __this->___nearFoot_21;
		NullCheck(L_28);
		float L_29 = L_28->___distanceFromCenter_2;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_30 = __this->___farFoot_22;
		NullCheck(L_30);
		float L_31 = L_30->___distanceFromCenter_2;
		// if (stepLegIsNearLeg) {
		if (!((((float)L_29) > ((float)L_31))? 1 : 0))
		{
			goto IL_00d7;
		}
	}
	{
		// stepFoot = nearFoot;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_32 = __this->___nearFoot_21;
		V_6 = L_32;
		// otherFoot = farFoot;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_33 = __this->___farFoot_22;
		V_7 = L_33;
		goto IL_00e7;
	}

IL_00d7:
	{
		// stepFoot = farFoot;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_34 = __this->___farFoot_22;
		V_6 = L_34;
		// otherFoot = nearFoot;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_35 = __this->___nearFoot_21;
		V_7 = L_35;
	}

IL_00e7:
	{
		// if (!stepFoot.IsStepInProgress && otherFoot.IsPrettyMuchDoneStepping) {
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_36 = V_6;
		NullCheck(L_36);
		bool L_37;
		L_37 = Foot_get_IsStepInProgress_mA1AC28B72DECB51532B32601CE8846F6C8B4DE47(L_36, NULL);
		if (L_37)
		{
			goto IL_0147;
		}
	}
	{
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_38 = V_7;
		NullCheck(L_38);
		bool L_39;
		L_39 = Foot_get_IsPrettyMuchDoneStepping_m7C03EFB21F63D2D80A8BB470556D9003934D2442(L_38, NULL);
		if (!L_39)
		{
			goto IL_0147;
		}
	}
	{
		// float newDisplacement = Foot.GetNewDisplacement(otherFoot.displacementFromCenter, comfyDistance, minimumSpaceBetweenFeet, maxNewStepDisplacement, forward, backward);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_40 = V_7;
		NullCheck(L_40);
		float L_41 = L_40->___displacementFromCenter_1;
		float L_42 = __this->___comfyDistance_9;
		float L_43 = __this->___minimumSpaceBetweenFeet_13;
		float L_44 = __this->___maxNewStepDisplacement_14;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_45 = __this->___forward_17;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_46 = __this->___backward_18;
		float L_47;
		L_47 = Foot_GetNewDisplacement_m253FA575885E1BFD9A08453F3EEA485CC76EB58B(L_41, L_42, L_43, L_44, L_45, L_46, NULL);
		V_8 = L_47;
		// stepFoot.StartNewStep(newDisplacement, centerOfGravityX, thisTransformPosition.y, footRayRaise, hits, footSize);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_48 = V_6;
		float L_49 = V_8;
		float L_50 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_1;
		float L_52 = L_51.___y_1;
		float L_53 = __this->___footRayRaise_8;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_54 = __this->___hits_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = __this->___footSize_7;
		NullCheck(L_48);
		Foot_StartNewStep_mBD1D603E15E67A2D68A8910DEBEA6D1C5D4F0F66(L_48, L_49, L_50, L_52, L_53, L_54, L_55, NULL);
	}

IL_0147:
	{
		// float deltaTime = Time.deltaTime;
		float L_56;
		L_56 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_4 = L_56;
		// float stepSpeed = baseLerpSpeed;
		float L_57 = __this->___baseLerpSpeed_16;
		V_5 = L_57;
		// stepSpeed += (Mathf.Abs(balance) - 0.6f) * 2.5f;
		float L_58 = V_5;
		float L_59 = __this->___balance_19;
		float L_60;
		L_60 = fabsf(L_59);
		V_5 = ((float)il2cpp_codegen_add(L_58, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_60, (0.600000024f))), (2.5f)))));
		// nearFoot.UpdateStepProgress(deltaTime, stepSpeed, shuffleDistance, forward, backward);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_61 = __this->___nearFoot_21;
		float L_62 = V_4;
		float L_63 = V_5;
		float L_64 = __this->___shuffleDistance_15;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_65 = __this->___forward_17;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_66 = __this->___backward_18;
		NullCheck(L_61);
		Foot_UpdateStepProgress_mEA027C09D42615548AEBD676D9C8EF954D396FEF(L_61, L_62, L_63, L_64, L_65, L_66, NULL);
		// farFoot.UpdateStepProgress(deltaTime, stepSpeed, shuffleDistance, forward, backward);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_67 = __this->___farFoot_22;
		float L_68 = V_4;
		float L_69 = V_5;
		float L_70 = __this->___shuffleDistance_15;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_71 = __this->___forward_17;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_72 = __this->___backward_18;
		NullCheck(L_67);
		Foot_UpdateStepProgress_mEA027C09D42615548AEBD676D9C8EF954D396FEF(L_67, L_68, L_69, L_70, L_71, L_72, NULL);
		// nearFootBone.SetLocalPosition(thisTransform.InverseTransformPoint(nearFoot.worldPos));
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_73 = __this->___nearFootBone_24;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = V_0;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_75 = __this->___nearFoot_21;
		NullCheck(L_75);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = L_75->___worldPos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_76, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_74, L_77, NULL);
		SkeletonExtensions_SetLocalPosition_m31F8C6865EF828AE77BB9F36D7A9D3B553D07F37(L_73, L_78, NULL);
		// farFootBone.SetLocalPosition(thisTransform.InverseTransformPoint(farFoot.worldPos));
		Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* L_79 = __this->___farFootBone_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80 = V_0;
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_81 = __this->___farFoot_22;
		NullCheck(L_81);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = L_81->___worldPos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_82, NULL);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_80, L_83, NULL);
		SkeletonExtensions_SetLocalPosition_m31F8C6865EF828AE77BB9F36D7A9D3B553D07F37(L_79, L_84, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFootplanter_OnDrawGizmos_m5D064878DEA1E98FDF2DC09E8342AE3B5AC68E9C (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0083;
		}
	}
	{
		// Gizmos.color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		// Gizmos.DrawSphere(nearFoot.worldPos, Radius);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_2 = __this->___nearFoot_21;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2->___worldPos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_4, (0.150000006f), NULL);
		// Gizmos.DrawWireSphere(nearFoot.worldPosNext, Radius);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_5 = __this->___nearFoot_21;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5->___worldPosNext_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_7, (0.150000006f), NULL);
		// Gizmos.color = Color.magenta;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_8, NULL);
		// Gizmos.DrawSphere(farFoot.worldPos, Radius);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_9 = __this->___farFoot_22;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = L_9->___worldPos_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_11, (0.150000006f), NULL);
		// Gizmos.DrawWireSphere(farFoot.worldPosNext, Radius);
		Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* L_12 = __this->___farFoot_22;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = L_12->___worldPosNext_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_14, (0.150000006f), NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFootplanter__ctor_mDB9CD6E142ECE4E0AD000FA7B78700502DE835A5 (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float timeScale = 0.5f;
		__this->___timeScale_4 = (0.5f);
		// public float footRayRaise = 2f;
		__this->___footRayRaise_8 = (2.0f);
		// public float comfyDistance = 1f;
		__this->___comfyDistance_9 = (1.0f);
		// public float centerOfGravityXOffset = -0.25f;
		__this->___centerOfGravityXOffset_10 = (-0.25f);
		// public float feetTooFarApartThreshold = 3f;
		__this->___feetTooFarApartThreshold_11 = (3.0f);
		// public float offBalanceThreshold = 1.4f;
		__this->___offBalanceThreshold_12 = (1.39999998f);
		// public float minimumSpaceBetweenFeet = 0.5f;
		__this->___minimumSpaceBetweenFeet_13 = (0.5f);
		// public float maxNewStepDisplacement = 2f;
		__this->___maxNewStepDisplacement_14 = (2.0f);
		// public float shuffleDistance = 1f;
		__this->___shuffleDistance_15 = (1.0f);
		// public float baseLerpSpeed = 3.5f;
		__this->___baseLerpSpeed_16 = (3.5f);
		// RaycastHit2D[] hits = new RaycastHit2D[1];
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_0 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___hits_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_26), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpineboyFootplanter/FootMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FootMovement__ctor_m28FF710CC8842006D8E8E19760CE93603D4E9065 (FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Spine.Unity.Examples.SpineboyFootplanter/Foot::get_IsStepInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Foot_get_IsStepInProgress_mA1AC28B72DECB51532B32601CE8846F6C8B4DE47 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsStepInProgress { get { return lerp < 1f; } }
		float L_0 = __this->___lerp_3;
		return (bool)((((float)L_0) < ((float)(1.0f)))? 1 : 0);
	}
}
// System.Boolean Spine.Unity.Examples.SpineboyFootplanter/Foot::get_IsPrettyMuchDoneStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Foot_get_IsPrettyMuchDoneStepping_m7C03EFB21F63D2D80A8BB470556D9003934D2442 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPrettyMuchDoneStepping { get { return lerp > 0.7f; } }
		float L_0 = __this->___lerp_3;
		return (bool)((((float)L_0) > ((float)(0.699999988f)))? 1 : 0);
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::UpdateDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot_UpdateDistance_m3BAF945103B896A64C31BB379566E7FC286B820B (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, float ___0_centerOfGravityX, const RuntimeMethod* method) 
{
	{
		// displacementFromCenter = worldPos.x - centerOfGravityX;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___worldPos_0);
		float L_1 = L_0->___x_0;
		float L_2 = ___0_centerOfGravityX;
		__this->___displacementFromCenter_1 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// distanceFromCenter = Mathf.Abs(displacementFromCenter);
		float L_3 = __this->___displacementFromCenter_1;
		float L_4;
		L_4 = fabsf(L_3);
		__this->___distanceFromCenter_2 = L_4;
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::StartNewStep(System.Single,System.Single,System.Single,System.Single,UnityEngine.RaycastHit2D[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot_StartNewStep_mBD1D603E15E67A2D68A8910DEBEA6D1C5D4F0F66 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, float ___0_newDistance, float ___1_centerOfGravityX, float ___2_tentativeY, float ___3_footRayRaise, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___4_hits, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___5_footSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* G_B2_0 = NULL;
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* G_B1_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* G_B3_1 = NULL;
	{
		// lerp = 0f;
		__this->___lerp_3 = (0.0f);
		// worldPosPrev = worldPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___worldPos_0;
		__this->___worldPosPrev_4 = L_0;
		// float newX = centerOfGravityX - newDistance;
		float L_1 = ___1_centerOfGravityX;
		float L_2 = ___0_newDistance;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// Vector2 origin = new Vector2(newX, tentativeY + footRayRaise);
		float L_3 = V_0;
		float L_4 = ___2_tentativeY;
		float L_5 = ___3_footRayRaise;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_3, ((float)il2cpp_codegen_add(L_4, L_5)), /*hidden argument*/NULL);
		// int hitCount = Physics2D.BoxCast(origin, footSize, 0f, Vector2.down, new ContactFilter2D { useTriggers = false }, hits);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___5_footSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14));
		(&V_2)->___useTriggers_0 = (bool)0;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 L_9 = V_2;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_10 = ___4_hits;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Physics2D_BoxCast_m98CE5227E43693832B864B0FEF488074F15EB3D2(L_6, L_7, (0.0f), L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// worldPosNext = hitCount > 0 ? hits[0].point : new Vector2(newX, tentativeY);
		int32_t L_12 = V_1;
		G_B1_0 = __this;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0058;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = ___2_tentativeY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		goto IL_0065;
	}

IL_0058:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_16 = ___4_hits;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		G_B3_0 = L_17;
		G_B3_1 = G_B2_0;
	}

IL_0065:
	{
		NullCheck(G_B3_1);
		G_B3_1->___worldPosNext_5 = G_B3_0;
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::UpdateStepProgress(System.Single,System.Single,System.Single,Spine.Unity.Examples.SpineboyFootplanter/FootMovement,Spine.Unity.Examples.SpineboyFootplanter/FootMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot_UpdateStepProgress_mEA027C09D42615548AEBD676D9C8EF954D396FEF (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, float ___0_deltaTime, float ___1_stepSpeed, float ___2_shuffleDistance, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___3_forwardMovement, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___4_backwardMovement, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* G_B5_0 = NULL;
	{
		// if (!this.IsStepInProgress)
		bool L_0;
		L_0 = Foot_get_IsStepInProgress_mA1AC28B72DECB51532B32601CE8846F6C8B4DE47(__this, NULL);
		if (L_0)
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
		// lerp += deltaTime * stepSpeed;
		float L_1 = __this->___lerp_3;
		float L_2 = ___0_deltaTime;
		float L_3 = ___1_stepSpeed;
		__this->___lerp_3 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// float strideSignedSize = worldPosNext.x - worldPosPrev.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___worldPosNext_5);
		float L_5 = L_4->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___worldPosPrev_4);
		float L_7 = L_6->___x_0;
		// float strideSign = Mathf.Sign(strideSignedSize);
		float L_8 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_8, NULL);
		V_0 = L_9;
		// float strideSize = (Mathf.Abs(strideSignedSize));
		float L_10;
		L_10 = fabsf(L_8);
		V_1 = L_10;
		// var movement = strideSign > 0 ? forwardMovement : backwardMovement;
		float L_11 = V_0;
		if ((((float)L_11) > ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_12 = ___4_backwardMovement;
		G_B5_0 = L_12;
		goto IL_004b;
	}

IL_0049:
	{
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_13 = ___3_forwardMovement;
		G_B5_0 = L_13;
	}

IL_004b:
	{
		V_2 = G_B5_0;
		// worldPos.x = Mathf.Lerp(worldPosPrev.x, worldPosNext.x, movement.xMoveCurve.Evaluate(lerp));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___worldPos_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___worldPosPrev_4);
		float L_16 = L_15->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___worldPosNext_5);
		float L_18 = L_17->___x_0;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_19 = V_2;
		NullCheck(L_19);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = L_19->___xMoveCurve_0;
		float L_21 = __this->___lerp_3;
		NullCheck(L_20);
		float L_22;
		L_22 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_20, L_21, NULL);
		float L_23;
		L_23 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_16, L_18, L_22, NULL);
		L_14->___x_0 = L_23;
		// float groundLevel = Mathf.Lerp(worldPosPrev.y, worldPosNext.y, lerp);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___worldPosPrev_4);
		float L_25 = L_24->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___worldPosNext_5);
		float L_27 = L_26->___y_1;
		float L_28 = __this->___lerp_3;
		float L_29;
		L_29 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, L_27, L_28, NULL);
		V_3 = L_29;
		// if (strideSize > shuffleDistance) {
		float L_30 = V_1;
		float L_31 = ___2_shuffleDistance;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_00eb;
		}
	}
	{
		// float strideSizeFootRaise = Mathf.Clamp((strideSize * 0.5f), 1f, 2f);
		float L_32 = V_1;
		float L_33;
		L_33 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_32, (0.5f))), (1.0f), (2.0f), NULL);
		V_4 = L_33;
		// worldPos.y = groundLevel + (movement.raiseCurve.Evaluate(lerp) * movement.maxRaise * strideSizeFootRaise);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&__this->___worldPos_0);
		float L_35 = V_3;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_36 = V_2;
		NullCheck(L_36);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_37 = L_36->___raiseCurve_1;
		float L_38 = __this->___lerp_3;
		NullCheck(L_37);
		float L_39;
		L_39 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_37, L_38, NULL);
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_40 = V_2;
		NullCheck(L_40);
		float L_41 = L_40->___maxRaise_2;
		float L_42 = V_4;
		L_34->___y_1 = ((float)il2cpp_codegen_add(L_35, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_39, L_41)), L_42))));
		goto IL_0109;
	}

IL_00eb:
	{
		// lerp += Time.deltaTime;
		float L_43 = __this->___lerp_3;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___lerp_3 = ((float)il2cpp_codegen_add(L_43, L_44));
		// worldPos.y = groundLevel;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___worldPos_0);
		float L_46 = V_3;
		L_45->___y_1 = L_46;
	}

IL_0109:
	{
		// if (lerp > 1f)
		float L_47 = __this->___lerp_3;
		if ((!(((float)L_47) > ((float)(1.0f)))))
		{
			goto IL_0121;
		}
	}
	{
		// lerp = 1f;
		__this->___lerp_3 = (1.0f);
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Single Spine.Unity.Examples.SpineboyFootplanter/Foot::GetNewDisplacement(System.Single,System.Single,System.Single,System.Single,Spine.Unity.Examples.SpineboyFootplanter/FootMovement,Spine.Unity.Examples.SpineboyFootplanter/FootMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Foot_GetNewDisplacement_m253FA575885E1BFD9A08453F3EEA485CC76EB58B (float ___0_otherLegDisplacementFromCenter, float ___1_comfyDistance, float ___2_minimumFootDistanceX, float ___3_maxNewStepDisplacement, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___4_forwardMovement, FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* ___5_backwardMovement, const RuntimeMethod* method) 
{
	FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* G_B3_0 = NULL;
	{
		// var movement = Mathf.Sign(otherLegDisplacementFromCenter) < 0 ? forwardMovement : backwardMovement;
		float L_0 = ___0_otherLegDisplacementFromCenter;
		float L_1;
		L_1 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_0, NULL);
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0011;
		}
	}
	{
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_2 = ___5_backwardMovement;
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_0011:
	{
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_3 = ___4_forwardMovement;
		G_B3_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// float randomCompensate = Random.Range(movement.minDistanceCompensate, movement.maxDistanceCompensate);
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->___minDistanceCompensate_3;
		FootMovement_t4338D4F5184453D3EA2F8842B14D78A07B732AE1* L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->___maxDistanceCompensate_4;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_5, L_7, NULL);
		V_1 = L_8;
		// float newDisplacement = (otherLegDisplacementFromCenter * randomCompensate);
		float L_9 = ___0_otherLegDisplacementFromCenter;
		float L_10 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		// if (Mathf.Abs(newDisplacement) > maxNewStepDisplacement || Mathf.Abs(otherLegDisplacementFromCenter) < minimumFootDistanceX)
		float L_11 = V_2;
		float L_12;
		L_12 = fabsf(L_11);
		float L_13 = ___3_maxNewStepDisplacement;
		if ((((float)L_12) > ((float)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		float L_14 = ___0_otherLegDisplacementFromCenter;
		float L_15;
		L_15 = fabsf(L_14);
		float L_16 = ___2_minimumFootDistanceX;
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0047;
		}
	}

IL_003c:
	{
		// newDisplacement = comfyDistance * Mathf.Sign(newDisplacement) * randomCompensate;
		float L_17 = ___1_comfyDistance;
		float L_18 = V_2;
		float L_19;
		L_19 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_18, NULL);
		float L_20 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, L_19)), L_20));
	}

IL_0047:
	{
		// return newDisplacement;
		float L_21 = V_2;
		return L_21;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFootplanter/Foot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Foot__ctor_mBA0C7D39FA1E88E916220743B3ADC2A8C9CB89D2 (Foot_tAFACE48767C95CB3EC6365D039FF158BC912996D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Collections.IEnumerator Spine.Unity.Examples.SpineboyFreeze::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpineboyFreeze_Start_m3E9171335C76C2691007896AF0AAD69533E0024B (SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* L_0 = (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C*)il2cpp_codegen_object_new(U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__11__ctor_mE8F7A7333E487066677DCD005585E799A04778B9(L_0, 0, NULL);
		U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFreeze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyFreeze__ctor_mBD852848A599891920D5EDB07277E13AF422C813 (SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float freezePoint = 0.5f;
		__this->___freezePoint_10 = (0.5f);
		// public string colorProperty = "_Color";
		__this->___colorProperty_11 = _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorProperty_11), (void*)_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		// public string blackTintProperty = "_Black";
		__this->___blackTintProperty_12 = _stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blackTintProperty_12), (void*)_stringLiteralCF2CC3014D6D9E01B61D021A6B1D82316EA17AF0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11__ctor_mE8F7A7333E487066677DCD005585E799A04778B9 (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11_System_IDisposable_Dispose_mA882649087902D9DCA608066444F1BCA9EE2ED75 (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__11_MoveNext_m372FE2FF819FF3B01F88528BCEAEF10C88A35867 (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_00d6;
			}
			case 3:
			{
				goto IL_0140;
			}
			case 4:
			{
				goto IL_01ad;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// block = new MaterialPropertyBlock();
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_3 = V_1;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_4 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_4, NULL);
		NullCheck(L_3);
		L_3->___block_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___block_13), (void*)L_4);
		// meshRenderer = GetComponent<MeshRenderer>();
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_5 = V_1;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_6 = V_1;
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_6, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___meshRenderer_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___meshRenderer_14), (void*)L_7);
		// particles.Stop();
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_8 = V_1;
		NullCheck(L_8);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = L_8->___particles_9;
		NullCheck(L_9);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_9, NULL);
		// particles.Clear();
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_10 = V_1;
		NullCheck(L_10);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = L_10->___particles_9;
		NullCheck(L_11);
		ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732(L_11, NULL);
		// var main = particles.main;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_12 = V_1;
		NullCheck(L_12);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = L_12->___particles_9;
		NullCheck(L_13);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_14;
		L_14 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_13, NULL);
		V_2 = L_14;
		// main.loop = false;
		MainModule_set_loop_mB3FC83A6DA8D248D15C53388D6B9B7711ADD89BE((&V_2), (bool)0, NULL);
		// var state = skeletonAnimation.AnimationState;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_15 = V_1;
		NullCheck(L_15);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_16 = L_15->___skeletonAnimation_4;
		NullCheck(L_16);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_17;
		L_17 = SkeletonAnimation_get_AnimationState_m1A20C545DDF883CDCEC6DDD1FABFFFAC2BB46338(L_16, NULL);
		__this->___U3CstateU3E5__2_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateU3E5__2_3), (void*)L_17);
	}

IL_0083:
	{
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// state.SetAnimation(0, freeze, false);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_19 = __this->___U3CstateU3E5__2_3;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_20 = V_1;
		NullCheck(L_20);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_21 = L_20->___freeze_5;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_22;
		L_22 = AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642(L_21, NULL);
		NullCheck(L_19);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_23;
		L_23 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_19, 0, L_22, (bool)0, NULL);
		// yield return new WaitForSeconds(freezePoint);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->___freezePoint_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_26 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_26, L_25, NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// particles.Play();
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_27 = V_1;
		NullCheck(L_27);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_28 = L_27->___particles_9;
		NullCheck(L_28);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_28, NULL);
		// block.SetColor(colorProperty, freezeColor);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_29 = V_1;
		NullCheck(L_29);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_30 = L_29->___block_13;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_31 = V_1;
		NullCheck(L_31);
		String_t* L_32 = L_31->___colorProperty_11;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_33 = V_1;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = L_33->___freezeColor_7;
		NullCheck(L_30);
		MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE(L_30, L_32, L_34, NULL);
		// block.SetColor(blackTintProperty, freezeBlackColor);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_35 = V_1;
		NullCheck(L_35);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_36 = L_35->___block_13;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = L_37->___blackTintProperty_12;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_39 = V_1;
		NullCheck(L_39);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = L_39->___freezeBlackColor_8;
		NullCheck(L_36);
		MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE(L_36, L_38, L_40, NULL);
		// meshRenderer.SetPropertyBlock(block);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_41 = V_1;
		NullCheck(L_41);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_42 = L_41->___meshRenderer_14;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_43 = V_1;
		NullCheck(L_43);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_44 = L_43->___block_13;
		NullCheck(L_42);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_42, L_44, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_45 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_45, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_45);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0140:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// state.SetAnimation(0, idle, true);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_46 = __this->___U3CstateU3E5__2_3;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_47 = V_1;
		NullCheck(L_47);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_48 = L_47->___idle_6;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_49;
		L_49 = AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642(L_48, NULL);
		NullCheck(L_46);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_50;
		L_50 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_46, 0, L_49, (bool)1, NULL);
		// block.SetColor(colorProperty, Color.white);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_51 = V_1;
		NullCheck(L_51);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_52 = L_51->___block_13;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_53 = V_1;
		NullCheck(L_53);
		String_t* L_54 = L_53->___colorProperty_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_52);
		MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE(L_52, L_54, L_55, NULL);
		// block.SetColor(blackTintProperty, Color.black);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_56 = V_1;
		NullCheck(L_56);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_57 = L_56->___block_13;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_58 = V_1;
		NullCheck(L_58);
		String_t* L_59 = L_58->___blackTintProperty_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60;
		L_60 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_57);
		MaterialPropertyBlock_SetColor_m5B4E910B5E42518BBD0088055EB68E4A3A609DDE(L_57, L_59, L_60, NULL);
		// meshRenderer.SetPropertyBlock(block);
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_61 = V_1;
		NullCheck(L_61);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_62 = L_61->___meshRenderer_14;
		SpineboyFreeze_tE160E9A9B202D134BC36749EF57BFC20E11A3A64* L_63 = V_1;
		NullCheck(L_63);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_64 = L_63->___block_13;
		NullCheck(L_62);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_62, L_64, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_01ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true) {
		goto IL_0083;
	}
}
// System.Object Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEDC26B4E5331DF386966EEFBE2DEA366A6B300E1 (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__11_System_Collections_IEnumerator_Reset_m79D58AE6D0CEEC558DAFA7A0F8D107C5A6CF09B3 (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__11_System_Collections_IEnumerator_Reset_m79D58AE6D0CEEC558DAFA7A0F8D107C5A6CF09B3_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SpineboyFreeze/<Start>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__11_System_Collections_IEnumerator_get_Current_mF66A81193B706763C40E1E9A6A7D35B71364882D (U3CStartU3Ed__11_t352BCAD15665D39721D3F9A14352EA1A53D8377C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Collections.IEnumerator Spine.Unity.Examples.SpineboyPole::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpineboyPole_Start_m785EBAA1BE876B3D5C1EB325419EBDDAB5B8A1F6 (SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* L_0 = (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3*)il2cpp_codegen_object_new(U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__8__ctor_m7F1AAEFDAE66D14128B29719319F9D06E26D760A(L_0, 0, NULL);
		U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPole::SetXPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyPole_SetXPosition_m3853E225BC593EAAF85E91659A8BAB9F196903E1 (SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* __this, float ___0_x, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tp = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		V_0 = L_1;
		// tp.x = x;
		float L_2 = ___0_x;
		(&V_0)->___x_2 = L_2;
		// transform.localPosition = tp;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyPole__ctor_m5DF4DEFA2D429CF27ACB72500D86D0F3DD871B06 (SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpineboyPole/<Start>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m7F1AAEFDAE66D14128B29719319F9D06E26D760A (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPole/<Start>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_IDisposable_Dispose_m171BFE22E5A5D9FF0AA11E0E28830379ECE689BE (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SpineboyPole/<Start>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__8_MoveNext_m2091999698C0777611EDE3DC51F72455537A5634 (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* V_1 = NULL;
	TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_011b;
			}
			case 3:
			{
				goto IL_013b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var state = skeletonAnimation.state;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_3 = V_1;
		NullCheck(L_3);
		SkeletonAnimation_tA7637DB9E47845B3BFB091C272604F43BC71B29A* L_4 = L_3->___skeletonAnimation_4;
		NullCheck(L_4);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_5 = L_4->___state_44;
		__this->___U3CstateU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateU3E5__2_3), (void*)L_5);
	}

IL_003e:
	{
		// SetXPosition(startX);
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_6 = V_1;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___startX_8;
		NullCheck(L_6);
		SpineboyPole_SetXPosition_m3853E225BC593EAAF85E91659A8BAB9F196903E1(L_6, L_8, NULL);
		// separator.enabled = false; // Disable Separator during run.
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_9 = V_1;
		NullCheck(L_9);
		SkeletonRenderSeparator_t1DFE75BAF91824B87DD05D478D6F87CD4EBC5B8B* L_10 = L_9->___separator_5;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
		// state.SetAnimation(0, run, true);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_11 = __this->___U3CstateU3E5__2_3;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_12 = V_1;
		NullCheck(L_12);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_13 = L_12->___run_6;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_14;
		L_14 = AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642(L_13, NULL);
		NullCheck(L_11);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_15;
		L_15 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_11, 0, L_14, (bool)1, NULL);
		// state.TimeScale = RunTimeScale;
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_16 = __this->___U3CstateU3E5__2_3;
		NullCheck(L_16);
		AnimationState_set_TimeScale_m80AE4AE09166CDC0B6AAC2F2B429A14312FF3217_inline(L_16, (1.5f), NULL);
		goto IL_00bc;
	}

IL_0081:
	{
		// transform.Translate(Vector3.right * Speed * Time.deltaTime);
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (18.0f), NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		NullCheck(L_18);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_18, L_22, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00bc:
	{
		// while (transform.localPosition.x < endX) {
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		float L_26 = L_25.___x_2;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___endX_9;
		if ((((float)L_26) < ((float)L_28)))
		{
			goto IL_0081;
		}
	}
	{
		// SetXPosition(endX);
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_29 = V_1;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->___endX_9;
		NullCheck(L_29);
		SpineboyPole_SetXPosition_m3853E225BC593EAAF85E91659A8BAB9F196903E1(L_29, L_31, NULL);
		// separator.enabled = true; // Enable Separator when hit
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_32 = V_1;
		NullCheck(L_32);
		SkeletonRenderSeparator_t1DFE75BAF91824B87DD05D478D6F87CD4EBC5B8B* L_33 = L_32->___separator_5;
		NullCheck(L_33);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_33, (bool)1, NULL);
		// var poleTrack = state.SetAnimation(0, pole, false);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_34 = __this->___U3CstateU3E5__2_3;
		SpineboyPole_tB6E6558F7D5EC05DB5C334AD5F7AC6268222D140* L_35 = V_1;
		NullCheck(L_35);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_36 = L_35->___pole_7;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_37;
		L_37 = AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642(L_36, NULL);
		NullCheck(L_34);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_38;
		L_38 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_34, 0, L_37, (bool)0, NULL);
		V_2 = L_38;
		// yield return new WaitForSpineAnimationComplete(poleTrack);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_39 = V_2;
		WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* L_40 = (WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D*)il2cpp_codegen_object_new(WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		WaitForSpineAnimationComplete__ctor_m89F711D8F8BFE9FB66A3D10BFF4DA26D2226DA66(L_40, L_39, (bool)0, NULL);
		__this->___U3CU3E2__current_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_40);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_011b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_41 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_41, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_013b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true) {
		goto IL_003e;
	}
}
// System.Object Spine.Unity.Examples.SpineboyPole/<Start>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m826E45D8B604363AC0CF7EBD5D03144783B3DCF7 (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPole/<Start>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m0EC14872DA4560C37AD1A0C8D03468AB79A5C8B5 (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m0EC14872DA4560C37AD1A0C8D03468AB79A5C8B5_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SpineboyPole/<Start>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__8_System_Collections_IEnumerator_get_Current_mD7A43344C9059D20A334CC9BA1883CF15AABF0E0 (U3CStartU3Ed__8_t4210CB55475B52BFFCFF94B06B62F7B831AA90E3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Collections.IEnumerator Spine.Unity.Examples.SpineboyPoleGraphic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpineboyPoleGraphic_Start_m3A22964EC2668269F0534947A8613CFF89879D6C (SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* L_0 = (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069*)il2cpp_codegen_object_new(U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__7__ctor_mAC853CBB790EB7B00221B57E24B909856CBAAE9F(L_0, 0, NULL);
		U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic::SetXPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyPoleGraphic_SetXPosition_mD07F7C2D5C4565CBE6AD40BE4D2F825B05395621 (SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* __this, float ___0_x, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tp = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		V_0 = L_1;
		// tp.x = x;
		float L_2 = ___0_x;
		(&V_0)->___x_2 = L_2;
		// transform.localPosition = tp;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineboyPoleGraphic__ctor_m4E4C3913FC506E10E359503209534F5974729907 (SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7__ctor_mAC853CBB790EB7B00221B57E24B909856CBAAE9F (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_System_IDisposable_Dispose_mE998A545310A224FD4B10AC1DF16EA294996F1BD (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__7_MoveNext_mAC9B2A323076DD68F6C36EDA267BD254AE331CA9 (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* V_1 = NULL;
	TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_011b;
			}
			case 3:
			{
				goto IL_013b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var state = skeletonGraphic.AnimationState;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_3 = V_1;
		NullCheck(L_3);
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_4 = L_3->___skeletonGraphic_4;
		NullCheck(L_4);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_5;
		L_5 = SkeletonGraphic_get_AnimationState_m3D7C5FB2FE8A85DDC7FD3415D23E479847CA248C(L_4, NULL);
		__this->___U3CstateU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstateU3E5__2_3), (void*)L_5);
	}

IL_003e:
	{
		// SetXPosition(startX);
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_6 = V_1;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___startX_7;
		NullCheck(L_6);
		SpineboyPoleGraphic_SetXPosition_mD07F7C2D5C4565CBE6AD40BE4D2F825B05395621(L_6, L_8, NULL);
		// skeletonGraphic.enableSeparatorSlots = false; // Disable Separator during run.
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_9 = V_1;
		NullCheck(L_9);
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_10 = L_9->___skeletonGraphic_4;
		NullCheck(L_10);
		L_10->___enableSeparatorSlots_55 = (bool)0;
		// state.SetAnimation(0, run, true);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_11 = __this->___U3CstateU3E5__2_3;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_12 = V_1;
		NullCheck(L_12);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_13 = L_12->___run_5;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_14;
		L_14 = AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642(L_13, NULL);
		NullCheck(L_11);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_15;
		L_15 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_11, 0, L_14, (bool)1, NULL);
		// state.TimeScale = RunTimeScale;
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_16 = __this->___U3CstateU3E5__2_3;
		NullCheck(L_16);
		AnimationState_set_TimeScale_m80AE4AE09166CDC0B6AAC2F2B429A14312FF3217_inline(L_16, (1.5f), NULL);
		goto IL_00bc;
	}

IL_0081:
	{
		// transform.Translate(Vector3.right * Speed * Time.deltaTime);
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (18.0f), NULL);
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		NullCheck(L_18);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_18, L_22, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00bc:
	{
		// while (transform.localPosition.x < endX) {
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		float L_26 = L_25.___x_2;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___endX_8;
		if ((((float)L_26) < ((float)L_28)))
		{
			goto IL_0081;
		}
	}
	{
		// SetXPosition(endX);
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_29 = V_1;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->___endX_8;
		NullCheck(L_29);
		SpineboyPoleGraphic_SetXPosition_mD07F7C2D5C4565CBE6AD40BE4D2F825B05395621(L_29, L_31, NULL);
		// skeletonGraphic.enableSeparatorSlots = true; // Enable Separator when hit
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_32 = V_1;
		NullCheck(L_32);
		SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* L_33 = L_32->___skeletonGraphic_4;
		NullCheck(L_33);
		L_33->___enableSeparatorSlots_55 = (bool)1;
		// var poleTrack = state.SetAnimation(0, pole, false);
		AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* L_34 = __this->___U3CstateU3E5__2_3;
		SpineboyPoleGraphic_t8BFB0389655C65FD1725F9E223F6464CFD3B7A85* L_35 = V_1;
		NullCheck(L_35);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_36 = L_35->___pole_6;
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_37;
		L_37 = AnimationReferenceAsset_op_Implicit_m1E191CD54500C80C3E9DDCC02BCE598FC26E5642(L_36, NULL);
		NullCheck(L_34);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_38;
		L_38 = AnimationState_SetAnimation_m99C0C1AFC68FD9DC4DEF9896EE9B1457F0BFB26D(L_34, 0, L_37, (bool)0, NULL);
		V_2 = L_38;
		// yield return new WaitForSpineAnimationComplete(poleTrack);
		TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* L_39 = V_2;
		WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D* L_40 = (WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D*)il2cpp_codegen_object_new(WaitForSpineAnimationComplete_tB1730EA3988D81D4E8A0F079D742D2AAD2334C1D_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		WaitForSpineAnimationComplete__ctor_m89F711D8F8BFE9FB66A3D10BFF4DA26D2226DA66(L_40, L_39, (bool)0, NULL);
		__this->___U3CU3E2__current_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_40);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_011b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_41 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_41, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_013b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true) {
		goto IL_003e;
	}
}
// System.Object Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4313F3BE4038218338CBAB06B86E4745671E600C (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_System_Collections_IEnumerator_Reset_m2275EA63E789B52B71D78A3572703FEBDB555FCA (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__7_System_Collections_IEnumerator_Reset_m2275EA63E789B52B71D78A3572703FEBDB555FCA_RuntimeMethod_var)));
	}
}
// System.Object Spine.Unity.Examples.SpineboyPoleGraphic/<Start>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__7_System_Collections_IEnumerator_get_Current_m2F7B7E09B99ADDAE0274F9B61422BC6185389774 (U3CStartU3Ed__7_t545EEFEA000BD2285298053B7019C7B454990069* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Spine.Unity.Examples.SpineGauge::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineGauge_Awake_m196BA09005195F30B273B8DD5748931860ED2BC8 (SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// skeletonRenderer = GetComponent<SkeletonRenderer>();
		SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* L_0;
		L_0 = Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31(__this, Component_GetComponent_TisSkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A_m75DCCFD7940DCE3D5713AE63CC69766823D61A31_RuntimeMethod_var);
		__this->___skeletonRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skeletonRenderer_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineGauge::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineGauge_Update_m02F8ECA3551DE409100EA5AF216DA4BFC925C01D (SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7* __this, const RuntimeMethod* method) 
{
	{
		// SetGaugePercent(fillPercent);
		float L_0 = __this->___fillPercent_4;
		SpineGauge_SetGaugePercent_m5ECF66152F2D5EC362C9D2C264CF6AE787B80BC9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineGauge::SetGaugePercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineGauge_SetGaugePercent_m5ECF66152F2D5EC362C9D2C264CF6AE787B80BC9 (SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7* __this, float ___0_percent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* V_0 = NULL;
	{
		// if (skeletonRenderer == null) return;
		SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* L_0 = __this->___skeletonRenderer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (skeletonRenderer == null) return;
		return;
	}

IL_000f:
	{
		// var skeleton = skeletonRenderer.skeleton; if (skeleton == null) return;
		SkeletonRenderer_t6D14A218C3A502F075DC4C4423EE2ACEBFEB620A* L_2 = __this->___skeletonRenderer_6;
		NullCheck(L_2);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_3 = L_2->___skeleton_39;
		V_0 = L_3;
		// var skeleton = skeletonRenderer.skeleton; if (skeleton == null) return;
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_4 = V_0;
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		// var skeleton = skeletonRenderer.skeleton; if (skeleton == null) return;
		return;
	}

IL_001f:
	{
		// fillAnimation.Animation.Apply(skeleton, 0, percent, false, null, 1f, MixBlend.Setup, MixDirection.In);
		AnimationReferenceAsset_t06E2B8B2B5653BBE5F0198AB4B22C2BF71907658* L_5 = __this->___fillAnimation_5;
		NullCheck(L_5);
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_6;
		L_6 = AnimationReferenceAsset_get_Animation_m6A56EAE47BFAD4D53CB371A006864432B329034F(L_5, NULL);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_7 = V_0;
		float L_8 = ___0_percent;
		NullCheck(L_6);
		Animation_Apply_mC43B0C9C2690CCB590A9332824DB73DF94A42608(L_6, L_7, (0.0f), L_8, (bool)0, (ExposedList_1_t2B9A8726FBAC69918D551BAAAA4E679883EE516E*)NULL, (1.0f), 0, 0, NULL);
		// skeleton.Update(Time.deltaTime);
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_9 = V_0;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_9);
		Skeleton_Update_mB663702B0CED507547A88DF180AAAF24993B9938(L_9, L_10, NULL);
		// skeleton.UpdateWorldTransform();
		Skeleton_tB0DB92F26D8FBB7A7B8D0A52A9E995EC9468EACC* L_11 = V_0;
		NullCheck(L_11);
		Skeleton_UpdateWorldTransform_m12FD1ACD50E9E19EA655B9F4CCD1F39F59B06F92(L_11, NULL);
		// }
		return;
	}
}
// System.Void Spine.Unity.Examples.SpineGauge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineGauge__ctor_m8C641DA2BE60E4A475C9AC67FC907F2E1246F5F1 (SpineGauge_tB2B8EC708C307F8E9FB5B605E07A80FCFF295BA7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___0_from, float ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		float L_2 = ___2_t;
		float L_3 = ___2_t;
		float L_4 = ___2_t;
		float L_5 = ___2_t;
		float L_6 = ___2_t;
		___2_t = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___1_to;
		float L_8 = ___2_t;
		float L_9 = ___0_from;
		float L_10 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SkeletonUtility_get_PositionScale_m731F77729DB16273B34EFF38475907B8D04EACB5_inline (SkeletonUtility_tD964D26EF3449A9DFD8B208915B9CB11B1028E37* __this, const RuntimeMethod* method) 
{
	{
		// public float PositionScale { get { return positionScale; } }
		float L_0 = __this->___positionScale_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_X_m10BD781CAF059F5D8E067462ED0DCE14E693905B_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float X { get { return x; } set { x = value; } }
		float L_0 = ___0_value;
		__this->___x_5 = L_0;
		// public float X { get { return x; } set { x = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_Y_mF0B3668ED180E2A2949749789869399ECDD028FD_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Y { get { return y; } set { y = value; } }
		float L_0 = ___0_value;
		__this->___y_6 = L_0;
		// public float Y { get { return y; } set { y = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrackEntry_get_TrackIndex_m50F8793A7BB90FA82EA36436AAC5A55BC565761C_inline (TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* __this, const RuntimeMethod* method) 
{
	{
		// public int TrackIndex { get { return trackIndex; } }
		int32_t L_0 = __this->___trackIndex_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* TrackEntry_get_Animation_m5BE3D98B59824CA342B208DD84BB9DE3265F7775_inline (TrackEntry_t1496EC4C0D889FEFFA9170033055B7CF70FA43EB* __this, const RuntimeMethod* method) 
{
	{
		// public Animation Animation { get { return animation; } }
		Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* L_0 = __this->___animation_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Animation_get_Name_mD835FCD7BFDAE8FD7E2C099B26887C9CACB0AF01_inline (Animation_tD27D05B1F34A664CFD328E44F1FB594E82757D62* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get { return name; } }
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Event_get_Int_m98EEB1D28BA0626B1A65FA644F1602F5EDF44021_inline (Event_t8782CEE361C403E47F27D8A94C1D162945D1E1E5* __this, const RuntimeMethod* method) 
{
	{
		// public int Int { get { return intValue; } set { intValue = value; } }
		int32_t L_0 = __this->___intValue_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Bone_get_Rotation_mAECAF93DEE8568B372FC1C813564242DE0A8E198_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, const RuntimeMethod* method) 
{
	{
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		float L_0 = __this->___rotation_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SpineboyFootplanter_get_Balance_m172CF9E20EF13645B78F42D0B032D94D8ADD7059_inline (SpineboyFootplanter_tA009108AB17A2EF80A3A9940405B42033D23A21B* __this, const RuntimeMethod* method) 
{
	{
		// public float Balance { get { return balance; } }
		float L_0 = __this->___balance_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_Rotation_mFA733E8C49F6FE44EEBE59F9347DE987B9EEA8A0_inline (Bone_t4DCECFB81ED9C0BDD1A9B761CAE8FAA260417CA5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		float L_0 = ___0_value;
		__this->___rotation_7 = L_0;
		// public float Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimationState_set_TimeScale_m80AE4AE09166CDC0B6AAC2F2B429A14312FF3217_inline (AnimationState_t056B14929BC2451BF251DE322CC4B9C7982015DC* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float TimeScale { get { return timeScale; } set { timeScale = value; } }
		float L_0 = ___0_value;
		__this->___timeScale_20 = L_0;
		// public float TimeScale { get { return timeScale; } set { timeScale = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m035D60517E8E25990ADB409B656BB95B40E5061A_gshared_inline (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E ___0_item, const RuntimeMethod* method) 
{
	TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460* L_1 = (TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TransformPairU5BU5D_t05E4D6349988CA78915E747334BEF2A999656460* L_6 = V_0;
		int32_t L_7 = V_1;
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E)L_8);
		return;
	}

IL_0034:
	{
		TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E L_9 = ___0_item;
		((  void (*) (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF*, TransformPair_tACF4827D06B9EE9194B3B4476E9F7BE9C699927E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m387746E0A910BCCB03F52FE5770AC28466E51820_gshared_inline (List_1_t1B5AB8ABE83DA8E6EE04BF7C40BB2720F769AABF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
