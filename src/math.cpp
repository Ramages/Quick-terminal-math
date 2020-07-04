#include "math.hpp"

std::string add(std::string a, std::string b){ return std::to_string(std::stof(a) + std::stof(b)); }

std::string sub(std::string a, std::string b){ return std::to_string(std::stof(a) - std::stof(b)); }

std::string divL(std::string a, std::string b){ return std::to_string(std::stof(a) / std::stof(b)); }

std::string mult(std::string a, std::string b){ return std::to_string(std::stof(a) * std::stof(b)); }

std::string mod(std::string a, std::string b){ return std::to_string(std::stof(a) % std::stof(b)); }

std::string rise(std::string a, std::string b){ return std::to_string(pow(std::stof(a) / std::stof(b))); }

std::string sqrtL(std::string a){ return std::to_string(sqrt(std::stof(a) / std::stof(b))); }
