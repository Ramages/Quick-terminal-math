#include "helpers.hpp"

#include <iostream>

bool isFloat(std::string a){
  bool toReturn = false, mark = false;
  for (unsigned int i = 0; i < a.size(); i++){
    if (std::isdigit(static_cast<unsigned char>(a[i]))){ toReturn = true; }
    else if (a[i] == '.'){ mark = true; } // Indication of a float
    else{ toReturn = false; break; }
  }
  if (!mark){ toReturn = false; }

  return toReturn;
}

bool isSqrt(std::string a){
  bool toReturn = false;
  std::string sqrt = "sqrt";

  for (unsigned int i = 0; i < sqrt.size(); i++){
    if (a[i] == sqrt[i]){ toReturn = true; }
    else{ toReturn = false; break; }
  }
  return toReturn;
}

bool isDigit(std::string a){
  bool toReturn = false;
  for (unsigned int i = 0; i < a.size(); i++){
    if (isdigit(a[i])){ toReturn = true; }
    else{ toReturn = false; break; }
  }

  if (isSqrt(a)){ toReturn = true; } // just in case....
  if (isFloat(a)){ toReturn = true; } // just in case....
  return toReturn;
}
