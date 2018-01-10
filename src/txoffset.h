// Copyright (c) 2017 The CLAM developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include <vector>
#include <string>

// This is for holding the transaction offset data for block prior to 
// 203500 when the txoffset stopped being used.
// The new client has differences in the tx size and is unable to calculate these values.
// This is no legitimate reason the chain should even rewind prior to block 203500
// so its okay if the client can't reproduce them anymore, but it does need them 
// to make consensus 
class CTxOffsetData
{
public: 
    typedef std::pair<int, int> pair_t;
    std::vector<pair_t> vTxOffsetData;

    CTxOffsetData() 
    { 
        load();
    }

    void load()
    {
    }

};