#include "math.hpp"

std::string add(std::string a, std::string b){
  std::string toReturn = "";
  if (isFloat(a) || isFloat(b)){ toReturn = std::to_string(std::stof(a) + std::stof(b)); }
  else{ toReturn = std::to_string(std::stoi(a) + std::stoi(b)); }
  return toReturn;
}

std::string sub(std::string a, std::string b){
  std::string toReturn = "";
  if (isFloat(a) || isFloat(b)){ toReturn = std::to_string(std::stof(a) - std::stof(b)); }
  else{ toReturn = std::to_string(std::stoi(a) - std::stoi(b)); }
  return toReturn;
}

std::string divL(std::string a, std::string b){ return std::to_string(std::stof(a) / std::stof(b)); }

std::string mult(std::string a, std::string b){
  std::string toReturn = "";
  if (isFloat(a) || isFloat(b)){ toReturn = std::to_string(std::stof(a) * std::stof(b)); }
  else{ toReturn = std::to_string(std::stoi(a) * std::stoi(b)); }
  return toReturn;
}

std::string mod(std::string a, std::string b){
  std::string toReturn = "";
  return std::to_string(std::stoi(a) % std::stoi(b));
}

std::string rise(std::string a, std::string b){
  std::string toReturn = "";
  if (isFloat(a) || isFloat(b)){ toReturn = std::to_string(pow(std::stof(a), std::stof(b))); }
  else{ toReturn = std::to_string(pow(std::stoi(a), std::stoi(b))); }
  return toReturn;
}

std::string sqrtL(std::string a){
  std::string toReturn = "";
  if (isFloat(a)){ toReturn = std::to_string(sqrt(std::stof(a))); }
  else{ toReturn = std::to_string(sqrt(std::stoi(a))); }
  return toReturn;
}
