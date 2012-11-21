/************************************************************
 *	�����츳
 *	===========================
 *	
 *		
 *			
 *		
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitRogueSpells()
{
	SpellEntry * sp = NULL;
	//װ������ʱ������1����
	sp = dbcSpell.LookupEntryForced(45182);
	if(sp)
	{
		sp->Category = 60000;
		sp->CategoryRecoveryTime = 60000;
		sp->StartRecoveryTime = 60000;
	}

	//31221	�����ʦ	�ȼ� 1		��Ǳ��״̬�ͽ��Ǳ��״̬���6���ڽ��еĹ�������ɵ��˺����$s1%��	
	//31222	�����ʦ	�ȼ� 2		��Ǳ��״̬�ͽ��Ǳ��״̬���6���ڽ��еĹ�������ɵ��˺����$s1%��
	//31223	�����ʦ	�ȼ� 3		��Ǳ��״̬�ͽ��Ǳ��״̬���6���ڽ��еĹ�������ɵ��˺����$s1%��
	//31666	�����ʦ	effect = 6 auraname = 226
	sp = dbcSpell.LookupEntryForced(31221);
	if(sp)
	{
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectTriggerSpell[1] = 31666;
		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_PROC_TRIGGER_SPELL;
	}
	sp = dbcSpell.LookupEntryForced(31222);
	if(sp)
	{
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectTriggerSpell[1] = 31666;
		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_PROC_TRIGGER_SPELL;
	}
	sp = dbcSpell.LookupEntryForced(31223);
	if(sp)
	{
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectTriggerSpell[1] = 31666;
		sp->Effect[0] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_PROC_TRIGGER_SPELL;
	}
	sp = dbcSpell.LookupEntryForced(31665);
	if(sp)
	{
		sp->DurationIndex = dbcSpell.LookupEntryForced(31666)->DurationIndex;
		sp->RankNumber = 4;
	}
	sp = dbcSpell.LookupEntryForced(31666);
	if(sp)
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_MOD_DAMAGE_PERCENT_DONE;
		sp->EffectMiscValue[0] = 127;
		sp->RankNumber = 4;
	}

	// [����]�츳
	if(sp = dbcSpell.LookupEntryForced(14156))
		sp->procFlags = 87376;

	// [�����ߵį���]
	if(sp = dbcSpell.LookupEntryForced(40477))
		//sp->ProcsPerMinute = 2.0f;

	//[���]
	if(sp = dbcSpell.LookupEntryForced(58426))
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 58427;//���
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->procChance = 100;
		dbcSpell.LookupEntryForced(58427)->DurationIndex = dbcSpell.LookupEntryForced(58428)->DurationIndex;
	}

	if(sp = dbcSpell.LookupEntryForced( 14177 )) //��Ѫ
	{
		sp->EffectSpellClassMask[0][0] = 637665798;
		sp->EffectSpellClassMask[0][1] = 262415;
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;
	}
}