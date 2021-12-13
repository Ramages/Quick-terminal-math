#include "math.hpp"

std::string add(std::string a, std::string b)
{
	std::string returnStr;

	float retFloat = std::stof(a) + std::stof(b);
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}

std::string sub(std::string a, std::string b)
{
	std::string returnStr;

	float retFloat = std::stof(a) - std::stof(b);
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}

std::string divL(std::string a, std::string b)
{
	std::string returnStr;

	float retFloat = std::stof(a) / std::stof(b);
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}
std::string mult(std::string a, std::string b)
{
	std::string returnStr;

	float retFloat = std::stof(a) * std::stof(b);
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}

std::string mod(std::string a, std::string b){ return std::to_string(std::stoi(a) % std::stoi(b)); }

std::string rise(std::string a, std::string b)
{
	std::string returnStr;

	float retFloat = pow(std::stof(a), std::stof(b));
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}

std::string sqrtL(std::string a)
{
	std::string returnStr;

	float retFloat = sqrt(std::stof(a));
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}

std::string ln(std::string a)
{
	std::string returnStr;

	float retFloat = log(std::stof(a));
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}

std::string lg(std::string a)
{
	std::string returnStr;

	float retFloat = log10(std::stof(a));
	if(floor(retFloat) == retFloat)
	{
		int helper = (int)retFloat;
		returnStr = std::to_string(helper);
	}
	else
	{
		returnStr = std::to_string(retFloat);
	}
	return returnStr;
}
