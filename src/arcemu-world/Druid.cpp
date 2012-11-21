/************************************************************
 *	С���츳
 *	===========================
 *	
 *		
 *			
 *	===========================
 *
 ************************************************************/


#include "StdAfx.h"

void World::InitDruidSpells()
{
	SpellEntry* sp = NULL;

	//������֮����������Ч����aura
	if(sp = dbcSpell.LookupEntryForced(34123))
		sp->NameHash += 1; 

	//// [ǿ����Ⱥ����]34297 34300
	if(sp = dbcSpell.LookupEntryForced(34297))
	{
		sp->apply_on_shapeshift_change = true;
		sp->RequiredShapeShift = 255;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_DUMMY;
	}
	if(sp = dbcSpell.LookupEntryForced(34300))
	{
		sp->apply_on_shapeshift_change = true;
		sp->RequiredShapeShift = 255;
		sp->Effect[1] = SPELL_EFFECT_APPLY_AURA;
		sp->EffectApplyAuraName[1] = SPELL_AURA_DUMMY;
	}
	if(sp = dbcSpell.LookupEntryForced(17007))
	{
		sp->apply_on_shapeshift_change = true;
		sp->RequiredShapeShift = 255;
	}

	// [ǿ����Ⱥ����]�����ļ�Ѫ���ܣ�˲��
	if(sp = dbcSpell.LookupEntryForced(34299))
		sp->NameHash += 1;

	if(sp = dbcSpell.LookupEntryForced(48483))
	{
		sp->procFlags = PROC_ON_MELEE_ATTACK;
	}

	if(sp = dbcSpell.LookupEntryForced(48484))
	{
		sp->procFlags = PROC_ON_MELEE_ATTACK;
	}

	if(sp = dbcSpell.LookupEntryForced(48485))
	{
		sp->procFlags = PROC_ON_MELEE_ATTACK;
	}

	if(sp = dbcSpell.LookupEntryForced(48389))
	{
		sp->procFlags = PROC_ON_ANY_DAMAGE_VICTIM;
	}

	if(sp = dbcSpell.LookupEntryForced(48392))
	{
		sp->procFlags = PROC_ON_ANY_DAMAGE_VICTIM;
	}

	if(sp = dbcSpell.LookupEntryForced(48393))
	{
		sp->procFlags = PROC_ON_ANY_DAMAGE_VICTIM;
	}

	if(sp = dbcSpell.LookupEntryForced(48516))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if(sp = dbcSpell.LookupEntryForced(48521))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if(sp = dbcSpell.LookupEntryForced(48525))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if(sp = dbcSpell.LookupEntryForced(48517))
	{
		sp->NameHash+=1;
	}

	if(sp = dbcSpell.LookupEntryForced(48518))
	{
		sp->NameHash+=2;
	}

	if(sp = dbcSpell.LookupEntryForced(48506))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(48510))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(48511))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	
	if(sp = dbcSpell.LookupEntryForced(48384))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 50170;
	}

	if(sp = dbcSpell.LookupEntryForced(48395))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 50171;
	}

	if(sp = dbcSpell.LookupEntryForced(48396))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->EffectApplyAuraName[0] = SPELL_AURA_PROC_TRIGGER_SPELL;
		sp->EffectTriggerSpell[0] = 50172;
	}
	if(sp = dbcSpell.LookupEntryForced(51185))
	{
		sp->RequiredShapeShift = 144;
	}
	if(sp = dbcSpell.LookupEntryForced(51178))
	{
		sp->NameHash+=1;
	}
	if(sp = dbcSpell.LookupEntryForced(50334))
	{
		sp->EffectSpellClassMask[2][0] = 256;
		sp->EffectSpellClassMask[2][1] = 0;
		sp->EffectSpellClassMask[2][2] = 0;
	}

	/*if(sp = dbcSpell.LookupEntryForced(17002))// [Ұ��Ѹ��]
		sp->RequiredShapeShift = 1 | 16 | 128;//�Ա� �ܣ�����
	if(sp = dbcSpell.LookupEntryForced(24866))
		sp->RequiredShapeShift = 1 | 16 | 128; ����޸��������ܣ����ܲ�Ӧ�õõ�����30%��Ч��*/
}