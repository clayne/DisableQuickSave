#pragma once

#include "FormTypes.h"
#include "MagicItem.h"
#include "../BSCore/BSTEvent.h"
#include "../FormComponents/MagicTarget.h"

class ActiveEffect;
struct ActorInventoryEvent;

/*==============================================================================
class ReferenceEffectController +0000 (_vtbl=010887FC)
0000: class ReferenceEffectController
==============================================================================*/
class ReferenceEffectController
{
public:
	virtual ~ReferenceEffectController();		// 004D4920

	virtual void	Unk_01(UInt32 arg);                              // 00588F30 { return; }
	virtual float	Unk_02(void);                                    // 0066E8A0 { return 0.0f; }
	virtual void	Unk_03(void);                                    // 0064A3E0
	virtual void	Unk_04(UInt32 arg1, UInt32 arg2);                // 004D43E0 { return; }
	virtual float *	Unk_05(void);                                    // 006686B0 { return 0x01B910A4; }
	virtual bool	Unk_06(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_07(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_08(void);                                    // 009B86F0 { return true; }
	virtual bool	Unk_09(void);                                    // 0092D110 { return false; }
	virtual void	Unk_0A(UInt32 arg);                              // 00588F30 { return; }
	virtual void	Unk_0B(void) = 0;                                // 00F51EE8 (pure)
	virtual UInt32	Unk_0C(void) = 0;                                // 00F51EE8 (pure)
	virtual UInt32	Unk_0D(void) = 0;                                // 00F51EE8 (pure)
	virtual bool	Unk_0E(void) = 0;                                // 00F51EE8 (pure)
	virtual void	Unk_0F(void);                                    // 00668690
	virtual float	Unk_10(void);                                    // 0066E8A0 { return 0.0f; }
	virtual bool	Unk_11(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_12(void);                                    // 009B86F0 { return true; }
	virtual bool	Unk_13(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_14(void);                                    // 0092D110 { return false; }
	virtual void	Unk_15(void);                                    // 00668780
	virtual bool	Unk_16(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_17(void);                                    // 0092D110 { return false; }
	virtual UInt32	Unk_18(void);                                    // 005EADD0 { return 0; }
	virtual bool	Unk_19(void);                                    // 009B86F0 { return true; }
	virtual bool	Unk_1A(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_1B(void);                                    // 0092D110 { return false; }
	virtual bool	Unk_1C(void);                                    // 009B86F0 { return true; }
	virtual bool	Unk_1D(void);                                    // 009B86F0 { return true; }
	virtual void	Unk_1E(UInt32 arg);                              // 00588F30 { return; }
	virtual float *	Unk_1F(void);                                    // 006686B0 { return 0x01B910A4; }
	virtual bool	Unk_20(void);                                    // 0092D110 { return false; }
	virtual void	Unk_21(UInt32 arg);                              // 00588F30 { return; }
	virtual void	Unk_22(UInt32 arg);                              // 00588F30 { return; }
};


/*==============================================================================
class OwnedController +0000 (_vtbl=01088D14)
0000: class OwnedController
0000: |   class ReferenceEffectController
==============================================================================*/
class OwnedController : public ReferenceEffectController
{
public:
	virtual ~OwnedController();			// 004D90C0

	// @override class ReferenceEffectController : (vtbl=01088D14)
	virtual void	Unk_0B(void) override;                           // 00668E90
	virtual UInt32	Unk_0C(void) override;                           // 00E80F90 { return (UInt32)unkC; }
	virtual UInt32	Unk_0D(void) override;                           // 005E8920 { return (UInt32)unk8; }
	virtual bool	Unk_0E(void) override;                           // 009B86F0 { return true; }
	virtual void	Unk_0F(void) override;                           // 006687B0
	virtual bool	Unk_17(void) override;                           // 006687E0
	virtual UInt32	Unk_18(void) override;                           // 00668F20
	virtual void	Unk_21(UInt32 arg) override;                     // 00669080
	virtual void	Unk_22(UInt32 arg) override;                     // 00668D90
};


/*==============================================================================
class OwnedCameraEffectController +0000 (_vtbl=01088DA4)
0000: class OwnedCameraEffectController
0000: |   class OwnedController
0000: |   |   class ReferenceEffectController
==============================================================================*/
class OwnedCameraEffectController : OwnedController
{
	// @override class OwnedController : (vtbl=01088DA4)
	virtual bool	Unk_16(void) override;                           // 009B86F0 { return true; }
	virtual bool	Unk_1A(void) override;                           // 009B86F0 { return true; }
	virtual bool	Unk_1B(void) override;                           // 006686C0 { return (bool)unk18; }
	virtual void	Unk_21(UInt32 arg) override;                     // 006690D0
	virtual void	Unk_22(UInt32 arg) override;                     // 00668E30
};

/*==============================================================================
class SkyEffectController +0000 (_vtbl=010A8104)
0000: class SkyEffectController
0000: |   class ReferenceEffectController
==============================================================================*/
class SkyEffectController : public ReferenceEffectController
{
	// @override class ReferenceEffectController : (vtbl=010A8104)
	virtual void	Unk_0A(UInt32 arg) override;                     // 00668760
	virtual void	Unk_0B(void) override;                           // 008F0F40
	virtual UInt32	Unk_0C(void) override;                           // 00668740
	virtual UInt32	Unk_0D(void) override;                           // 005EADD0 { return 0; }
	virtual bool	Unk_0E(void) override;                           // 0092D110 { return false; }
	virtual void	Unk_0F(void) override;                           // 00668B50
	virtual bool	Unk_1A(void) override;                           // 009B86F0 { return true; }
	virtual bool	Unk_1B(void) override;                           // 00668750
};




/*==============================================================================
class ActiveEffectReferenceEffectController +0000 (_vtbl=010C8AB4)
0000: class ActiveEffectReferenceEffectController
0000: |   class ReferenceEffectController
==============================================================================*/
class ActiveEffectReferenceEffectController : public ReferenceEffectController
{
public:
	virtual ~ActiveEffectReferenceEffectController();

	// @override class ReferenceEffectController : (vtbl=010C8AB4)
	virtual void	Unk_01(UInt32 arg) override;                     // 006686D0
	virtual float	Unk_02(void) override;                           // 006686E0
	virtual void	Unk_03(void) override;                           // 006687F0
	virtual void	Unk_04(UInt32 arg1, UInt32 arg2) override;       // 006686F0
	virtual float *	Unk_05(void) override;                           // 00668840
	virtual bool	Unk_06(void) override;                           // 00668850
	virtual bool	Unk_07(void) override;                           // 006688B0
	virtual bool	Unk_08(void) override;                           // 00668B60
	virtual bool	Unk_09(void) override;                           // 00668B80
	virtual void	Unk_0A(UInt32 arg) override;                     // 00668D60
	virtual void	Unk_0B(void) override;                           // 00668FB0
	virtual UInt32	Unk_0C(void) override;                           // 006688C0
	virtual UInt32	Unk_0D(void) override;                           // 00668900
	virtual bool	Unk_0E(void) override;                           // 0092D110 { return false; }
	virtual bool	Unk_17(void) override;                           // 00668940
	virtual UInt32	Unk_18(void) override;                           // 00669000
	virtual void	Unk_1E(UInt32 arg) override;                     // 00668980
	virtual float *	Unk_1F(void) override;                           // 009995F0 { return &unkC; }
	virtual bool	Unk_20(void) override;                           // 00668700
	virtual void	Unk_21(UInt32 arg) override;                     // 00669170
	virtual void	Unk_22(UInt32 arg) override;                     // 00669070


	// @members
	//void			** _vtbl;	// 00 - 010C8AB4
	ActiveEffect	* effect;	// 04
	// ...
};


/*==============================================================================
class ActiveEffect +0000 (_vtbl=010C8B9C)
0000: class ActiveEffect
==============================================================================*/
class ActiveEffect
{
public:
	enum { kTypeID = (UInt32)FormType::ActiveMagicEffect };

	enum
	{
		kFlag_Inactive = 0x8000
	};

	virtual ~ActiveEffect();			// 00654A90

	virtual void	Unk_01(void);						// 00654EB0
	virtual void	Unk_02(void);						// 006C50E0 { return; }
	virtual void	Unk_03(void);						// 00654B70
	virtual void	Unk_04(UInt32 arg);					// 00588F30 { return; }
	virtual void	Unk_05(void);						// 00655D10
	virtual bool	Unk_06(void);						// 0092D110 { return false; }
	virtual void	Unk_07(UInt32 arg);					// 00588F30 { return; }
	virtual void	Unk_08(void);						// 006568D0
	virtual void	Unk_09(void);						// 00655DA0
	virtual void	Unk_0A(void);						// 00655830
	virtual void	Unk_0B(void);						// 00654A80
	virtual void	Unk_0C(void);						// 006552F0
	virtual void	Unk_0D(UInt32 arg);					// 00588F30 { return; }
	virtual void	Unk_0E(UInt32 arg1, UInt32 arg2);	// 004D43E0 { return; }
	virtual void	Unk_0F(void);						// 006C50E0 { return; }
	virtual void	Unk_10(void);						// 006556C0
	virtual bool	Unk_11(void);						// 0092D110 { return false; }
	virtual void	Unk_12(void);						// 006C50E0 { return; }
	virtual void	Unk_13(void);						// 006668A0
	virtual void	Unk_14(void);						// 006C50E0 { return; }
	virtual void	Unk_15(void);						// 006C50E0 { return; }
	virtual void	Unk_16(void);						// 00654E60
	virtual bool	Unk_17(void);						// 009B86F0 { return true; }
	virtual void	Unk_18(void);						// 007C1470


	// @members
	//void					** _vtbl;		// 00
	ActiveEffectReferenceEffectController	controller;	// 04
	UInt32					unk0C[8];		// 0C
	void					* niNode;		// 2C
	MagicItem				* item;			// 30
	MagicItem::EffectItem	* effect;		// 34
	TESObjectREFR			* reference;	// 38
	TESForm					* sourceItem;	// 3C
	UInt32					unk40;			// 40
	UInt32					unk44;			// 44
	float					elapsed;		// 48
	float					duration;		// 4C
	float					magnitude;		// 50
	UInt32					flags;			// 54
	UInt32					unk58;			// 58
	UInt32					effectNum;		// 5C - Somekind of counter used to determine whether the ActiveMagicEffect handle is valid
	UInt32					unk60;			// 60
	UInt32					actorValue;		// 64 - Only seems to appear on value modifiers
	UInt32					unk68;			// 68
	UInt32					unk6C;			// 6C
};

/*==============================================================================
class ScriptEffect +0000 (_vtbl=010C9DE4)
0000: class ScriptEffect
0000: |   class ActiveEffect
==============================================================================*/
class ScriptEffect : public ActiveEffect
{
public:
	virtual ~ScriptEffect();

	// @override class ActiveEffect : (vtbl=010C9DE4)
	//virtual ????   Unk_004(????) override;                           // 00669220
	//virtual ????   Unk_008(????) override;                           // 00669250
	//virtual ????   Unk_009(????) override;                           // 00669290
	//virtual ????   Unk_012(????) override;                           // 00669390
	//virtual ????   Unk_013(????) override;                           // 00669310
	//virtual ????   Unk_014(????) override;                           // 006691F0
	//virtual ????   Unk_015(????) override;                           // 00669340

	// ??
};

/*==============================================================================
class ScriptedRefEffect +0000 (_vtbl=010C9E4C)
0000: class ScriptedRefEffect
0000: |   class ScriptEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class ScriptedRefEffect : public ScriptEffect
{
public:
	virtual ~ScriptedRefEffect();

	// ??
};

/*==============================================================================
class SlowTimeEffect +0000 (_vtbl=010CA05C)
0000: class SlowTimeEffect
0000: |   class ScriptEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class SlowTimeEffect : public ScriptEffect
{
public:
	virtual ~SlowTimeEffect();

	// @override class ScriptEffect : (vtbl=010CA05C)
	//virtual ????   Unk_013(????) override;                           // 0066CC00
	//virtual ????   Unk_014(????) override;                           // 0066CB60
	//virtual ????   Unk_015(????) override;                           // 0066CA50

	// ??
};

/*==============================================================================
class ValueModifierEffect +0000 (_vtbl=010CA834)
0000: class ValueModifierEffect
0000: |   class ActiveEffect
==============================================================================*/
class ValueModifierEffect : public ActiveEffect
{
public:
	virtual ~ValueModifierEffect();

	// @override class ValueModifierEffect : (vtbl=010CA3E4)
	//virtual bool   Unk_011(void) override;                           // 0092D110 { return false; }
	//virtual ????   Unk_014(????) override;                           // 0066EBF0

	// @add
	//virtual ????   Unk_021(????);                                    // 0066E860


	// ??
};

/*==============================================================================
class BoundItemEffect +0000 (_vtbl=010C8D74)
0000: class BoundItemEffect
0000: |   class ActiveEffect
0064: |   class BSTEventSink<struct ActorInventoryEvent>
==============================================================================*/
class BoundItemEffect : public ActiveEffect,
	public BSTEventSink<ActorInventoryEvent>
{
public:
	virtual ~BoundItemEffect();

	// @override class ActiveEffect : (vtbl=010C8D74)
	//virtual ????   Unk_004(????) override;                           // 0065A440
	//virtual ????   Unk_008(????) override;                           // 00659E40
	//virtual ????   Unk_009(????) override;                           // 00659E80
	//virtual ????   Unk_00A(????) override;                           // 0065A0B0
	//virtual ????   Unk_00B(????) override;                           // 0065A0D0
	//virtual ????   Unk_012(????) override;                           // 00659F00
	//virtual ????   Unk_013(????) override;                           // 0065A130
	//virtual ????   Unk_014(????) override;                           // 00659F40
	//virtual ????   Unk_015(????) override;                           // 0065A280
	//virtual ????   Unk_016(????) override;                           // 0065A010

	// @override class BSTEventSink<struct ActorInventoryEvent> : (vtbl=010C8D68)
	//virtual ????   Unk_001(????) override;                           // 0065A050


	// ??
};

/*==============================================================================
class CloakEffect +0000 (_vtbl=010C8DDC)
0000: class CloakEffect
0000: |   class ActiveEffect
==============================================================================*/
class CloakEffect : public ActiveEffect
{
public:
	virtual ~CloakEffect();

	// ??
};

/*==============================================================================
class CommandEffect +0000 (_vtbl=010C8E84)
0000: class CommandEffect
0000: |   class ActiveEffect
==============================================================================*/
class CommandEffect : public ActiveEffect
{
public:
	virtual ~CommandEffect();

	// ??
};

/*==============================================================================
class ReanimateEffect +0000 (_vtbl=010C9BDC)
0000: class ReanimateEffect
0000: |   class CommandEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class ReanimateEffect : public CommandEffect
{
public:
	virtual ~ReanimateEffect();

	// ??
};

/*==============================================================================
class CommandSummonedEffect +0000 (_vtbl=010C8EEC)
0000: class CommandSummonedEffect
0000: |   class ActiveEffect
==============================================================================*/
class CommandSummonedEffect : public ActiveEffect
{
public:
	virtual ~CommandSummonedEffect();

	// ??
};

/*==============================================================================
class SummonCreatureEffect +0000 (_vtbl=010CA1F4)
0000: class SummonCreatureEffect
0000: |   class ActiveEffect
==============================================================================*/
class SummonCreatureEffect : public ActiveEffect
{
public:
	virtual ~SummonCreatureEffect();

	// ??
};

/*==============================================================================
class CureEffect +0000 (_vtbl=010C8F54)
0000: class CureEffect
0000: |   class ActiveEffect
==============================================================================*/
class CureEffect : public ActiveEffect
{
public:
	virtual ~CureEffect();

	// ??
};

/*==============================================================================
class DetectLifeEffect +0000 (_vtbl=010C9044)
0000: class DetectLifeEffect
0000: |   class ActiveEffect
==============================================================================*/
class DetectLifeEffect : public ActiveEffect
{
public:
	virtual ~DetectLifeEffect();

	// ??
};

/*==============================================================================
class StaggerEffect +0000 (_vtbl=010CA15C)
0000: class StaggerEffect
0000: |   class ActiveEffect
==============================================================================*/
class StaggerEffect : public ActiveEffect
{
public:
	virtual ~StaggerEffect();

	// @override class ActiveEffect : (vtbl=010CA15C)
	//virtual ????   Unk_014(????) override;                           // 0066CFC0

	// ??
};

/*==============================================================================
class DisarmEffect +0000 (_vtbl=010C90AC)
0000: class DisarmEffect
0000: |   class StaggerEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class DisarmEffect : public StaggerEffect
{
public:
	virtual ~DisarmEffect();

	// @override class StaggerEffect : (vtbl=010C90AC)
	//virtual ????   Unk_004(????) override;                           // 0065B610
	//virtual ????   Unk_014(????) override;                           // 0065B5D0

	// ??
};

/*==============================================================================
class DisguiseEffect +0000 (_vtbl=010C9114)
0000: class DisguiseEffect
0000: |   class ActiveEffect
==============================================================================*/
class DisguiseEffect : public ActiveEffect
{
public:
	virtual ~DisguiseEffect();

	// ??
};

/*==============================================================================
class DispelEffect +0000 (_vtbl=010C919C)
0000: class DispelEffect
0000: |   class ActiveEffect
==============================================================================*/
class DispelEffect : public ActiveEffect
{
public:
	virtual ~DispelEffect();

	// ??
};

/*==============================================================================
class EtherealizationEffect +0000 (_vtbl=010C92A4)
0000: class EtherealizationEffect
0000: |   class ActiveEffect
==============================================================================*/
class EtherealizationEffect : public ActiveEffect
{
public:
	virtual ~EtherealizationEffect();

	// ??
};

/*==============================================================================
class GuideEffect +0000 (_vtbl=010C93A4)
0000: class GuideEffect
0000: |   class ActiveEffect
==============================================================================*/
class GuideEffect : public ActiveEffect
{
public:
	virtual ~GuideEffect();

	// ??
};

/*==============================================================================
class LightEffect +0000 (_vtbl=010C94A4)
0000: class LightEffect
0000: |   class ActiveEffect
==============================================================================*/
class LightEffect : public ActiveEffect
{
public:
	/*==============================================================================
	struct LightEffect::AttachBestLightVisitor +0000 (_vtbl=010C9494)
	0000: struct LightEffect::AttachBestLightVisitor
	0000: |   class MagicTarget::ForEachActiveEffectVisitor
	==============================================================================*/
	struct AttachBestLightVisitor : public MagicTarget::ForEachActiveEffectVisitor
	{
		virtual bool Visit(SpellItem*) override;		// 0065DBF0
	};

	virtual ~LightEffect();

	// ??
};

/*==============================================================================
class LockEffect +0000 (_vtbl=010C951C)
0000: class LockEffect
0000: |   class ActiveEffect
==============================================================================*/
class LockEffect : public ActiveEffect
{
public:
	virtual ~LockEffect();

	// ??
};

/*==============================================================================
class OpenEffect +0000 (_vtbl=010C9A54)
0000: class OpenEffect
0000: |   class ActiveEffect
==============================================================================*/
class OpenEffect : public ActiveEffect
{
public:
	virtual ~OpenEffect();

	// ??
};

/*==============================================================================
class SoulTrapEffect +0000 (_vtbl=010CA0F4)
0000: class SoulTrapEffect
0000: |   class ActiveEffect
==============================================================================*/
class SoulTrapEffect : public ActiveEffect
{
public:
	virtual ~SoulTrapEffect();

	// ??
};

/*==============================================================================
class TelekinesisEffect +0000 (_vtbl=010CA744)
0000: class TelekinesisEffect
0000: |   class ActiveEffect
==============================================================================*/
class TelekinesisEffect : public ActiveEffect
{
public:
	virtual ~TelekinesisEffect();

	// ??
};

/*==============================================================================
class VampireLordEffect +0000 (_vtbl=010CA8BC)
0000: class VampireLordEffect
0000: |   class ActiveEffect
==============================================================================*/
class VampireLordEffect : public ActiveEffect
{
public:
	virtual ~VampireLordEffect();

	// ??
};

/*==============================================================================
class WerewolfEffect +0000 (_vtbl=010CA924)
0000: class WerewolfEffect
0000: |   class ActiveEffect
==============================================================================*/
class WerewolfEffect : public ActiveEffect
{
public:
	virtual ~WerewolfEffect();

	// ??
};

/*==============================================================================
class WerewolfFeedEffect +0000 (_vtbl=010CA98C)
0000: class WerewolfFeedEffect
0000: |   class ActiveEffect
==============================================================================*/
class WerewolfFeedEffect : public ActiveEffect
{
public:
	virtual ~WerewolfFeedEffect();

	// ??
};

/*==============================================================================
class SpawnHazardEffect +0000 (_vtbl=010CF20C)
0000: class SpawnHazardEffect
0000: |   class ActiveEffect
==============================================================================*/
class SpawnHazardEffect : public ActiveEffect
{
public:
	virtual ~SpawnHazardEffect();

	// ??
};

/*==============================================================================
class PeakValueModifierEffect +0000 (_vtbl=010C9B4C)
0000: class PeakValueModifierEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class PeakValueModifierEffect : public ValueModifierEffect
{
public:
	virtual ~PeakValueModifierEffect();

	// ??
};

/*==============================================================================
class DualValueModifierEffect +0000 (_vtbl=010C9214)
0000: class DualValueModifierEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class DualValueModifierEffect : public ValueModifierEffect
{
public:
	virtual ~DualValueModifierEffect();

	// ??
};

/*==============================================================================
class EnhanceWeaponEffect +0000 (_vtbl=010CDA7C)
0000: class EnhanceWeaponEffect
0000: |   class DualValueModifierEffect
0000: |   |   class ValueModifierEffect
0000: |   |   |   class ActiveEffect
0070: |   class BSTEventSink<struct ActorInventoryEvent>
==============================================================================*/
class EnhanceWeaponEffect : public DualValueModifierEffect,
	public BSTEventSink<ActorInventoryEvent>
{
public:
	virtual ~EnhanceWeaponEffect();

	// ??
};

/*==============================================================================
class AccumulatingValueModifierEffect +0000 (_vtbl=010C89EC)
0000: class AccumulatingValueModifierEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class AccumulatingValueModifierEffect : public ValueModifierEffect
{
public:
	virtual ~AccumulatingValueModifierEffect();

	// ??
};

/*==============================================================================
class InvisibilityEffect +0000 (_vtbl=010C940C)
0000: class InvisibilityEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class InvisibilityEffect : public ValueModifierEffect
{
public:
	virtual ~InvisibilityEffect();

	// ??
};

/*==============================================================================
class NightEyeEffect +0000 (_vtbl=010C9944)
0000: class NightEyeEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class NightEyeEffect : public ValueModifierEffect
{
public:
	virtual ~NightEyeEffect();

	// ??
};

/*==============================================================================
class ParalysisEffect +0000 (_vtbl=010C9AC4)
0000: class ParalysisEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class ParalysisEffect : public ValueModifierEffect
{
public:
	virtual ~ParalysisEffect();

	// ??
};

/*==============================================================================
class DarknessEffect +0000 (_vtbl=010C8FBC)
0000: class DarknessEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class DarknessEffect : public ValueModifierEffect
{
public:
	virtual ~DarknessEffect();

	// ??
};

/*==============================================================================
class AbsorbEffect +0000 (_vtbl=010C8964)
0000: class AbsorbEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class AbsorbEffect : public ValueModifierEffect
{
public:
	virtual ~AbsorbEffect();

	// ??
};

/*==============================================================================
class ValueAndConditionsEffect +0000 (_vtbl=010CA7AC)
0000: class ValueAndConditionsEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class ValueAndConditionsEffect : public ValueModifierEffect
{
public:
	virtual ~ValueAndConditionsEffect();

	// ??
};

/*==============================================================================
class TargetValueModifierEffect +0000 (_vtbl=????????)
0000: class TargetValueModifierEffect
0000: |   class ValueModifierEffect
0000: |   |   class ActiveEffect
==============================================================================*/
class TargetValueModifierEffect : public ValueModifierEffect
{
public:
	virtual ~TargetValueModifierEffect();

	// ??
};

/*==============================================================================
class RallyEffect +0000 (_vtbl=010CA3E4)
0000: class RallyEffect
0000: |   class TargetValueModifierEffect
0000: |   |   class ValueModifierEffect
0000: |   |   |   class ActiveEffect
==============================================================================*/
class RallyEffect : public TargetValueModifierEffect
{
public:
	virtual ~RallyEffect();

	// ??
};

/*==============================================================================
class DemoralizeEffect +0000 (_vtbl=010CA474)
0000: class DemoralizeEffect
0000: |   class TargetValueModifierEffect
0000: |   |   class ValueModifierEffect
0000: |   |   |   class ActiveEffect
==============================================================================*/
class DemoralizeEffect : public TargetValueModifierEffect
{
public:
	virtual ~DemoralizeEffect();

	// ??
};

/*==============================================================================
class CalmEffect +0000 (_vtbl=010CA624)
0000: class CalmEffect
0000: |   class TargetValueModifierEffect
0000: |   |   class ValueModifierEffect
0000: |   |   |   class ActiveEffect
==============================================================================*/
class CalmEffect : public TargetValueModifierEffect
{
public:
	virtual ~CalmEffect();

	// ??
};

/*==============================================================================
class FrenzyEffect +0000 (_vtbl=010CA6B4)
0000: class FrenzyEffect
0000: |   class TargetValueModifierEffect
0000: |   |   class ValueModifierEffect
0000: |   |   |   class ActiveEffect
==============================================================================*/
class FrenzyEffect : public TargetValueModifierEffect
{
public:
	virtual ~FrenzyEffect();

	// ??
};

/*==============================================================================
class TurnUndeadEffect +0000 (_vtbl=010CA504)
0000: class TurnUndeadEffect
0000: |   class DemoralizeEffect
0000: |   |   class TargetValueModifierEffect
0000: |   |   |   class ValueModifierEffect
0000: |   |   |   |   class ActiveEffect
==============================================================================*/
class TurnUndeadEffect : public DemoralizeEffect
{
public:
	virtual ~TurnUndeadEffect();

	// ??
};

/*==============================================================================
class BanishEffect +0000 (_vtbl=010CA594)
0000: class BanishEffect
0000: |   class DemoralizeEffect
0000: |   |   class TargetValueModifierEffect
0000: |   |   |   class ValueModifierEffect
0000: |   |   |   |   class ActiveEffect
==============================================================================*/
class BanishEffect : public DemoralizeEffect
{
public:
	virtual ~BanishEffect();

	// ??
};
