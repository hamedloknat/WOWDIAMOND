/************************************************************
 *	��ʦ�츳
 *	===========================
 *	
 *		
 *
 *		
 *			
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitMageSpells()
{
	SpellEntry * sp = NULL;
	sp = dbcSpell.LookupEntryForced( 130 );//������
	if( sp != NULL )
		sp->EffectApplyAuraName[0] = SPELL_AURA_SAFE_FALL;
	

	// [˼ά��ȴ]
	if(sp = dbcSpell.LookupEntryForced(57761))
	{
		sp->procCharges = 1;
		sp->procFlags = PROC_ON_CAST_SPELL;
		sp->AuraInterruptFlags |= AURA_INTERRUPT_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(54646)) //רעħ��
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if(sp = dbcSpell.LookupEntryForced(44404)) //�ɵ�����
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54486))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54488))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54489))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}
	if(sp = dbcSpell.LookupEntryForced(54490))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44546)) //˼ά��ȴ
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44548))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44549))
	{
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44543)) //����ָ
	{
		sp->procChance = 7;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(44545))
	{
		sp->procChance = 15;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if(sp = dbcSpell.LookupEntryForced(33395)) //������ ˮԪ��
	{
		sp->CategoryRecoveryTime = 24000;
	}

	if(sp = dbcSpell.LookupEntryForced(55080))
	{
		sp->MechanicsType = MECHANIC_FROZEN;
	}

	if(sp = dbcSpell.LookupEntryForced(12494))
	{
		sp->MechanicsType = MECHANIC_FROZEN;
	}

	if (sp = dbcSpell.LookupEntryForced(29077))
	{
		//sp->logsId = 29077;
	}

	if (sp = dbcSpell.LookupEntryForced(57531))//[�ط�����]
	{
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;
	}
	if (sp = dbcSpell.LookupEntryForced(36032))//[�������]
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;

	if (sp = dbcSpell.LookupEntryForced(31687))//�ٻ�ˮԪ��
	{
		sp->Effect[0] = SPELL_EFFECT_SUMMON;
		sp->Effect[1] = 0;
		sp->EffectApplyAuraName[0] = sp->EffectApplyAuraName[1] = 0;
		sp->EffectMiscValueB[0] = 0;
		sp->EffectMiscValue[0] = 510;
	}
}
