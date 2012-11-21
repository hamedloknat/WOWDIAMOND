/************************************************************
 *	սʿ�츳
 *	===========================
 *	
 *		
 *			
 *	===========================
 *
 ************************************************************/

#include "StdAfx.h"

void World::InitWarriorSpells()
{
	SpellEntry * sp = NULL;

	//[Ѫ���w�]
	if (sp = dbcSpell.LookupEntryForced(60503))
	{
		sp->ProcOnNameHash[0] = SPELL_HASH_REND;
		sp->RecoveryTime = 6000;
	}

	if (sp = dbcSpell.LookupEntryForced(46854)) //����
		sp->procFlags = PROC_ON_CRIT_ATTACK;

	if (sp = dbcSpell.LookupEntryForced(46855))
		sp->procFlags = PROC_ON_CRIT_ATTACK;

	if (sp = dbcSpell.LookupEntryForced(46913)) //Ѫӿ 3.0.9������ʽ
	{
		sp->procChance = 7;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(46914))
	{
		sp->procChance = 13;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(46915))
	{
		sp->procChance = 20;
		sp->procFlags = PROC_ON_CAST_SPELL;
	}

	if (sp = dbcSpell.LookupEntryForced(12797)) //ǿ������
		sp->procFlags = PROC_ON_CAST_SPELL;

	if (sp = dbcSpell.LookupEntryForced(12799))
		sp->procFlags = PROC_ON_CAST_SPELL;

	if (sp = dbcSpell.LookupEntryForced(50720)) //����
		sp->procFlags = PROC_ON_ANY_DAMAGE_VICTIM;

	if (sp = dbcSpell.LookupEntryForced(29593)) //ǿ��������̬
		sp->procFlags = PROC_ON_BLOCK_VICTIM|PROC_ON_DODGE_VICTIM|PROC_ON_RESIST_VICTIM;

	if (sp = dbcSpell.LookupEntryForced(29594))
		sp->procFlags = PROC_ON_BLOCK_VICTIM|PROC_ON_DODGE_VICTIM|PROC_ON_RESIST_VICTIM;

	if (sp = dbcSpell.LookupEntryForced(46945)) //����
		sp->procFlags = PROC_ON_CAST_SPELL;

	if (sp = dbcSpell.LookupEntryForced(46946))
		sp->rangeIndex = 95;

	if (sp = dbcSpell.LookupEntryForced(46947))
		sp->rangeIndex = 95;

	//�ƻ�����
	if (sp = dbcSpell.LookupEntryForced(64867))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT | PROC_ON_CRIT_ATTACK;
		sp->procChance = 2;
	}
	if (sp = dbcSpell.LookupEntryForced(56611))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT | PROC_ON_CRIT_ATTACK;
		sp->procChance = 4;
	}
	if (sp = dbcSpell.LookupEntryForced(56612))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT | PROC_ON_CRIT_ATTACK | PROC_ON_CRIT_HIT_VICTIM;
		sp->procChance = 6;
	}
	if (sp = dbcSpell.LookupEntryForced(56613))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT | PROC_ON_CRIT_ATTACK | PROC_ON_CRIT_HIT_VICTIM;
		sp->procChance = 8;
	}
	if (sp = dbcSpell.LookupEntryForced(56614))
	{
		sp->procFlags = PROC_ON_SPELL_CRIT_HIT | PROC_ON_CRIT_ATTACK | PROC_ON_CRIT_HIT_VICTIM;
		sp->procChance = 10;
	}
	if (sp = dbcSpell.LookupEntryForced(18371))
	{
		//sp->logsId = 18371;
	}

	if (sp = dbcSpell.LookupEntryForced(50227))//// [���ܺ��]
	{
		sp->ProcOnNameHash[0] = SPELL_HASH_DEVASTATE;//������
		sp->ProcOnNameHash[1] = SPELL_HASH_REVENGE;//����
	}

	//if (sp = dbcSpell.LookupEntryForced(676))//��е
	//{
	//	sp->RequiredShapeShift = (uint32)1 << (FORM_DEFENSIVESTANCE-1);//��Ҫ������̬
	//}
}