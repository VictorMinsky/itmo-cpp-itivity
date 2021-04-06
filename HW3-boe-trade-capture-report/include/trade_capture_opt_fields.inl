#ifndef FIELD
#  error You need to define FIELD macro
#else
// bitfield_num = 0 used for those fields that should be in message but not in bitfield mask
FIELD(no_sides, 0, 0)
FIELD(side, 0, 0)
FIELD(capacity, 2, 1)
FIELD(party_id, 0, 0)
FIELD(party_role, 2, 16)
FIELD(contra_side, 0, 0)
FIELD(contra_capacity, 0, 0)
FIELD(contra_party_id, 0, 0)
FIELD(contra_party_role, 0, 0)
FIELD(symbol, 1, 1)
FIELD(trade_publish_indicator, 3, 32)
#undef FIELD
#endif
