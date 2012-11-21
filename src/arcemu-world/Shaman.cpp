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

void World::InitShamanSpells()
{
	SpellEntry * sp = NULL;

	// [ʯצͼ��Ч��]
	if(sp = dbcSpell.LookupEntryForced(58583))
	{
		sp->EffectTriggerSpell[0] = 58586;
	}

	if(sp = dbcSpell.LookupEntryForced(58584))
	{
		sp->EffectTriggerSpell[0] = 58587;
	}

	if(sp = dbcSpell.LookupEntryForced(58585))
	{
		sp->EffectTriggerSpell[0] = 58588;
	}

	//[ǿ����������ͼ��]
	if (sp = dbcSpell.LookupEntryForced(16086))
	{
		sp->EffectApplyAuraName[2] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[2] = 5648;
		sp->procChance = 50;
		sp->procFlags = PROC_ON_CRIT_ATTACK | PROC_ON_SPELL_CRIT_HIT | PROC_ON_SPELL_HIT;
		//sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_ON_TOTEM;
	}
	if (sp = dbcSpell.LookupEntryForced(16544))
	{
		sp->EffectApplyAuraName[2] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[2] = 5648;
		sp->procChance = 100;
		sp->procFlags = PROC_ON_CRIT_ATTACK | PROC_ON_SPELL_CRIT_HIT | PROC_ON_SPELL_HIT;
		//sp->c_is_flags |= SPELL_FLAG_IS_CASTED_ON_PET_SUMMON_ON_TOTEM;
	}
	//��ͨԪ�� ����ʱ����Ϊ30�� ����Ӧ����15��
	if (sp = dbcSpell.LookupEntryForced(16166))
	{
		sp->DurationIndex = dbcSpell.LookupEntryForced(64701)->DurationIndex;
	}
	
}
