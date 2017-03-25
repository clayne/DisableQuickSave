#pragma once

#include "BGSStoryManagerTreeForm.h"
#include "BGSDialogueBranch.h"
#include "TESTopic.h"
#include "../FormComponents/TESFullName.h"
#include "../FormComponents/Condition.h"
#include "../BSCore/BSString.h"
#include "../BSCore/BSFixedString.h"
#include "../BSCore/BSTArray.h"
#include "../BSCore/BSTList.h"
#include "../BSCore/BSTHashMap.h"

class BGSBaseAlias;
class BGSRefAlias;
class BGSLocAlias;
class TESGlobal;

/*==============================================================================
class TESQuest +0000 (_vtbl=010A5FEC)
0000: class TESQuest
0000: |   class BGSStoryManagerTreeForm
0000: |   |   class TESForm
0000: |   |   |   class BaseFormComponent
0018: |   class TESFullName
0018: |   |   class BaseFormComponent
==============================================================================*/
// 158
class TESQuest : public BGSStoryManagerTreeForm,
	public TESFullName		// 18
{
public:
	enum { kTypeID = (UInt32)FormType::Quest };

	// @override TESForm
	virtual void			Unk_04(void) override;							// 0056B3A0 reset/init?
	virtual void			Unk_05(void) override;							// 0056E900 release pointers?
	virtual bool			LoadForm(TESFile *mod) override;				// 0056D910
	virtual void			SaveBuffer(BGSSaveFormBuffer *arg) override;	// 0056EFA0
	virtual void			LoadBuffer(BGSLoadFormBuffer *arg) override;	// 00572BA0
	virtual void			Unk_11(BGSLoadFormBuffer *buf);					// 0056BF10
	virtual void			Unk_12(BGSLoadFormBuffer *buf);					// 0056FE30
	virtual void			InitItem(void);									// 005751D0
	virtual const char *	GetName(void) override;							// 00573770
	virtual bool			SetName(const char * str) override;				// 0056C780

	// @override BGSStoryManagerTreeForm
	virtual void *			Unk_3D(void) override;						// 00573750 (void) { return &unk98; }
	virtual void			Unk_3E(void *arg1) override;				// 0056B570 { return arg1->Unk_03(this); }


	// 8
	struct Data07C
	{
		enum {
			kQuestFlag_Running = 1,
			kQuestFlag_Completed = 0x02,
			kQuestFlag_0004 = 0x04,
			kQuestFlag_AllowRepeatStages = 0x08,
			kQuestFlag_StartGameEnabled = 0x10,
			kQuestFlag_Stopping = 0x80,
			kQuestFlag_RunOnce = 0x100,
			kQuestFlag_ExcludeFromDialogueExport = 0x200,
			kQuestFlag_WarnOnAliasFillFailure = 0x400,
			kQuestFlag_Active = 0x800
		};

		UInt32	unk0;		// 00
		UInt16	flags;		// 04
		UInt8	priority;	// 06
		UInt8	type;		// 07
	};

	struct _Data07C
	{
		UInt32	unk0;							// unknown
		struct Flags {
			bool running : 1;					// 00 -   1
			bool completed : 1;					// 01 -   2
			bool : 1;							// 02 -   4
			bool allowRepeatStages : 1;			// 03 -   8
			bool startGameEnabled : 1;			// 04 -  10
			bool : 1;							// 05 -  20
			bool : 1;							// 06 -  40
			bool stopping : 1;					// 07 -  80
			bool runOnce : 1;					// 08 - 100
			bool excludeFromDialogueExport : 1;	// 09 - 200
			bool warnOnAliasFillFailure : 1;	// 10 - 400
			bool active : 1;					// 11 - 800
		} flags;
		UInt8	priority;
		UInt8	type;
	};

	// 18
	struct Objective	// QOBJ
	{
		BSFixedString	displayText;	// 00 - NNAM 00551CA7
		TESQuest		* owner;		// 04
		UInt32			unk08;			// 08 - init'd 0
		UInt32			unk0C;			// 0C - init'd 0
		UInt16			index;			// 10 - init'd 0
		UInt8			unk12;			// 12 - init'd 0
		UInt8			unk13;			// 13 - init'd 0
		UInt32			unk14;			// 14 - init'd 0

		// ctor 00551B90
	};

	// 8
	struct Data088
	{
		UInt32	unk0;
		UInt32	unk4;
	};

	typedef BSTHashMap<BGSDialogueBranch*, BSTArray<TESTopic*> *>	TopicMap;

	// @members
	//void						** _vtbl;				// 00 - 010A5FEC
	//TESFullName				fullName				// 018 - FULL
	BSTArray<void*>				unk020;					// 020
	UInt32						unk02C;					// 02C
	BSTArray<BGSBaseAlias*>		aliases;				// 030
	BSTHashMap<UInt32, void*>	unk03C;					// 03C
	BSTHashMap<UInt32, void*>	unk05C;					// 05C
	Data07C						unk07C;					// 07C
	SInt32						unk084;					// 084 - init'd -1 - ENAM (event name?)
	Data088						unk088;					// 088
	BSSimpleList<Objective*>	objectives;				// 090 - QOBJ
	Condition					* dialogueConditions;	// 098 - CTDA (quest dialogue conditions)
	Condition					* conditions;			// 09C - CTDA (conditions)
	TopicMap					topicMap;				// 0A0
	BSTHashMap<UInt32, void*>	unk0C0;					// 0C0
	BSTArray<void*>				unk0E0[6];				// 0E0
	BSTArray<void*>				unk128;					// 128
	BSTArray<TESGlobal*>		* globals;				// 134 - QTGL (text display globals)
	UInt16						currentStageID;			// 138 - init'd 0
	UInt8						unk13A;					// 13A - init'd 0
	UInt8						pad13B;					// 13B
	BSString					questID;				// 13C
	void						* unk144;				// 144
	void						* unk148;				// 148
	BSTArray<UInt32>			unk14C;					// 14C

	bool IsCompleted(void) const;
	/// <summary>Checks to see if this quest is running or not.</summary>
	bool IsRunning(void) const;
	bool IsStarting(void) const;
	bool IsStopping(void) const;
	bool IsStopped(void) const;

	BGSBaseAlias* GetAlias(UInt32 iAliasID);

	UInt32 GetCurrentStageID(void) const {
		return currentStageID;
	}
	
	bool IsActive(void) const {
		return (unk07C.flags & Data07C::kQuestFlag_Active) != 0;
	}
	
	DEFINE_MEMBER_FN(SetActive, void, 0x0056B530);
	DEFINE_MEMBER_FN(CreateRefHandleByAliasID, RefHandle &, 0x0056EE10, RefHandle &, UInt32);
	DEFINE_MEMBER_FN(ClearReferenceAlias, void, 0x00570780, BGSRefAlias *);
	DEFINE_MEMBER_FN(ClearLocationAlias, void, 0x005709A0, BGSLocAlias *);
	DEFINE_MEMBER_FN(ForceRefTo, UInt32, 0x005728C0, UInt32 aliasId, TESObjectREFR * reference);

private:
	DEFINE_MEMBER_FN(ctor, void, 0x5735C0);
	DEFINE_MEMBER_FN(dtor, void, 0x573790);
};

STATIC_ASSERT(sizeof(TESQuest) == 0x158);
