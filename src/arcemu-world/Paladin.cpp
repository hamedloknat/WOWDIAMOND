/************************************************************
 *	ʥ���츳
 *	===========================
 *	
 *		
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitPaladinSpells()
{
	SpellEntry * sp = NULL;
	//����
	sp = dbcSpell.LookupEntryForced( 32746 );
	if( sp != NULL)
	{
		sp->Category = 1500;
		sp->CategoryRecoveryTime = 1500;
		sp->StartRecoveryTime = 1500;
	}

	//����
	if(sp = dbcSpell.LookupEntryForced(20271))
	{
		sp->Rank = dbcSpell.LookupEntryForced(20185)->Rank;
		sp->RankNumber = dbcSpell.LookupEntryForced(20185)->RankNumber;
	}

	// [��������ף��]
	if(sp = dbcSpell.LookupEntryForced(59295))
	{
		sp->EffectMiscValue[0] = SMT_MISC_EFFECT;
		sp->BGR_one_buff_on_target = 0;
	}
	if(sp = dbcSpell.LookupEntryForced(59296))
	{
		sp->EffectMiscValue[0] = SMT_MISC_EFFECT;
		sp->BGR_one_buff_on_target = 0;
	}
	if(sp = dbcSpell.LookupEntryForced(59297))
	{
		sp->EffectMiscValue[0] = SMT_MISC_EFFECT;
		sp->BGR_one_buff_on_target = 0;
	}
	if(sp = dbcSpell.LookupEntryForced(59298))
	{
		sp->EffectMiscValue[0] = SMT_MISC_EFFECT;
		sp->BGR_one_buff_on_target = 0;
	}

	// �츳 53486  53488
	// ���� 53489  59578
	// [��ˇ�g] �츳
	if (sp = dbcSpell.LookupEntryForced(53486))
	{
		sp->EffectMiscValue[0] = SMT_MISC_EFFECT;
		sp->EffectSpellClassMask[0][0] |= 8388608 | 32768 | 131072;
		sp->procFlags = PROC_ON_RANGED_CRIT_ATTACK|PROC_ON_SPELL_CRIT_HIT|PROC_ON_CRIT_ATTACK|PROC_ON_SPELL_CRIT_HIT;
	}	
	if (sp = dbcSpell.LookupEntryForced(53488))
	{
		sp->EffectMiscValue[0] = SMT_MISC_EFFECT;
		sp->EffectSpellClassMask[0][0] |= 8388608 | 32768 | 131072;
		sp->procFlags = PROC_ON_RANGED_CRIT_ATTACK|PROC_ON_SPELL_CRIT_HIT|PROC_ON_CRIT_ATTACK|PROC_ON_SPELL_CRIT_HIT;
	}	


	//��ʮ�־������
	if( sp = dbcSpell.LookupEntryForced( 35395 ) )
		sp->noproc = false;

	if (sp = dbcSpell.LookupEntryForced(53489))
	{
		sp->NameHash += 1;
		sp->RankNumber += 1;
	}	
	if (sp = dbcSpell.LookupEntryForced(59578))
	{
		sp->NameHash += 1;
		sp->RankNumber += 2;
	}	

	if (sp = dbcSpell.LookupEntryForced(53720))
	{
		sp->procFlags = PROC_ON_MELEE_ATTACK;
	}

	if (sp = dbcSpell.LookupEntryForced(31892))
	{
		sp->procFlags = PROC_ON_MELEE_ATTACK;
	}

	//�츳 �������� ������з�������ʹĿ��Ľ�ս�����ٶȽ���$s1%��
	if (sp = dbcSpell.LookupEntryForced(53695))
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
	}
	if (sp = dbcSpell.LookupEntryForced(53696))
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_DUMMY;
	}
	
	if (sp = dbcSpell.LookupEntryForced(53569))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if (sp = dbcSpell.LookupEntryForced(53576))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT;
	}

	if (sp = dbcSpell.LookupEntryForced(53672))
	{
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(54149))
	{
		sp->AuraInterruptFlags = AURA_INTERRUPT_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(20911))//�ӻ�ף��
	{
		sp->EffectApplyAuraName[0] = SPELL_AURA_MOD_DAMAGE_PERCENT_TAKEN;
	}

	if (sp = dbcSpell.LookupEntryForced(31850))
	{
		sp->EffectApplyAuraName[1] = SPELL_AURA_MOD_DAMAGE_PERCENT_TAKEN;
		sp->EffectBasePoints[1] = -11;
	}

	if (sp = dbcSpell.LookupEntryForced(31851))
	{
		sp->EffectApplyAuraName[1] = SPELL_AURA_MOD_DAMAGE_PERCENT_TAKEN;
		sp->EffectBasePoints[1] = -21;
	}

	if (sp = dbcSpell.LookupEntryForced(31852))
	{
		sp->EffectApplyAuraName[1] = SPELL_AURA_MOD_DAMAGE_PERCENT_TAKEN;
		sp->EffectBasePoints[1] = -31;
	}
}