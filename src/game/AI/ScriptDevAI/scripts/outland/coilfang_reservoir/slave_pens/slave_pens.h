/* This file is part of the ScriptDev2 Project. See AUTHORS file for Copyright information
* This program is free software licensed under GPL version 2
* Please see the included DOCS/LICENSE.TXT for more information */

#ifndef DEF_SERPENT_SHRINE_H
#define DEF_SERPENT_SHRINE_H

enum
{
    NPC_NATURALIST_BITE     = 17893,

    DATA_NATURALIST = 0,
};

class instance_slave_pens : public ScriptedInstance
{
    public:
        instance_slave_pens(Map* map);
        void Initialize();

        void SetData(uint32 type, uint32 data) override;
        uint32 GetData(uint32 type) const override;

        void OnCreatureCreate(Creature* creature) override;

    private:
        bool m_naturalistYelled;
};

#endif