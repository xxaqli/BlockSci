//
//  range_map_optional_range.cpp
//  blocksci
//
//  Created by Harry Kalodner on 9/22/18.
//
//

#include "range_map.hpp"
#include "range_map_optional_impl.hpp"

#include <blocksci/address/equiv_address.hpp>
#include <blocksci/cluster/cluster.hpp>

void applyProxyMapOptionalFuncsCore(pybind11::class_<ProxySequence<random_access_sized>> &cl) {
	addProxyMapOptionalFuncsMethodsCore(cl);
}