#include "Globals.h"
#include "int64.hpp"
#include <stdexcept>
#include <cmath>

Int64::Int64(uint _low, uint _high) :
	Binary64(_low, _high)
{
}

Int64 Int64::fromNumber(double value)
{
	return Int64(static_cast<uint>(value), value > 0 ? static_cast<uint>(std::floor(value / 4294967296)) : 0);
}

Int64 Int64::parseInt64(std::string str, uint radix)
{
	throw std::logic_error("function not implemented");
	return Int64();
}

void Int64::setHigh(uint high)
{
	internalHigh = high;
}

uint Int64::getHigh()
{
	return internalHigh;
}

long long int Int64::toNumber()
{
	return (getHigh() * 4294967296) + low;
}

std::string Int64::toString(uint radix)
{
	throw std::logic_error("function not implemented");
	return "";
}