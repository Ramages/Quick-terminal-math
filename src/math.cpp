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

std::string rise(std::string a, std::string b){ return std::to_string(pow(std::stof(a) ,std::stof(b))); }

std::string sqrtL(std::string a){ return std::to_string(sqrt(std::stof(a))); }

std::string ln(std::string a){ return std::to_string(log(std::stof(a))); }

std::string lg(std::string a){ return std::to_string(log10(std::stof(a))); }
