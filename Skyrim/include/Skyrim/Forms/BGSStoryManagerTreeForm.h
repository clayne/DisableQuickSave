#pragma once

#include "TESForm.h"
/*==============================================================================
class BGSStoryManagerTreeForm +0000 (_vtbl=0107B40C)
0000: class BGSStoryManagerTreeForm
0000: |   class TESForm
0000: |   |   class BaseFormComponent
==============================================================================*/
// 18
class BGSStoryManagerTreeForm : public TESForm
{
public:
	virtual UInt32	Unk_3B(void);		// 005EADD0 (void) { return 0; } GetArraySize?
	virtual UInt32	Unk_3C(UInt32 arg); // 00E73CC0
	virtual void *	Unk_3D(void) = 0;
	virtual void	Unk_3E(void *arg1) = 0;

	UInt32	unk14;	// 14
};
STATIC_ASSERT(sizeof(BGSStoryManagerTreeForm) == 0x18);
