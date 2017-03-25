#pragma once

#include "TESForm.h"
#include "BGSStoryManagerBranchNode.h"

/*==============================================================================
class BGSStoryManagerEventNode +0000 (_vtbl=010C7FAC)
0000: class BGSStoryManagerEventNode
0000: |   class BGSStoryManagerBranchNode
0000: |   |   class BGSStoryManagerNodeBase
0000: |   |   |   class BGSStoryManagerTreeForm
0000: |   |   |   |   class TESForm
0000: |   |   |   |   |   class BaseFormComponent
==============================================================================*/
// 3C
class BGSStoryManagerEventNode : public BGSStoryManagerBranchNode
{
public:
	enum { kTypeID = (UInt32)FormType::StoryEventNode };

	UInt32	unk38;	// 38
};
STATIC_ASSERT(sizeof(BGSStoryManagerEventNode) == 0x3C);
